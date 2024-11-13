extends Node3D

enum Mode {
	DEFAULT,
	MOVE,
	ROTATE,
	SCALE,
	TIME
}

var mode:Mode = Mode.DEFAULT

var xr_interface: XRInterface
@onready var viewport : Viewport = get_viewport()
@onready var uninitialized_hmd_transform:Transform3D = XRServer.get_hmd_transform()
var hmd_synchronized:bool = false

@onready var MarsSim = $PickableMars/MarsSim
@onready var RightGestureController = $XROrigin3D/RightGestureController
@onready var LeftGestureController = $XROrigin3D/LeftGestureController
@onready var LeftPointCollider = $XROrigin3D/LeftHandTrack/PointCollider
@onready var RightPointCollider = $XROrigin3D/RightHandTrack/PointCollider
@onready var RightPhsyicalController = $XROrigin3D/RightPhysicalController
@onready var LeftPhysicalController = $XROrigin3D/LeftPhysicalController
@onready var UIText = $UI

const MIN_MARS_SCALE: float = 0.5 
const MAX_MARS_SCALE: float = 4
const DEFAULT_MARS_SCALE: float = 1
const DEFAULT_MARS_POS = Vector3(0, 1.5, -2)

# Rotation stored in radians (0 - TAU) 
var _mars_x_rotation : float = 0
var _mars_y_rotation : float = 0
var _mars_scale:float = DEFAULT_MARS_SCALE

func _ready():
	_setup_xr()
	_setup_menu_signals()


func _process(delta):	
	_sync_headset_orientation()
	_update_ui(MarsSim.get_real_time_mult(), MarsSim.elapsed_simulated_secs, MarsSim.elapsed_real_secs)	


func _on_openxr_pose_recentered() -> void:
	XRServer.center_on_hmd(XRServer.RESET_BUT_KEEP_TILT, true)


func _on_right_physical_controller_input_vector_2_changed(name: String, value: Vector2) -> void:
	const MIN_INCREMENT = -1
	const MAX_INCREMENT = 1
	
	MarsSim.time_multiplier += remap(value[1], -1, 1, MIN_INCREMENT, MAX_INCREMENT)


func _setup_xr():
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


func _sync_headset_orientation():
	if hmd_synchronized:
		return

	# Synchronizes headset ORIENTATION as soon as tracking information begins to arrive :
	if uninitialized_hmd_transform != XRServer.get_hmd_transform():
		hmd_synchronized = true
		_on_openxr_pose_recentered()


func _setup_menu_signals():
	%MainMenu.btn_move_pressed.connect(_on_btn_move_pressed)
	%MainMenu.btn_rotate_pressed.connect(_on_btn_rotate_pressed)
	%MainMenu.btn_scale_pressed.connect(_on_btn_scale_pressed)
	%MainMenu.btn_time_pressed.connect(_on_btn_time_pressed)
	%MainMenu.btn_reset_pressed.connect(_on_btn_reset_pressed)
	%MainMenu.slider_1_changed.connect(_on_slider_1_changed)
	%MainMenu.slider_2_changed.connect(_on_slider_2_changed)


func _on_btn_move_pressed():
	mode = Mode.MOVE
	%PickableMars/Movable.disabled = false
	%MainMenu/Slider1.visible = false
	%MainMenu/Slider2.visible = false
	%MainMenu/Slider1.value = 0
	%MainMenu/Slider2.value = 0


func _on_btn_rotate_pressed():
	mode = Mode.ROTATE
	%PickableMars/Movable.disabled = true
	%MainMenu/Slider1.visible = true
	%MainMenu/Slider2.visible = true
	%MainMenu/Slider1.value = remap(_mars_y_rotation, 0, TAU, 0, 100)
	%MainMenu/Slider2.value = remap(_mars_x_rotation, 0, TAU, 0, 100)


func _on_btn_scale_pressed():
	mode = Mode.SCALE
	%PickableMars/Movable.disabled = true
	%MainMenu/Slider1.visible = true
	%MainMenu/Slider2.visible = false
	%MainMenu/Slider1.value = remap(_mars_scale, MIN_MARS_SCALE, MAX_MARS_SCALE, 0, 100) 
	%MainMenu/Slider2.value = 0
	
	
