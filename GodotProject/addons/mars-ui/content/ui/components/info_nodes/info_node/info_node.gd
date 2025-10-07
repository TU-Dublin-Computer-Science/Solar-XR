extends Container3D
class_name InfoNode

signal on_button_down()
signal on_button_up()

const IconDefault = preload("res://content/assets/sprites/locationWhite.png")
const IconHover = preload("res://content/assets/sprites/locationGrey.png")
const IconSelected = preload("res://content/assets/sprites/locationRed.png")

@export var disabled: bool = false
@export var billboard: bool = true
@export var hovering: bool = true
@export var title: String
@export var description: String
@export var image: CompressedTexture2D
@export var camera: XRCamera3D = null

var active: bool = false:
	set(value):
		active = value
		if !is_node_ready(): return
		if active:
			hovering = false
			%Icon.texture = IconSelected
		else:
			hovering = true
			%Icon.texture = IconDefault

# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta: float) -> void:
	if billboard:
		%Icon.look_at(camera.global_transform.origin, Vector3.UP)
	
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
	%Icon.texture = IconHover


func _on_ray_leave(_event: EventPointer):
	if !disabled and hovering:
		%Icon.texture = IconDefault


func _on_touch_enter(event: EventTouch):
	print("Touched")
	if event.target != $FingerArea:
		return

	if disabled:
		event.bubbling = false
		return

	%ClickSound.play()

	active = !active
	
	if active:
		on_button_down.emit()
	else:
		on_button_up.emit()
