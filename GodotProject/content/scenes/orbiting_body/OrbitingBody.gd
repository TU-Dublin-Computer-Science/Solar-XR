extends Node3D
class_name OrbitingBody

const OrbitingBodyScn = preload("res://content/scenes/orbiting_body/OrbitingBody.tscn")
const OrbitMaterial = preload("res://content/assets/materials/orbit_material.tres")

const ORBIT_POINTS: float = 1024 # Greater the number the smoother the orbit visuals

const EPOCH_JULIAN_DATE = 2451545.0  # 2000-01-01.5

var julian_time: float:
	set(value):
		julian_time = value
		if _initialised:
			for orbiting_body in orbiting_bodies:
				orbiting_body.julian_time = value
			
			_update_body_position()

var label_scale: float:
	set(value):
		label_scale = value
		%LabelParent.scale = Vector3(label_scale, label_scale, label_scale)
		for orbiting_body in orbiting_bodies:
			orbiting_body.label_scale = label_scale
		
var ID: int
var _name: String
var radius: float
var _rotation_factor: float
var _model_scene: PackedScene
var _central_body_name: String
var _semimajor_axis: float
var _eccentricity: float
var _arg_periapsis: float  # Radians
var _mean_anomaly: float   # Radians
var _inclination: float    # Radians
var _lon_ascending_node: float  # Radians
var _orbital_period: float

var _model_scalar: float
var _camera: XRCamera3D = null

var _rotation_enabled: bool = false
var _initialised: bool = false
var _orbiting: bool = false

var _total_rotation: float = 0

var orbiting_bodies = []
@onready var body = %Body

func _process(_delta: float) -> void:
	#DebugDraw3D.draw_sphere(%Body.global_position, radius * 3, Color.RED, _delta)
	_billboard_label()


func init(body_name: String, p_camera: XRCamera3D, p_model_scalar: float):
	var body_data_path = "res://content/data/bodies/%s.json" % body_name
	var body_data = _read_json_file(body_data_path)
	
	_camera = p_camera
	_model_scalar = p_model_scalar
	
	ID = body_data["ID"]
	_name = body_data["name"]
	radius = body_data["radius"] * p_model_scalar
	
	if body_data["rotation_factor"] != -1:
		_rotation_factor = body_data["rotation_factor"]
		_rotation_enabled = true

	if body_data["model_path"] != "":
		_model_scene = load(body_data["model_path"])
	else:
		_model_scene = load("res://content/scenes/model_scenes/default_moon.tscn")
	
	_central_body_name = body_data["central_body"]
	
	_semimajor_axis = body_data["semimajor_axis"] * p_model_scalar
	_eccentricity = body_data["eccentricity"]
	_arg_periapsis = deg_to_rad(body_data["argument_periapsis"])
	_mean_anomaly = deg_to_rad(body_data["mean_anomaly"])
	_inclination = deg_to_rad(body_data["inclination"])
	_lon_ascending_node = deg_to_rad(body_data["lon_ascending_node"])
	_orbital_period = body_data["orbital_period"]
	
	_orbiting = (_semimajor_axis != -1 and 
				_eccentricity != -1 and 
				_arg_periapsis != -1 and 
				_mean_anomaly != -1 and 
				_inclination != -1 and
				_lon_ascending_node != -1 and
				_orbital_period != -1)
	
	# TODO Julian time?
	# TODO _setup_info_nodes
	_setup_body()
	
	_orient_orbital_plane()
	
	if _orbiting:
		_draw_orbit_visual()

	for orbiting_body_name in body_data["satellites"]:
		var orbiting_body = OrbitingBodyScn.instantiate()
		orbiting_body.init(orbiting_body_name, _camera, _model_scalar)
		orbiting_bodies.append(orbiting_body)
		%Body.add_child(orbiting_body)
	
	_initialised = true


func _setup_body():
	%Label/LlbName.text = _name
	%LabelParent.transform.origin.y += radius
	
	var _model = _model_scene.instantiate()
	%Body.add_child(_model)
	_model.scale *= radius/0.5 # Scale is (desired radius)/(current radius)
	
	if _rotation_enabled:
		_update_model_rotation()


