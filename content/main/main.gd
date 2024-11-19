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

const DEFAULT_MARS_POS = Vector3(0, 1.5, -2)
const MAX_MOVE_DIST = 1
const MOVE_SPEED = 1

const ROT_CHANGE_SPEED = 1

const MIN_MARS_SCALE: float = 0.5 
const MAX_MARS_SCALE: float = 4
const DEFAULT_MARS_SCALE: float = 1
const SCALE_CHANGE_SPEED = 1

const TIME_CHANGE_SPEED = 10

# Rotation stored in radians (0 - TAU) 
var _mars_x_rotation : float = 0
var _mars_y_rotation : float = 0
var _mars_scale:float = DEFAULT_MARS_SCALE

# Move
var _moving_up: bool = false
var _moving_down: bool = false
var _moving_left: bool = false
var _moving_right: bool = false
var _moving_forward: bool = false
var _moving_back: bool = false

# Rotate
var _rot_increasing_x: bool = false
var _rot_decreasing_x: bool = false
var _rot_increasing_y: bool = false
var _rot_decreasing_y: bool = false

# Scale
var _scale_increasing: bool = false
var _scale_decreasing: bool = false

# Time
var _time_increasing: bool = false
var _time_decreasing: bool = false

func _ready():
	_setup_xr()
	_setup_signals()
	_reset()


func _process(delta):	
	_sync_headset_orientation()
	_handle_constant_state_changes(delta)
	_update_ui()	


func _on_openxr_pose_recentered() -> void:
	XRServer.center_on_hmd(XRServer.RESET_BUT_KEEP_TILT, true)
	

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


func _setup_signals():
	_setup_move_signals()
	_setup_rotate_signals()
	_setup_scale_signals()
	_setup_time_signals()
	%MainMenu.reset.connect(_reset)


func _setup_move_signals():
	$MainMenu.move_up_start.connect(func(): _moving_up = true)
	$MainMenu.move_up_stop.connect(func(): _moving_up = false)
	
	$MainMenu.move_down_start.connect(func(): _moving_down = true)
	$MainMenu.move_down_stop.connect(func(): _moving_down = false)
	
	$MainMenu.move_left_start.connect(func(): _moving_left = true)
	$MainMenu.move_left_stop.connect(func(): _moving_left = false)
	
	$MainMenu.move_right_start.connect(func(): _moving_right = true)
	$MainMenu.move_right_stop.connect(func(): _moving_right = false)
	
	$MainMenu.move_forward_start.connect(func(): _moving_forward = true)
	$MainMenu.move_forward_stop.connect(func(): _moving_forward = false)
	
	$MainMenu.move_back_start.connect(func(): _moving_back = true)
	$MainMenu.move_back_stop.connect(func(): _moving_back = false)


func _setup_rotate_signals():
	$MainMenu.rotate_increaseX_start.connect(func():_rot_increasing_x = true)
	$MainMenu.rotate_increaseX_stop.connect(func(): _rot_increasing_x = false)

	$MainMenu.rotate_decreaseX_start.connect(func(): _rot_decreasing_x = true)
	$MainMenu.rotate_decreaseX_stop.connect(func(): _rot_decreasing_x = false)

	$MainMenu.rotate_increaseY_start.connect(func(): _rot_increasing_y = true)
	$MainMenu.rotate_increaseY_stop.connect(func(): _rot_increasing_y = false)

	$MainMenu.rotate_decreaseY_start.connect(func(): _rot_decreasing_y = true)
	$MainMenu.rotate_decreaseY_stop.connect(func(): _rot_decreasing_y = false)


func _setup_scale_signals():
	$MainMenu.scale_increase_start.connect(func():_scale_increasing = true)
	$MainMenu.scale_increase_stop.connect(func(): _scale_increasing = false)

	$MainMenu.scale_decrease_start.connect(func(): _scale_decreasing = true)
	$MainMenu.scale_decrease_stop.connect(func(): _scale_decreasing = false)


func _setup_time_signals():
	$MainMenu.time_increase_start.connect(func():_time_increasing = true)
	$MainMenu.time_increase_stop.connect(func(): _time_increasing = false)

	$MainMenu.time_decrease_start.connect(func(): _time_decreasing = true)
	$MainMenu.time_decrease_stop.connect(func(): _time_decreasing = false)


func _handle_constant_state_changes(delta: float):
	_handle_constant_movement(delta)
	_handle_constant_rotation(delta)
	_handle_constant_scaling(delta)
	_handle_constant_time_change(delta)


