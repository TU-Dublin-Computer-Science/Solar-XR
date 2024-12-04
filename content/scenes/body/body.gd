extends Node3D

const InfoNodeScn = preload("res://addons/mars-ui/content/ui/components/info_nodes/info_node/info_node.tscn")

var info_nodes: Array[Node3D]
var radius: float

var julian_time: float:
	set(value):
		julian_time = value
		if _initialised:
			_update_rotation()

var _scene: PackedScene
var _rot_multiplier: float
var _model_scalar: float
var _model: Node3D

var _total_rotation: float = 0

var _initialised: bool = false

func _update_rotation():		
	var new_rotation = deg_to_rad(_rot_multiplier * julian_time)
	var rot_angle = new_rotation - _total_rotation
	rotate_y(rot_angle)
	
	_total_rotation = new_rotation


func init(p_scene: PackedScene, p_radius: float, p_rot_mulitplier: float, p_julian_time: float, p_model_scalar: float):
	_scene = p_scene
	radius = p_radius * p_model_scalar # Scale radius from real units to model units
	_rot_multiplier = p_rot_mulitplier
	_model_scalar = p_model_scalar
	julian_time = p_julian_time
	
	_model = _scene.instantiate()
	add_child(_model)
	scale *= radius/0.5 # Scale is (desired radius)/(current radius)
	
	_update_rotation()
	
	_initialised = true
	

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
	cart.z = radius * cos(lat_rad) * sin(long_rad) * -1  #In Godot -z is forward
	
	return cart
