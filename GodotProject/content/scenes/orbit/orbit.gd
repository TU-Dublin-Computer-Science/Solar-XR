extends Node3D

const OrbitMaterial = preload("res://content/assets/materials/orbit_material.tres")
const ORBIT_POINTS: float = 512#1024

const EPOCH_JULIAN_DATE = 2451545.0  # 2000-01-01.5

var julian_time: float:
	set(value):
		julian_time = value
		if _initialised:
			_update_body_position()

var _semimajor_axis: float
var _eccentricity: float
var _arg_periapsis: float  # Radians
var _mean_anomaly: float   # Radians
var _inclination: float    # Radians
var _lon_ascending_node: float  # Radians
var _orbital_period: float

var _body: Node3D
var _model_scalar: float
var _camera: XRCamera3D = null

var _initialised: bool = false

func _process(delta: float) -> void:
	var dist =  global_position.distance_to(_camera.global_position)
	
	visible = dist < 40


func init(	p_body: Node3D, 
			p_semimajor_axis: float,
			p_eccentricity: float,
			p_arg_periapsis: float,
			p_mean_anomaly: float,
			p_inclination: float, 
			p_lon_ascending_node: float,
			p_orbital_period: float,
			p_julian_time: float,
			p_model_scalar: float,
			p_camera: XRCamera3D):

	_body = p_body
	_semimajor_axis = p_semimajor_axis * p_model_scalar
	_eccentricity = p_eccentricity
	_arg_periapsis = deg_to_rad(p_arg_periapsis)
	_mean_anomaly = deg_to_rad(p_mean_anomaly)
	_inclination = deg_to_rad(p_inclination)
	_lon_ascending_node = deg_to_rad(p_lon_ascending_node)
	_orbital_period = p_orbital_period

	julian_time = p_julian_time
	_model_scalar = p_model_scalar	
	_camera = p_camera
	
	_orient_orbital_plane()
	
	_draw_orbit_visual()

	%OrbitalPlane.add_child(_body)
	
	_update_body_position()
	
	_initialised = true
	

func _orient_orbital_plane(): 
	%OrbitalPlane.transform.basis = Basis()  #Reset to initial orientation
	
	# Rotate orbital plane around the equatorial plane y axis (The Polar Axis)
	%OrbitalPlane.rotate(Vector3(0,1,0), _lon_ascending_node)
	
	# Rotate orbital plane around the orbital plane x-axis (Line of Ascending Node)
	%OrbitalPlane.rotate_object_local(Vector3(1, 0, 0), _inclination)
	
	# Rotate orbital plane around the orbital plane y-axis
	%OrbitalPlane.rotate_object_local(Vector3(0, 1, 0), _arg_periapsis)


func _draw_orbit_visual():
	var orbit_mesh = ImmediateMesh.new()
	
	orbit_mesh.surface_begin(Mesh.PRIMITIVE_LINE_STRIP)
	
	var first_point: Vector3
	
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


func _update_body_position():
	var true_anomaly = _get_true_anomaly()

	_body.position = get_orbit_point(true_anomaly)


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
	
	return true_anomaly

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
