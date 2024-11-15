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

func _ready():
	_setup_xr()
	_setup_menu()


func _process(delta):	
	_sync_headset_orientation()
	_handle_button_holding(delta)
	_update_ui(%MarsSim.get_real_time_mult(), %MarsSim.elapsed_simulated_secs, %MarsSim.elapsed_real_secs)	


func _on_openxr_pose_recentered() -> void:
	XRServer.center_on_hmd(XRServer.RESET_BUT_KEEP_TILT, true)


func _on_right_physical_controller_input_vector_2_changed(name: String, value: Vector2) -> void:
	const MIN_INCREMENT = -1
	const MAX_INCREMENT = 1
	
	%MarsSim.time_multiplier += remap(value[1], -1, 1, MIN_INCREMENT, MAX_INCREMENT)


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

func _setup_menu():	
	_setup_btn_presses()
	_setup_poi_text()
	_enable_buttons(false, false, false)
	

func _enable_buttons(left_right: bool, up_down: bool, forward_back: bool):
	%MainMenu/BtnLeft.visible = left_right
	%MainMenu/BtnLeft.disabled = not left_right
	
	%MainMenu/BtnRight.visible = left_right
	%MainMenu/BtnRight.disabled = not left_right
	
	%MainMenu/BtnUp.visible = up_down
	%MainMenu/BtnUp.disabled = not up_down
	
	%MainMenu/BtnDown.visible = up_down
	%MainMenu/BtnDown.disabled = not up_down
	
	%MainMenu/BtnForward.visible = forward_back
	%MainMenu/BtnForward.disabled = not forward_back
	
	%MainMenu/BtnBack.visible = forward_back
	%MainMenu/BtnBack.disabled = not forward_back


func _setup_btn_presses():
	
	%MainMenu/BtnMove.on_button_up.connect(func():
		mode = Mode.MOVE
		
		_enable_buttons(true, true, true)
	)
	
	%MainMenu/BtnRotate.on_button_up.connect(func():
		mode = Mode.ROTATE
		
		_enable_buttons(true, true, false)
	)
	
	%MainMenu/BtnScale.on_button_up.connect(func():
		mode = Mode.SCALE		
		
		_enable_buttons(true, false, false)
	)
	
	%MainMenu/BtnTime.on_button_up.connect(func():
		mode = Mode.TIME	
		
		_enable_buttons(true, false, false)
	)
	
	%MainMenu/BtnReset.on_button_up.connect(func():
		mode = Mode.DEFAULT
		
		_enable_buttons(false, false, false)
		
		%MarsSim.position = DEFAULT_MARS_POS
	
		_mars_x_rotation = 0
		_mars_y_rotation = 0
		%MarsSim.rotation = Vector3(0,0,0)
	
		_mars_scale = DEFAULT_MARS_SCALE
		%MarsSim.scale = Vector3(_mars_scale, _mars_scale, _mars_scale)
	
		%MarsSim.reset_sim()
	)
	
func _setup_poi_text():
	%MarsSim.poi_changed.connect(func():
		if %MarsSim.active_info_node == null:
			%MainMenu/LblTitle.text = ""
			%MainMenu/LblInfo.text = ""
		else:
			%MainMenu/LblTitle.text = %MarsSim.active_info_node.title
			%MainMenu/LblInfo.text = %MarsSim.active_info_node.info
	)

