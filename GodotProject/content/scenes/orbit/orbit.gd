extends Node3D

const OrbitMaterial = preload("res://content/assets/materials/orbit_material.tres")
const ORBIT_MIN_THICKNESS = 0.001
const ORBIT_VISUAL_OPACITY = 0.2 # Scale of 0-1 

const EPOCH_JULIAN_DATE = 2451545.0  # 2000-01-01.5

var julian_time: float:
	set(value):
		julian_time = value
		if _initialised:
			_update_body_position()

var _semimajor_axis: float
var _eccentricity: float
var _arg_of_periapsis: float
var _mean_anomaly: float		# Radians
var _inclination: float			# Radians
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
			p_arg_of_periapsis: float, 
			p_mean_anomaly: float,
			p_inclination: float, 
			p_lon_ascending_node: float,
			p_orbital_period: float,
			p_julian_time: float,
			p_model_scalar: float,
			p_camera: XRCamera3D):

	_body = p_body
	_semimajor_axis = p_semimajor_axis
	_eccentricity = p_eccentricity
	_arg_of_periapsis = deg_to_rad(p_arg_of_periapsis)
	_mean_anomaly = deg_to_rad(p_mean_anomaly)
	_inclination = deg_to_rad(p_inclination)
	_lon_ascending_node = deg_to_rad(p_lon_ascending_node)
	_orbital_period = p_orbital_period

	julian_time = p_julian_time
	_model_scalar = p_model_scalar	
	_camera = p_camera
	
	rotate(Vector3.FORWARD, _inclination)

	add_child(_body)

	_instantiate_orbit_visual()
	
	_update_body_position()
	
	_initialised = true
	

func _update_body_position():
	var mean_motion = TAU/(_orbital_period * 86400)
	
	# 1. Get Current Mean anomaly 
	# This is angle of body from periapsis (closest point to body) at the current time
	var t = julian_time - EPOCH_JULIAN_DATE
	t *= 86400 #Convert days to seconds, as mean motion is deg/s
	var current_mean_anomaly = _mean_anomaly + mean_motion * t
	current_mean_anomaly = fmod(current_mean_anomaly, 360) # Convert to radians and wrap to [0, 2π]

	# 2. Solve Kepler's equation for the eccentric anomaly
	# This relates the current mean anomaly to orbit eccentricity
	var eccentric_anomaly = _solve_keplers_equation(current_mean_anomaly, _eccentricity)

	# 3: Calculate the true anomaly (this is the actual value, not the mean)
	var true_anomaly = 2 * atan(sqrt((1 + _eccentricity) / (1 - _eccentricity)) * tan(eccentric_anomaly / 2))	

	# 4: Calculate the orbital radius
	var orbital_radius = _semimajor_axis * (1 - _eccentricity ** 2) / (1 + _eccentricity * cos(true_anomaly))
	
	# 5: Scale down orbital radius for model
	orbital_radius *= _model_scalar
	
	# 6: Compute the x, y position in the orbital plane
	var x = orbital_radius * cos(true_anomaly)
	var y = orbital_radius * sin(true_anomaly)
	
	_body.position = Vector3(x, 0, -y)


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


func _instantiate_orbit_visual():	
	 # Formula for calculating semi-minor axis: b = a*sqrt(1-e^2)
	var scaled_semimajor_axis = _semimajor_axis * _model_scalar
	var scaled_semiminor_axis = scaled_semimajor_axis * sqrt(1-pow(_eccentricity, 2))
	
	var mesh_instance = MeshInstance3D.new()
	var torus_mesh = TorusMesh.new()
	
	if _body.radius < ORBIT_MIN_THICKNESS:
		torus_mesh.inner_radius = scaled_semimajor_axis - ORBIT_MIN_THICKNESS
		torus_mesh.outer_radius = scaled_semimajor_axis + ORBIT_MIN_THICKNESS
	else:		
		torus_mesh.inner_radius = scaled_semimajor_axis - _body.radius
		torus_mesh.outer_radius = scaled_semimajor_axis + _body.radius
	
	mesh_instance.mesh = torus_mesh
	mesh_instance.scale.z = scaled_semiminor_axis/scaled_semimajor_axis 
	
	var orbit_material = OrbitMaterial.duplicate()
	var color = orbit_material.albedo_color
	color.a = ORBIT_VISUAL_OPACITY
	orbit_material.albedo_color = color
	mesh_instance.material_override = orbit_material
	
	add_child(mesh_instance)