func _orient_orbital_plane(): 
	%OrbitalPlane.transform.basis = Basis()  #Reset to initial orientation
	
	# Rotate orbital plane around the equatorial plane y axis (The Polar Axis)
	%OrbitalPlane.rotate(Vector3(0 ,1, 0), _lon_ascending_node)
	
	# Rotate orbital plane around the orbital plane x-axis (Line of Ascending Node)
	%OrbitalPlane.rotate_object_local(Vector3(1, 0, 0), _inclination)
	
	# Rotate orbital plane around the orbital plane y-axis
	%OrbitalPlane.rotate_object_local(Vector3(0, 1, 0), _arg_periapsis)


func _draw_orbit_visual():
	var orbit_mesh = ImmediateMesh.new()
	
	orbit_mesh.surface_begin(Mesh.PRIMITIVE_LINE_STRIP)
	
	for i in range(ORBIT_POINTS):	
		
		var angle = (i / ORBIT_POINTS) * TAU
		
		orbit_mesh.surface_add_vertex(get_orbit_point(angle))

	orbit_mesh.surface_add_vertex(get_orbit_point(0))  # Add first point to close loop
	
	orbit_mesh.surface_end()
	
	var orbit_visual = MeshInstance3D.new()
	orbit_visual.mesh = orbit_mesh
	%OrbitalPlane.add_child(orbit_visual)


func get_orbit_point(angle: float):
	# Note: Precalulate these two values if performance becomes issue
	# Calculate the semi-minor axis based on eccentricity
	var semiminor_axis = _semimajor_axis * sqrt(1 - _eccentricity * _eccentricity)
	
	# Calculate focal offset, which ensures central body remains at one focal point of the ellipse
	var focal_offset = _semimajor_axis * _eccentricity
	
	var x = cos(angle) *  _semimajor_axis - focal_offset
	var z = -sin(angle) * semiminor_axis

	return Vector3(x, 0, z)


func _update_model_rotation():		
	var new_rotation = deg_to_rad(_rotation_factor * julian_time)
	var rot_angle = new_rotation - _total_rotation
	rotate_y(rot_angle)

	_total_rotation = new_rotation


func _update_body_position():
	if _orbiting:
		var true_anomaly = _get_true_anomaly()

		%Body.position = get_orbit_point(true_anomaly)


func _get_true_anomaly():
	var mean_motion = TAU/(_orbital_period * 86400)
	
	# 1. Get Current Mean anomaly 
	# This is angle of body from periapsis (closest point to body) at the current time
	var t = julian_time - EPOCH_JULIAN_DATE
	
	t *= 86400 #Convert days to seconds, as mean motion is rad/s
	var current_mean_anomaly = _mean_anomaly + (mean_motion * t)
	current_mean_anomaly = fmod(current_mean_anomaly, TAU) # wrap to [0, 2π]

	# 2. Solve Kepler's equation for the eccentric anomaly
	# This relates the current mean anomaly to orbit eccentricity
	var eccentric_anomaly = _solve_keplers_equation(current_mean_anomaly, _eccentricity)

	# 3: Calculate the true anomaly (this is the actual value, not the mean)
	var true_anomaly = 2 * atan(sqrt((1 + _eccentricity) / (1 - _eccentricity)) * tan(eccentric_anomaly / 2))	
	
	return fmod(true_anomaly + TAU, TAU)  #Return a positive value between 0 and 2π


# Solve Kepler's equation iteratively
func _solve_keplers_equation(mean_anomaly, eccentricity):
	var eccentric_anomaly = mean_anomaly  # Initial guess: E ≈ M
	var epsilon = 1e-6  # Convergence tolerance	
	while true:
		var delta = eccentric_anomaly - eccentricity * sin(eccentric_anomaly) - mean_anomaly
		if abs(delta) < epsilon:
			break
		eccentric_anomaly -= delta / (1 - eccentricity * cos(eccentric_anomaly))
	return eccentric_anomaly


func _billboard_label():
	if _initialised and _camera != null:
		%Label.look_at(_camera.global_transform.origin, Vector3.UP)
		
		# Scale up as model gets further away
		var scale_change = %Label.global_position.distance_to(_camera.global_position)
		
		%Label.scale = Vector3(scale_change, scale_change, scale_change)


func _read_json_file(file_path: String) -> Dictionary:
	var file = FileAccess.open(file_path, FileAccess.READ)
	
	if file == null:
		print("Failed to open file: ", file_path)
		return {}
	
	var json_string = file.get_as_text()  # Read the file as text
	file.close()  # Close the file after reading

	# Parse JSON
	var json_data = JSON.new()
	var error = json_data.parse(json_string)
	
	if error != OK:
		print("Failed to parse JSON: ", json_data.error_string)
		return {}

	return json_data.data  # Returns the parsed dictionary
