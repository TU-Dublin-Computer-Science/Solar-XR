extends Node3D

const OrbitMaterial = preload("res://content/assets/materials/orbit_material.tres")
const ORBIT_VISUAL_THICKNESS = 0.3  # Scale of 0-1
const ORBIT_VISUAL_OPACITY = 0.2 # Scale of 0-1 

var time_scalar: float

var _body: Node3D
var _eccentricity: float
var _period: float
var _inclination: float
var _semimajor_axis: float
var _semiminor_axis: float
var _model_scalar: float

var _data_is_set: bool = false
var _initial_body_position: Vector3

# Called when the node enters the scene tree for the first time.
func _ready() -> void:
	if _data_is_set:
		rotate(Vector3.FORWARD, -deg_to_rad(_inclination))
		
		add_child(_body)
		_body.position = Vector3(_semimajor_axis, 0, 0)
		_initial_body_position = _body.position
		
		_instantiate_orbit_visual()

# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta: float) -> void:
	var rotation_angle = (TAU/_period) * time_scalar * delta
	
	#This is the angle the planet has moved around so far in relation to the x axis (parametric angle)
	var angle_so_far = atan2(_body.position.z/_semiminor_axis, _body.position.x/_semimajor_axis)	
	
	_body.position.x = cos(angle_so_far - rotation_angle) * _semimajor_axis
	_body.position.z = sin(angle_so_far - rotation_angle) * _semiminor_axis


func set_data(	body: Node3D, 
				eccentricity: float, 
				period: float, 
				inclination: float, 
				semimajor_axis: float,
				p_time_scalar: float,
				model_scalar: float):
	_body = body
	_eccentricity = eccentricity
	_period = period
	_inclination = inclination
	_semimajor_axis = semimajor_axis * model_scalar
	
	# Formula for calculating semi-minor axis: b = a*sqrt(1-e^2)
	_semiminor_axis = (semimajor_axis * model_scalar) * sqrt(1-pow(eccentricity, 2))
	
	_model_scalar = model_scalar
	time_scalar = p_time_scalar
	
	_data_is_set = true

func reset() -> void:
	_body.reset()
	_body.position = _initial_body_position

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
