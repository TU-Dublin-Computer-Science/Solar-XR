extends Node3D

const OrbitMaterial = preload("res://content/assets/materials/orbit_material.tres")
const ORBIT_VISUAL_THICKNESS = 0.3  # Scale of 0-1
const ORBIT_VISUAL_OPACITY = 0.2 # Scale of 0-1 

var julian_time: float:
	set(value):
		julian_time = value
		
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

		

func _get_body_position():
	pass


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
	_semimajor_axis = p_semimajor_axis * p_model_scalar
	_eccentricity = p_eccentricity
	_mean_anomaly = p_mean_anomaly
	_mean_motion = p_mean_motion
	_periapsis_passage_time = p_periapsis_passage_time
	
	rotate(Vector3.FORWARD, -deg_to_rad(_inclination))
		
	add_child(_body)
		
	#_instantiate_orbit_visual()
	
	_initialised = true

"""
func _instantiate_orbit_visual():
	var mesh_instance = MeshInstance3D.new()
	var torus_mesh = TorusMesh.new()
	
	var orbit_visual_thickness = remap(ORBIT_VISUAL_THICKNESS, 0, 1, 10, 1)
	
	torus_mesh.inner_radius = _semimajor_axis - _body.radius/orbit_visual_thickness
	torus_mesh.outer_radius = _semimajor_axis + _body.radius/orbit_visual_thickness
	
	mesh_instance.mesh = torus_mesh
	mesh_instance.scale.z = _semiminor_axis/_semimajor_axis 
	
	var orbit_material = OrbitMaterial.duplicate()
	var color = orbit_material.albedo_color
	color.a = ORBIT_VISUAL_OPACITY
	orbit_material.albedo_color = color
	mesh_instance.material_override = orbit_material
	
	add_child(mesh_instance)
"""