func _handle_constant_movement(delta: float):
	if _moving_up:
		%MarsSim.position.y = clamp(
									%MarsSim.position.y + delta*MOVE_SPEED, 
									DEFAULT_MARS_POS.y - MAX_MOVE_DIST, 
									DEFAULT_MARS_POS.y + MAX_MOVE_DIST)		
	if _moving_down:
		%MarsSim.position.y = clamp(
									%MarsSim.position.y - delta*MOVE_SPEED, 
									DEFAULT_MARS_POS.y - MAX_MOVE_DIST, 
									DEFAULT_MARS_POS.y + MAX_MOVE_DIST)
	if _moving_left:
		%MarsSim.position.x = clamp(
									%MarsSim.position.x - delta*MOVE_SPEED, 
									DEFAULT_MARS_POS.x - MAX_MOVE_DIST, 
									DEFAULT_MARS_POS.x + MAX_MOVE_DIST)
	if _moving_right:
		%MarsSim.position.x = clamp(
									%MarsSim.position.x + delta*MOVE_SPEED, 
									DEFAULT_MARS_POS.x - MAX_MOVE_DIST, 
									DEFAULT_MARS_POS.x + MAX_MOVE_DIST)
	if _moving_forward:
		%MarsSim.position.z = clamp(
							%MarsSim.position.z - delta*MOVE_SPEED, 
							DEFAULT_MARS_POS.z - MAX_MOVE_DIST, 
							DEFAULT_MARS_POS.z + MAX_MOVE_DIST)
	if _moving_back:
		%MarsSim.position.z = clamp(
									%MarsSim.position.z + delta*MOVE_SPEED, 
									DEFAULT_MARS_POS.z - MAX_MOVE_DIST, 
									DEFAULT_MARS_POS.z + MAX_MOVE_DIST)		


func _handle_constant_rotation(delta: float):
	if _rot_increasing_x:
		# Rotation value always stays in range of 0-TAU
		_mars_x_rotation = fmod(_mars_x_rotation + ROT_CHANGE_SPEED*delta, TAU)
		%MarsSim.rotation.x = _mars_x_rotation
	
	if _rot_decreasing_x:
		# Rotation value always stays in range of 0-TAU
		_mars_x_rotation = fmod(_mars_x_rotation - ROT_CHANGE_SPEED*delta, TAU)
		%MarsSim.rotation.x = _mars_x_rotation
	
	if _rot_increasing_y:
		# Rotation value always stays in range of 0-TAU
		_mars_y_rotation = fmod(_mars_y_rotation + ROT_CHANGE_SPEED*delta, TAU)
		%MarsSim.rotation.y = _mars_y_rotation
		
	if _rot_decreasing_y:
		# Rotation value always stays in range of 0-TAU
		_mars_y_rotation = fmod(_mars_y_rotation - ROT_CHANGE_SPEED*delta + TAU, TAU)	
		%MarsSim.rotation.y = _mars_y_rotation


func _handle_constant_scaling(delta: float):
	if _scale_increasing:
		_mars_scale = clamp(_mars_scale + SCALE_CHANGE_SPEED*delta, MIN_MARS_SCALE, MAX_MARS_SCALE)
		%MarsSim.scale = Vector3(_mars_scale, _mars_scale, _mars_scale)
	
	if _scale_decreasing:
		_mars_scale = clamp(_mars_scale - SCALE_CHANGE_SPEED*delta, MIN_MARS_SCALE, MAX_MARS_SCALE)
		%MarsSim.scale = Vector3(_mars_scale, _mars_scale, _mars_scale)		


func _handle_constant_time_change(delta: float):
	if _time_increasing:
		%MarsSim.time_multiplier += TIME_CHANGE_SPEED * delta
	
	if _time_decreasing:
		%MarsSim.time_multiplier -= TIME_CHANGE_SPEED * delta


func _reset():
	mode = Mode.DEFAULT
	
	%MarsSim.position = DEFAULT_MARS_POS

	_mars_x_rotation = 0
	_mars_y_rotation = 0
	%MarsSim.rotation = Vector3(0,0,0)

	_mars_scale = DEFAULT_MARS_SCALE
	%MarsSim.scale = Vector3(_mars_scale, _mars_scale, _mars_scale)

	%MarsSim.reset_sim()


func _setup_poi_text():
	%MarsSim.poi_changed.connect(func():
		if %MarsSim.active_info_node == null:
			%MainMenu/LblTitle.text = ""
			%MainMenu/LblInfo.text = ""
		else:
			%MainMenu/LblTitle.text = %MarsSim.active_info_node.title
			%MainMenu/LblInfo.text = %MarsSim.active_info_node.info
	)	


func _update_ui():
	%MainMenu.simulation_speed = %MarsSim.get_real_time_mult()
	%MainMenu.simulation_time = %MarsSim.elapsed_simulated_secs
	%MainMenu.real_time = %MarsSim.elapsed_real_secs
	

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
