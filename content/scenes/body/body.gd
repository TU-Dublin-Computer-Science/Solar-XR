extends Node3D

const InfoNodeScn = preload("res://addons/mars-ui/content/ui/components/info_nodes/info_node/info_node.tscn")

var info_nodes: Array[Node3D]
var radius: float
var time_scalar: float

var _scene: PackedScene
var _rotation_period: float
var _model_scalar: float
var _model: Node3D

var _data_is_set: bool = false
var _initial_rotation: Vector3

# Called when the node enters the scene tree for the first time.
func _ready() -> void:
	if _data_is_set:
		_model = _scene.instantiate()
		add_child(_model)
		scale *= radius/0.5 # Scale is (desired radius)/(current radius)
		_initial_rotation = rotation

# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta: float) -> void:
	if _data_is_set:
		var angle_to_rotate = (TAU/_rotation_period) * time_scalar * delta
		rotate_y(angle_to_rotate)


func set_data(scene: PackedScene, p_radius: float, rotation_period: float, p_time_scalar: float, model_scalar: float):
	_scene = scene
	radius = p_radius * model_scalar # Scale radius from real units to model units
	_rotation_period = rotation_period
	_model_scalar = model_scalar
	time_scalar = p_time_scalar
	
	_data_is_set = true
	

func reset() -> void:
	rotation = _initial_rotation
	

func add_info_nodes(info_point_array: Array) -> void:
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
	cart.z = radius * cos(lat_rad) * sin(long_rad)
	
	return cart
