extends Node3D

const InfoNodeScn = preload("res://addons/mars-ui/content/ui/components/info_nodes/info_node/info_node.tscn")

const MIN_SCALE = 3

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
var _camera: XRCamera3D = null
var _show_label: bool

var _total_rotation: float = 0

var _initialised: bool = false

func _process(delta: float) -> void:
	pass
	if _initialised and _show_label and _camera != null:
		$Label.look_at(_camera.global_transform.origin, Vector3.UP)
		
		# Scale up as model gets further away
		var scale_change =  global_position.distance_to(_camera.global_position)
		if scale_change >= MIN_SCALE:
			$Label.scale = Vector3(scale_change, scale_change, scale_change)

func _update_rotation():		
	var new_rotation = deg_to_rad(_rot_multiplier * julian_time)
	var rot_angle = new_rotation - _total_rotation
	rotate_y(rot_angle)

	_total_rotation = new_rotation


func init(	p_julian_time: float,
			p_model_scalar: float,
			p_name: String,
			p_scene: PackedScene, 
			p_radius: float, 
			p_rot_mulitplier: float, 
			p_camera: XRCamera3D,
			p_show_label: bool):
	julian_time = p_julian_time
	_model_scalar = p_model_scalar
	_scene = p_scene
	radius = p_radius * p_model_scalar # Scale radius from real units to model units
	_rot_multiplier = p_rot_mulitplier
	_camera = p_camera
	_show_label = p_show_label

	if p_show_label:
		$Label.visible = true
		$Label/LlbName.text = p_name
		$Label.transform.origin.y += radius * 1.5

	_model = _scene.instantiate()
	add_child(_model)
	_model.scale *= radius/0.5 # Scale is (desired radius)/(current radius)
	
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
