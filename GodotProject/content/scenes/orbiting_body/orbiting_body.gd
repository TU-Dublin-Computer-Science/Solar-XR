extends Node3D
class_name OrbitingBody

const OrbitingBodyScn = preload("res://content/scenes/orbiting_body/orbiting_body.tscn")
const OrbitMaterial = preload("res://content/assets/materials/orbit_material.tres")
const InfoNodeScn = preload("res://addons/mars-ui/content/ui/components/info_nodes/info_node/info_node.tscn")

const ORBIT_POINTS: float = 1024 # Greater the number the smoother the orbit visuals

const EPOCH_JULIAN_DATE = 2451545.0  # 2000-01-01.5

const MAX_SATELLITE_DIST = 1000000
const MAX_BODY_SCALAR = 30

var time: float:
	set(value):
		time = value
		_julian_time = _unix_to_julian(time)
		
		if _initialised:
			if satellites_visible:
				for satellite in satellites:
					satellite.time = time
				
			_update()

var label_scale: float:
	set(value):
		label_scale = value
		%LabelParent.scale = Vector3(label_scale, label_scale, label_scale)
		for satellite in satellites:
			satellite.label_scale = label_scale

var body_scalar: float:
	set(value):
		body_scalar = value
	
		var model_scale = clamp(radius/0.5 * body_scalar, 0, MAX_BODY_SCALAR)
	
		_model.scale = Vector3(model_scale, model_scale, model_scale)
	
		%LabelParent.transform.origin.y = model_scale/2
		
		if satellite_bodies_will_scale:
			for satellite in satellites:
				satellite.body_scalar = body_scalar

var satellite_bodies_will_scale: bool = false

var satellites_visible: bool = false:
	set(value):
		satellites_visible = value
		for satellite in satellites:
			satellite.visible = satellites_visible

var satellite_orbits_visible: bool = true:
	set(value):
		satellite_orbits_visible = value
		for satellite in satellites:
			satellite.OrbitVisual.visible = value

var satellites = []
var info_nodes: Array[Node3D]
@onready var body = %Body
@onready var OrbitVisual = %OrbitVisual

var ID: int
var body_name: String
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

var _julian_time: float

var _model: StaticBody3D

func _process(_delta: float) -> void:
	_billboard_label()


func init(body_data: Dictionary, p_camera: XRCamera3D, p_model_scalar: float, p_time: float):
	_camera = p_camera
	_model_scalar = p_model_scalar
	
	ID = body_data["ID"]
	body_name = body_data["name"]
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
	
	_setup_body()
	
	_setup_info_nodes(body_data["info_points"])
	
	_orient_orbital_plane()
	
	if _orbiting:
		_draw_orbit_visual()

	for satellite_name in body_data["satellites"]:
		var satellite = OrbitingBodyScn.instantiate()
		var json_path = "res://content/data/bodies/%s.json" % satellite_name
		var satellite_data = Utils.load_json_file(json_path)
		
		# Show Planets, and show Moons within a maximum distance
		# This is done as there is a lot of tiny moons we would rather not show		
		if	(satellite_name == "mercury" or 
			satellite_name == "venus" or 
			satellite_name == "earth" or 
			satellite_name == "mars" or 
			satellite_name == "jupiter" or 
			satellite_name == "saturn" or 
			satellite_name == "uranus" or 
			satellite_name == "neptune" or
			satellite_data["semimajor_axis"] < MAX_SATELLITE_DIST):
				
			satellite.init(satellite_data, _camera, _model_scalar, time)
			satellites.append(satellite)
			%Body.add_child(satellite)
			satellite.visible = satellites_visible
	
	_initialised = true
	
	time = p_time


func _billboard_label():
	if _initialised and _camera != null:
		%Label.look_at(_camera.global_transform.origin, Vector3.UP)
		
		# Scale up as model gets further away
		var scale_change = %Label.global_position.distance_to(_camera.global_position)
		
		%Label.scale = Vector3(scale_change, scale_change, scale_change)


func _setup_body():
	_model = _model_scene.instantiate()
	%Body.add_child(_model)	
	_model.scale *= radius/0.5 # Scale is (desired radius)/(current radius)
	%Label/LlbName.text = body_name


func _setup_info_nodes(info_point_array: Array) -> void:
	for info_point in info_point_array:
		
		var info_node = InfoNodeScn.instantiate()
		var surface_location = _geographical_to_cartesian(	info_point["location"]["latitude"], 
															info_point["location"]["longitude"])
		
		# Have info node be positioned slightly above surface
		var direction = surface_location.normalized()
		info_node.position = direction * (surface_location.length() + 0.06)
		
		info_node.title = info_point["title"]
		info_node.image = load(info_point["image_path"])
		info_node.description = info_point["description"]
		info_node.camera = _camera
		
		info_nodes.append(info_node)
		_model.add_child(info_node)


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
	
	%OrbitVisual.mesh = orbit_mesh


func get_orbit_point(angle: float):
	# Note: Precalulate these two values if performance becomes issue
	# Calculate the semi-minor axis based on eccentricity
	var semiminor_axis = _semimajor_axis * sqrt(1 - _eccentricity * _eccentricity)
	
	# Calculate focal offset, which ensures central body remains at one focal point of the ellipse
	var focal_offset = _semimajor_axis * _eccentricity
	
	var x = cos(angle) *  _semimajor_axis - focal_offset
	var z = -sin(angle) * semiminor_axis

	return Vector3(x, 0, z)


func _update():
	if _orbiting:
		var true_anomaly = _get_true_anomaly()

		%Body.position = get_orbit_point(true_anomaly)
	
	if _rotation_enabled:
		var new_rotation = deg_to_rad(_rotation_factor * _julian_time)
		var rot_angle = new_rotation - _total_rotation
		_model.rotate_y(rot_angle)

		_total_rotation = new_rotation


func _get_true_anomaly():
	var mean_motion = TAU/(_orbital_period * 86400)
	
	# 1. Get Current Mean anomaly 
	# This is angle of body from periapsis (closest point to body) at the current time
	var t = _julian_time - EPOCH_JULIAN_DATE
	
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


func _unix_to_julian(unix_time: float):
	var greg_date = Time.get_datetime_dict_from_unix_time(unix_time)

	var year = greg_date.year
	var month = greg_date.month
	var day = greg_date.day
	var hour = greg_date.hour
	var minute = greg_date.minute
	var second = greg_date.second

	if month <= 2:
		year -= 1
		month += 12

	var A = int(year / 100)
	var B = 2 - A + int(A / 4)
	var JD = int(365.25 * (year + 4716)) + int(30.6001 * (month + 1)) + day + B - 1524.5
	JD += (hour + (minute + second / 60.0) / 60.0) / 24.0
	return JD


func _geographical_to_cartesian(lat: float, long: float) -> Vector3:
	var lat_rad = deg_to_rad(lat)
	var long_rad = deg_to_rad(long)
	
	var cart = Vector3.ZERO
	cart.x = 0.5 * cos(lat_rad) * cos(long_rad)
	cart.y = 0.5 * sin(lat_rad)
	cart.z = 0.5 * cos(lat_rad) * sin(long_rad) * -1  #In Godot -z is forward
	
	return cart