func _handle_button_holding(delta: float):	
	
	if %MainMenu/BtnLeft.active:
		match mode:	
			Mode.MOVE:
				%MarsSim.position.x = clamp(
											%MarsSim.position.x - delta*MOVE_SPEED, 
											DEFAULT_MARS_POS.x - MAX_MOVE_DIST, 
											DEFAULT_MARS_POS.x + MAX_MOVE_DIST)			
			Mode.ROTATE:
				# Rotation value always stays in range of 0-TAU
				_mars_y_rotation = fmod(_mars_y_rotation - ROT_CHANGE_SPEED*delta + TAU, TAU)	
				%MarsSim.rotation.y = _mars_y_rotation
			Mode.SCALE:
				_mars_scale = clamp(_mars_scale - SCALE_CHANGE_SPEED*delta, MIN_MARS_SCALE, MAX_MARS_SCALE)
				%MarsSim.scale = Vector3(_mars_scale, _mars_scale, _mars_scale)
			Mode.TIME:
				%MarsSim.time_multiplier -= TIME_CHANGE_SPEED * delta
	
	if %MainMenu/BtnRight.active:
		match mode:
			Mode.MOVE:
				%MarsSim.position.x = clamp(
											%MarsSim.position.x + delta*MOVE_SPEED, 
											DEFAULT_MARS_POS.x - MAX_MOVE_DIST, 
											DEFAULT_MARS_POS.x + MAX_MOVE_DIST)			
			Mode.ROTATE:
				# Rotation value always stays in range of 0-TAU
				_mars_y_rotation = fmod(_mars_y_rotation + ROT_CHANGE_SPEED*delta, TAU)
				%MarsSim.rotation.y = _mars_y_rotation
			Mode.SCALE:
				_mars_scale = clamp(_mars_scale + SCALE_CHANGE_SPEED*delta, MIN_MARS_SCALE, MAX_MARS_SCALE)
				%MarsSim.scale = Vector3(_mars_scale, _mars_scale, _mars_scale)
			Mode.TIME:
				%MarsSim.time_multiplier += TIME_CHANGE_SPEED * delta
	
	if %MainMenu/BtnUp.active:
		match mode:
			Mode.MOVE:
				%MarsSim.position.y = clamp(
											%MarsSim.position.y + delta*MOVE_SPEED, 
											DEFAULT_MARS_POS.y - MAX_MOVE_DIST, 
											DEFAULT_MARS_POS.y + MAX_MOVE_DIST)		
			Mode.ROTATE:
				# Rotation value always stays in range of 0-TAU
				_mars_x_rotation = fmod(_mars_x_rotation - ROT_CHANGE_SPEED*delta, TAU)
				%MarsSim.rotation.x = _mars_x_rotation
	
	if %MainMenu/BtnDown.active:
		match mode:
			Mode.MOVE:
				%MarsSim.position.y = clamp(
											%MarsSim.position.y - delta*MOVE_SPEED, 
											DEFAULT_MARS_POS.y - MAX_MOVE_DIST, 
											DEFAULT_MARS_POS.y + MAX_MOVE_DIST)
			Mode.ROTATE:
				# Rotation value always stays in range of 0-TAU
				_mars_x_rotation = fmod(_mars_x_rotation + ROT_CHANGE_SPEED*delta, TAU)
				%MarsSim.rotation.x = _mars_x_rotation
	
	if %MainMenu/BtnForward.active:
		match mode:
			Mode.MOVE:
				%MarsSim.position.z = clamp(
											%MarsSim.position.z - delta*MOVE_SPEED, 
											DEFAULT_MARS_POS.z - MAX_MOVE_DIST, 
											DEFAULT_MARS_POS.z + MAX_MOVE_DIST)
	
	if %MainMenu/BtnBack.active:
		match mode:
			Mode.MOVE:
				%MarsSim.position.z = clamp(
											%MarsSim.position.z + delta*MOVE_SPEED, 
											DEFAULT_MARS_POS.z - MAX_MOVE_DIST, 
											DEFAULT_MARS_POS.z + MAX_MOVE_DIST)
	

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
	var sim_time_text = "Sim Time: Day %d - %02d:%02d:%02d" % [sim_days, sim_hours, sim_mins, sim_secs]
	var real_time_text = "Real Time: Day %d - %02d:%02d:%02d" % [real_days, real_hours, real_mins, real_secs]
	
	var ui_text = mode_text + "\n" + sim_speed_text + "\n" + sim_time_text + "\n" + real_time_text
	
	%UI.text = ui_text 


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
