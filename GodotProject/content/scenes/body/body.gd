extends Node3D

const InfoNodeScn = preload("res://addons/mars-ui/content/ui/components/info_nodes/info_node/info_node.tscn")

const MIN_SCALE = 3

var info_nodes: Array[Node3D]
var radius: float

var julian_time: float:
	set(value):
		julian_time = value
		if _initialised and _rotation_enabled:
			_update_rotation()

var _name: String
var _model_scene: PackedScene
var _rotation_factor: float
var _model_scalar: float
var _model: Node3D
var _camera: XRCamera3D = null
var _show_label: bool

var _total_rotation: float = 0

var _initialised: bool = false
var _rotation_enabled: bool = false

func _process(delta: float) -> void:
	if _initialised and _show_label and _camera != null:
		$Label.look_at(_camera.global_transform.origin, Vector3.UP)
		
		# Scale up as model gets further away
		var scale_change = $Label.global_position.distance_to(_camera.global_position)
		
		$Label.scale = Vector3(scale_change, scale_change, scale_change)


func _update_rotation():		
	var new_rotation = deg_to_rad(_rotation_factor * julian_time)
	var rot_angle = new_rotation - _total_rotation
	rotate_y(rot_angle)

	_total_rotation = new_rotation


func init(	p_name: String,
			p_model_path: String, 
			p_radius: float,
			p_rotation_factor: float,
			p_info_nodes: Array,
			p_julian_time: float,
			p_model_scalar: float,
			p_camera: XRCamera3D,
			p_show_label: bool):
	
	_name = p_name
	
	if p_model_path != "":
		_model_scene = load(p_model_path)
	else:
		_model_scene = load("res://content/scenes/model_scenes/default_moon.tscn")
	
	radius = p_radius * p_model_scalar # Scale radius from real units to model units	
	
	if p_rotation_factor != -1:
		_rotation_factor = p_rotation_factor
		_rotation_enabled = true
	
	julian_time = p_julian_time
	_model_scalar = p_model_scalar
	_camera = p_camera
	
	_show_label = p_show_label
	
	_setup_info_nodes(p_info_nodes)
	_setup_model()
	
	_initialised = true


func _setup_model():
	if _show_label:
		$Label.visible = true
		$Label/LlbName.text = _name
		$Label.transform.origin.y += radius * 1.5
	else:
		$Label.visible = false
	
	_model = _model_scene.instantiate()
	add_child(_model)
	_model.scale *= radius/0.5 # Scale is (desired radius)/(current radius)
	
	if _rotation_enabled:
		_update_rotation()


func _setup_info_nodes(info_point_array: Array) -> void:
	for info_point in info_point_array:
		
		var info_node = InfoNodeScn.instantiate()
		info_node.position = _geographical_to_cartesian(info_point["location"]["latitude"], 
														info_point["location"]["longitude"])
		info_node.title = info_point["title"]
		info_node.image = load(info_point["image_path"])
		info_node.description = info_point["description"]
		
		info_nodes.append(info_node)
		add_child(info_node)


func _geographical_to_cartesian(lat: float, long: float) -> Vector3:
	var lat_rad = deg_to_rad(lat)
	var long_rad = deg_to_rad(long)
	
	var cart = Vector3.ZERO
	cart.x = radius * cos(lat_rad) * cos(long_rad)
	cart.y = radius * sin(lat_rad)
	cart.z = radius * cos(lat_rad) * sin(long_rad) * -1  #In Godot -z is forward
	
	return cart
