extends Node3D

var rotation_speed: float = 0.01
var yaw: float = 0.0
var pitch: float = 0.0

var mouse_captured: bool = true

# Called when the node enters the scene tree for the first time.
func _ready() -> void:
	Input.set_mouse_mode(Input.MOUSE_MODE_CAPTURED)


# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta: float) -> void:
	pass
	
func _input(event):	
	if event is InputEventMouseMotion and Input.is_mouse_button_pressed(MOUSE_BUTTON_LEFT):
		yaw -= event.relative.x * rotation_speed
		pitch -= event.relative.y * rotation_speed
		pitch = clamp(pitch, -1.5, 1.5)  # Limit pitch to avoid flipping

		rotation_degrees = Vector3(pitch * 180 / PI, yaw * 180 / PI, 0)
	
	if event.is_action_pressed("free_mouse") and mouse_captured:
			Input.set_mouse_mode(Input.MOUSE_MODE_VISIBLE)
			mouse_captured = false
	
	if event.is_action_pressed("capture_mouse") and !mouse_captured:
		Input.set_mouse_mode(Input.MOUSE_MODE_CAPTURED)
		mouse_captured = true
			
