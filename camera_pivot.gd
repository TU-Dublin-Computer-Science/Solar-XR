extends Node3D

var rotation_speed: float = 0.01
var yaw: float = 0.0
var pitch: float = 0.0

# Called when the node enters the scene tree for the first time.
func _ready() -> void:
	pass


# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta: float) -> void:
	pass
	
func _input(event):	
	if event is InputEventMouseMotion and Input.is_mouse_button_pressed(MOUSE_BUTTON_RIGHT):
		yaw -= event.relative.x * rotation_speed
		pitch -= event.relative.y * rotation_speed
		pitch = clamp(pitch, -1.5, 1.5)  # Limit pitch to avoid flipping

		rotation_degrees = Vector3(pitch * 180 / PI, yaw * 180 / PI, 0)
