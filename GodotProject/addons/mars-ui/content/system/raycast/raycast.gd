extends RayCast3D

const Pointer = preload ("res://addons/mars-ui/lib/utils/pointer/pointer.gd")
const Initiator = preload ("res://addons/mars-ui/lib/utils/pointer/initiator.gd")

@onready var cursor: Node3D = $Cursor
@onready var default_cursor: Sprite3D = $Cursor/DefaultCursor
@onready var retro_cursor: Sprite3D = $Cursor/RetroCursor
@onready var decal: Decal = $Decal
@onready var grid: MeshInstance3D = $Grid
@onready var wall_collider: RayCast3D = $WallCollider

@export var is_right: bool = true
@export var with_decal: bool = false
@export var with_grid: bool = false

@onready var pointer: Pointer
@onready var visual_ray: MeshInstance3D = $Ray

var min_dist = 0.15

var _event_type_map = {
	"trigger_click": Initiator.EventType.TRIGGER,
	"grip_click": Initiator.EventType.GRIP,
}

func _ready():

	var initiator = Initiator.new()
	initiator.type = Initiator.Type.CONTROLLER_RIGHT if is_right else Initiator.Type.CONTROLLER_LEFT
	initiator.node = get_parent()
	assert(get_parent() is XRController3D, "Parent must be XRController3D")

	pointer = Pointer.new(initiator, self)
	add_child(pointer)

	get_parent().button_pressed.connect(func(button: String): # Controller Button Pressed
		EventSystem.emit_action(button, true, initiator)

		if _event_type_map.has(button): # If Trigger or Grip pressed, call pointer press
			pointer.pressed(_event_type_map[button])
	)
	
	get_parent().button_released.connect(func(button: String): # Controller Button Released
		EventSystem.emit_action(button, false, initiator)

		if _event_type_map.has(button): # If Trigger or Grip pressed, call pointer release
			pointer.released(_event_type_map[button])
	)

	get_parent().input_float_changed.connect(func(action_name, value): # Controller Trigger Changed
		EventSystem.emit_action(action_name, value, initiator)
	)

	get_parent().input_vector2_changed.connect(func(action_name, value): # Controller Joystick Moved
		EventSystem.emit_action(action_name, value, initiator)
	)

func _physics_process(_delta):
	_handle_cursor()
	_handle_grid()

func _process(delta):
	if grid.visible:
		grid.material_override.set_shader_parameter("dot_offset", TransformTools.plane_2d_coords(grid.global_transform) / grid.mesh.size.x)

func _handle_grid():
	var collider = wall_collider.get_collider()

	if collider == null:
		grid.visible = false

	grid.visible = with_grid

	grid.global_position = wall_collider.get_collision_point() + wall_collider.get_collision_normal() * 0.01

	if abs(wall_collider.get_collision_normal().dot(Vector3.UP)) > 0.9:
		grid.global_transform.basis = Basis.looking_at(wall_collider.get_collision_normal(), Vector3.FORWARD, true)
	elif wall_collider.get_collision_normal() != Vector3.ZERO:
		grid.global_transform.basis = Basis.looking_at(wall_collider.get_collision_normal(), Vector3.UP, true)

func _handle_cursor():
	var collider = get_collider()
	var distance = get_collision_point().distance_to(global_position)

	if collider == null or distance < min_dist:
		cursor.visible = false
		if with_decal: decal.visible = true
		return

	cursor.visible = true
	decal.visible = false
	
	cursor.global_transform.origin = get_collision_point() + get_collision_normal() * 0.001 # offset to avoid z-fighting

	if abs(get_collision_normal().dot(Vector3.UP)) > 0.9:
		var ray_dir_inv = global_transform.basis.z
		cursor.global_transform.basis = Basis.looking_at(get_collision_normal().lerp(ray_dir_inv, 0.01), Vector3.UP, true)
	else:
		cursor.global_transform.basis = Basis.looking_at(get_collision_normal(), Vector3.UP, true)
		
	var cursor_scale = clamp(distance * 1.5, 1.0, 10.0)

	cursor.scale = Vector3(cursor_scale, cursor_scale, cursor_scale)
