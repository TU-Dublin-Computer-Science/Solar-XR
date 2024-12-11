@tool
extends Node3D

signal start_pressed

@export var camera: XRCamera3D 

# Called when the node enters the scene tree for the first time.
func _ready() -> void:
	%BtnStart.on_button_up.connect(func():
		XRServer.center_on_hmd(XRServer.RESET_BUT_KEEP_TILT, true)
		start_pressed.emit()
		get_parent().remove_child(self)
	)

# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta: float) -> void:
	if !camera:
		return
	
	global_transform.origin = camera.global_transform.origin
	
	# Get the camera forward direction
	var camera_forward_dir = camera.global_transform.basis.z
	camera_forward_dir.y = 0.0
	
	# Get the menu forward direction
	var menu_forward_dir = global_transform.basis.z
	menu_forward_dir.y = 0.0
	
	# Get the angle between caemra forward direction and menu forward direction
	var target_angle = menu_forward_dir.signed_angle_to(camera_forward_dir, Vector3.UP)
	
	# Lerp angle so it doesn't instantly snap (creates smoother movement)
	var interpolated_angle = lerp_angle(0, target_angle, 2 * delta)
	
	# Rotate menu around interpolated angle
	global_transform.basis = global_transform.basis.rotated(Vector3.UP, interpolated_angle) 
	
	
# This method checks for configuration issues.
func _get_configuration_warnings() -> PackedStringArray:
	var warnings := PackedStringArray()

	if !camera:
		warnings.append("Must assign XR camera node!")

	# Return warnings
	return warnings
