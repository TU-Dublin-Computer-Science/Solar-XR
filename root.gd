extends Node3D

var xr_interface: XRInterface
@onready var viewport : Viewport = get_viewport()

@onready var uninitialized_hmd_transform:Transform3D = XRServer.get_hmd_transform()
var hmd_synchronized:bool = false

@onready var mars = $PickableMars/Mars

func _ready():
	xr_interface = XRServer.find_interface("OpenXR")
	if xr_interface and xr_interface.is_initialized():
		print("OpenXR initialized successfully")
		
		# Turn off v-sync!
		DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)

		# Change our main viewport to output to the HMD
		viewport.use_xr = true
		
		viewport.transparent_bg = true #Must be done for AR passthrough
		
		xr_interface.pose_recentered.connect(_on_openxr_pose_recentered)
	else:
		print("OpenXR not initialized, please check if your headset is connected")

func _on_openxr_pose_recentered() -> void:
	XRServer.center_on_hmd(XRServer.RESET_BUT_KEEP_TILT, true)
	
func _process(_delta):	
	if hmd_synchronized:
		return

	# Synchronizes headset ORIENTATION as soon as tracking information begins to arrive :
	if uninitialized_hmd_transform != XRServer.get_hmd_transform():
		hmd_synchronized = true
		_on_openxr_pose_recentered()



func _on_right_hand_button_pressed(name: String) -> void:
	
	if name == "by_button":
		print("Increasing...")
		mars.increaseTime()
	elif name == "ax_button":
		print("Decreasing...")
		mars.decreaseTime()
		
	


func _on_right_hand_input_vector_2_changed(name: String, value: Vector2) -> void:
	
	
	if value[1] >= 0:
		mars.increaseTime(remap(value[1], 0, 1, 0, 100))
	if value[1] < 0:
		mars.decreaseTime(remap(value[1], 0, -1, 0, 100))
	