func _on_btn_time_pressed():
	mode = Mode.TIME
	%PickableMars/Movable.disabled = true
	%MainMenu/Slider1.visible = true
	%MainMenu/Slider2.visible = false
	%MainMenu/Slider1.value = MarsSim.time_multiplier
	%MainMenu/Slider2.value = 0


func _on_btn_reset_pressed():
	mode = Mode.DEFAULT	
	%PickableMars/Movable.disabled = true
	%MainMenu/Slider1.visible = false
	%MainMenu/Slider2.visible = false
	%MainMenu/Slider1.value = 0
	%MainMenu/Slider2.value = 0
	
	%PickableMars.position = DEFAULT_MARS_POS
	
	_mars_x_rotation = 0
	_mars_y_rotation = 0
	MarsSim.rotation = Vector3(0,0,0)
	
	_mars_scale = DEFAULT_MARS_SCALE
	MarsSim.scale = Vector3(_mars_scale, _mars_scale, _mars_scale)
	
	MarsSim.reset_sim()


func _on_slider_1_changed():
	match mode:
		Mode.ROTATE: # Rotate on Y Axis
			_mars_y_rotation = remap(%MainMenu/Slider1.value, 0, 100, 0, TAU)
			MarsSim.rotation.y = _mars_y_rotation
		Mode.SCALE:
			_mars_scale = remap(%MainMenu/Slider1.value, 0, 100, MIN_MARS_SCALE, MAX_MARS_SCALE)
			MarsSim.scale = Vector3(_mars_scale, _mars_scale, _mars_scale)
		Mode.TIME:
			MarsSim.time_multiplier = %MainMenu/Slider1.value


func _on_slider_2_changed():
	match mode:
		Mode.ROTATE: # Rotate on X Axis
			_mars_x_rotation = remap(%MainMenu/Slider2.value, 0, 100, 0, TAU)
			MarsSim.rotation.x = _mars_x_rotation


func _update_ui(simulation_speed:float, simulated_time:int, real_time:int):
	var sim_speed_text = "Sim Speed: %.0fx" % simulation_speed
	
	var sim_secs = simulated_time % 60
	var sim_mins = (simulated_time / 60) % 60
	var sim_hours = (simulated_time / 60 / 60) % 24
	var sim_days = (simulated_time / 60 / 60 / 24)
	var real_secs = real_time % 60
	var real_mins = (real_time / 60) % 60
	var real_hours = (real_time / 60 / 60) % 24
	var real_days = (real_time / 60 / 60 / 24)
	
	var mode_text = "Mode: " + Mode.keys()[mode]
	var fps_text = "FPS: %f"  % Engine.get_frames_per_second()
	var sim_time_text = "Sim Time: Day %d - %02d:%02d:%02d" % [sim_days, sim_hours, sim_mins, sim_secs]
	var real_time_text = "Real Time: Day %d - %02d:%02d:%02d" % [real_days, real_hours, real_mins, real_secs]
	
	var ui_text = mode_text + "\n" + sim_speed_text + "\n" + sim_time_text + "\n" + real_time_text
	
	UIText.text = ui_text 


func _on_left_hand_pose_controller_pose_started(p_name: String) -> void:
	if (p_name == "Point"):
		$XROrigin3D/LeftHandTrack/PointCollider/CollisionShape3D.disabled = false


func _on_left_hand_pose_controller_pose_ended(p_name: String) -> void:
	if (p_name == "Point"):
		$XROrigin3D/LeftHandTrack/PointCollider/CollisionShape3D.disabled = true


func _on_right_hand_pose_controller_pose_started(p_name: String) -> void:
	if (p_name == "Point"):
		$XROrigin3D/RightHandTrack/PointCollider/CollisionShape3D.disabled = false


func _on_right_hand_pose_controller_pose_ended(p_name: String) -> void:
	if (p_name == "Point"):	
		$XROrigin3D/RightHandTrack/PointCollider/CollisionShape3D.disabled = true
