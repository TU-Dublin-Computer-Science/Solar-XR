extends Container3D
class_name UINode3D

signal on_node_down
signal on_node_up

@export var disabled: bool = false

var active: bool = false:
	set(value):
		active = value
		if !is_node_ready(): return
		# TODO Handle selected visual changes on/off here
	

# Called when the node enters the scene tree for the first time.
func _ready() -> void:
	pass # Replace with function body.


# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta: float) -> void:
	pass

func _on_press_down(event):
	if disabled:
		event.bubbling = false
		return
	
	%ClickSound.play()
	
	active = true
	
	on_node_down.emit()
	
func _on_press_up(event):
	if disabled:
		event.bubbling = false
		return
		
	active = false
	on_node_up.emit()
	
	
	
	
	
	
