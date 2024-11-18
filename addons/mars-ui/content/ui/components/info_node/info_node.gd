extends Container3D
class_name InfoNode

signal on_button_down()
signal on_button_up()

const MatDefault = preload("res://addons/mars-ui/content/ui/components/info_node/info_node_default.tres")
const MatHover = preload("res://addons/mars-ui/content/ui/components/info_node/info_node_hover.tres")
const MatSelected = preload("res://addons/mars-ui/content/ui/components/info_node/info_node_selected.tres")

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
			%Mesh.material_override = MatSelected
		else:
			hovering = true
			%Mesh.material_override = MatDefault
	

# Called when the node enters the scene tree for the first time.
func _ready() -> void:
	pass


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
		%Mesh.material_override = MatHover


func _on_ray_leave(_event: EventPointer):
	if !disabled and hovering:
		%Mesh.material_override = MatDefault
	
	
	
	
