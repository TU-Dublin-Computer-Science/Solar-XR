extends Container3D
class_name InfoNode

signal on_button_down()
signal on_button_up()

const NodeMaterial = preload("info_node.tres")

const COLOR = Color(1.0, 1.0, 1.0, 0.3)
const COLOR_HOVER = Color(0.5, 0.5, 0.5, 0.3)
const COLOR_ACTIVE = Color(0.949, 0.353, 0.22, 0.3)

@export var disabled: bool = false
@export var hovering: bool = true
@export var title: String
@export var info: String

var active: bool = false:
	set(value):
		active = value
		if !is_node_ready(): return
		if active:
			hovering = false
			%Mesh.material_override.set_shader_parameter("color", COLOR_ACTIVE)
		else:
			hovering = true
			%Mesh.material_override.set_shader_parameter("color", COLOR)
	

# Called when the node enters the scene tree for the first time.
func _ready() -> void:
	%Mesh.material_override = NodeMaterial.duplicate()


# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta: float) -> void:
	pass
	
func _on_press_up(event):
	
	if disabled:
		event.bubbling = false
		return
	
	$ClickSound.play()
	
	active = !active
	
	# Toggle
	if active: 
		on_button_down.emit()
	else:
		on_button_up.emit()
	
func _on_ray_enter(_event: EventPointer):
	if !disabled and hovering:
		%Mesh.material_override.set_shader_parameter("color", COLOR_HOVER)


func _on_ray_leave(_event: EventPointer):
	if !disabled and hovering:
		%Mesh.material_override.set_shader_parameter("color", COLOR)
	
	
	
	
