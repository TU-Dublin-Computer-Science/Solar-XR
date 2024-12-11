extends Node3D

const OrbitMaterial = preload("res://content/assets/materials/orbit_material.tres")
const ORBIT_VISUAL_THICKNESS = 0.3  # Scale of 0-1
const ORBIT_VISUAL_OPACITY = 0.2 # Scale of 0-1 

var julian_time: float:
	set(value):
		julian_time = value
		if _initialised:
			_update_body_position()
			
		
var _body: Node3D
var _model_scalar: float

var _period: float
var _inclination: float
var _semimajor_axis: float
var _eccentricity: float
var _mean_anomaly: float
var _mean_motion: float
var _periapsis_passage_time: float


var _initialised: bool = false
	

func init(	p_body: Node3D, 
			p_julian_time: float,
			p_model_scalar: float,
			p_period: float,
			p_inclination: float, 
			p_semimajor_axis: float,
			p_eccentricity: float, 
			p_mean_anomaly: float,
			p_mean_motion: float,
			p_periapsis_passage_time:float):

	_body = p_body
	julian_time = p_julian_time
	_model_scalar = p_model_scalar
	
	_period = p_period
	_inclination = p_inclination
	_semimajor_axis = p_semimajor_axis
	_eccentricity = p_eccentricity
	_mean_anomaly = p_mean_anomaly
	_mean_motion = p_mean_motion
	_periapsis_passage_time = p_periapsis_passage_time
	
	rotate(Vector3.FORWARD, -deg_to_rad(_inclination))

	add_child(_body)

	_instantiate_orbit_visual()
	
	_update_body_position()
	
	_initialised = true
	

func _update_body_position():
	
	# 1. Get Current Mean anomaly 
	# This is angle of body from periapsis (closest point to body) at the current time
	var t = julian_time - _periapsis_passage_time
	t *= 86400 #Convert days to seconds, as mean motion is deg/s
	var current_mean_anomaly = _mean_anomaly + _mean_motion * t
	current_mean_anomaly = deg_to_rad(fmod(current_mean_anomaly, 360)) # Convert to radians and wrap to [0, 2π]

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
	
	var orbit_visual_thickness = remap(ORBIT_VISUAL_THICKNESS, 0, 1, 10, 1)
	
	torus_mesh.inner_radius = scaled_semimajor_axis - _body.radius/orbit_visual_thickness
	torus_mesh.outer_radius = scaled_semimajor_axis + _body.radius/orbit_visual_thickness
	
	mesh_instance.mesh = torus_mesh
	mesh_instance.scale.z = scaled_semiminor_axis/scaled_semimajor_axis 
	
	var orbit_material = OrbitMaterial.duplicate()
	var color = orbit_material.albedo_color
	color.a = ORBIT_VISUAL_OPACITY
	orbit_material.albedo_color = color
	mesh_instance.material_override = orbit_material
	
	add_child(mesh_instance)
