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

@onready var mars_sim = $PickableMars/MarsSim

@onready var rightGestureController = $XROrigin3D/RightGestureController
@onready var leftGestureController = $XROrigin3D/LeftGestureController
@onready var leftPointCollider = $XROrigin3D/LeftHandTrack/PointCollider
@onready var rightPointCollider = $XROrigin3D/RightHandTrack/PointCollider
@onready var rightPhsyicalController = $XROrigin3D/RightPhysicalController
@onready var leftPhysicalController = $XROrigin3D/LeftPhysicalController
@onready var uiTextReadout = $UI
@onready var debugButton = $DebugToggle
@onready var menu = $MainMenu/Viewport/MainMenu

# Rotation stored in radians (0 - TAU) 
var mars_x_rotation : float = 0
var mars_y_rotation : float = 0

func _ready():
	_setup_xr()
	_setup_menu_signals()


func _process(_delta):	
	syncHeadsetOrientation()
	
	#Keyboard input
	if Input.is_action_pressed("speed_up"):
		mars_sim.increaseTimeMult(6)
	elif Input.is_action_pressed("speed_down"):
		mars_sim.decreaseTimeMult(6)
	
	#Gesture Speed
	if rightGestureController.is_button_pressed("speed_up"):
		mars_sim.increaseTimeMult(100)
	if leftGestureController.is_button_pressed("speed_down"):
		mars_sim.decreaseTimeMult(100)
	
	updateUI(mars_sim.timeMultiplier, mars_sim.elapsedSimulatedSecs, mars_sim.elapsedRealSecs)	


func _on_openxr_pose_recentered() -> void:
	XRServer.center_on_hmd(XRServer.RESET_BUT_KEEP_TILT, true)


func _input(event: InputEvent) -> void:
	if event.is_action_pressed("toggle_debug"):
		mars_sim.toggleDebugMode()
		debugButton.state = mars_sim.debugMode


func _on_right_physical_controller_button_pressed(name: String) -> void:
	if name == "ax_button":
		mars_sim.toggleDebugMode()
		debugButton.state = mars_sim.debugMode


func _on_right_physical_controller_input_vector_2_changed(name: String, value: Vector2) -> void:
	if value[1] >= 0: #Speed up on Analogue stick up
		mars_sim.increaseTimeMult(remap(value[1], 0, 1, 0, 100))
	if value[1] < 0: #Speed down on Analogue stick down
		mars_sim.decreaseTimeMult(remap(value[1], 0, -1, 0, 100))


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


func syncHeadsetOrientation():
	if hmd_synchronized:
		return

	# Synchronizes headset ORIENTATION as soon as tracking information begins to arrive :
	if uninitialized_hmd_transform != XRServer.get_hmd_transform():
		hmd_synchronized = true
		_on_openxr_pose_recentered()


func _setup_menu_signals():
	menu.btn_move_pressed.connect(_on_btn_move_pressed)
	menu.btn_rotate_pressed.connect(_on_btn_rotate_pressed)
	menu.btn_scale_pressed.connect(_on_btn_scale_pressed)
	menu.btn_time_pressed.connect(_on_btn_time_pressed)
	menu.slider_1_changed.connect(_on_slider_1_changed)
	menu.slider_2_changed.connect(_on_slider_2_changed)


func _on_btn_move_pressed():
	mode = Mode.MOVE
	menu.slider_1_value = 0
	menu.slider_2_value = 0


func _on_btn_rotate_pressed():
	mode = Mode.ROTATE
	menu.slider_1_value = remap(mars_y_rotation, 0, TAU, 0, 100)
	menu.slider_2_value = remap(mars_x_rotation, 0, TAU, 0, 100)


func _on_btn_scale_pressed():
	mode = Mode.SCALE
	menu.slider_1_value = 0
	menu.slider_2_value = 0
	
	
func _on_btn_time_pressed():
	mode = Mode.TIME
	menu.slider_1_value = 0
	menu.slider_2_value = 0


func _on_slider_1_changed():
	match mode:
		Mode.ROTATE: # Rotate on Y Axis
			mars_y_rotation = remap(menu.slider_1_value, 0, 100, 0, TAU)
			mars_sim.rotation.y = mars_y_rotation


func _on_slider_2_changed():
	match mode:
		Mode.ROTATE: # Rotate on X Axis
			mars_x_rotation = remap(menu.slider_2_value, 0, 100, 0, TAU)
			mars_sim.rotation.x = mars_x_rotation


func updateUI(simulationSpeed:float, simulatedTime:int, realTime:int):
	var simSpeedText = "Sim Speed: %.0fx" % simulationSpeed
	
	var simSecs = simulatedTime % 60
	var simMins = (simulatedTime / 60) % 60
	var simHours = (simulatedTime / 60 / 60) % 24
	var simDays = (simulatedTime / 60 / 60 / 24)
	var realSecs = realTime % 60
	var realMins = (realTime / 60) % 60
	var realHours = (realTime / 60 / 60) % 24
	var realDays = (realTime / 60 / 60 / 24)
	
	var mode_text = "Mode: " + Mode.keys()[mode]
	var fpsText = "FPS: %f"  % Engine.get_frames_per_second()
	var simTimeText = "Sim Time: Day %d - %02d:%02d:%02d" % [simDays, simHours, simMins, simSecs]
	var realTimeText = "Real Time: Day %d - %02d:%02d:%02d" % [realDays, realHours, realMins, realSecs]
	
	var UIText = mode_text + "\n" + simSpeedText + "\n" + simTimeText + "\n" + realTimeText
	
	#For non XR
	DebugDraw2D.clear_all()
	DebugDraw2D.set_text(mode_text)
	DebugDraw2D.set_text(fpsText)
	DebugDraw2D.set_text(simSpeedText)
	DebugDraw2D.set_text(realTimeText)	
	DebugDraw2D.set_text(simTimeText)
	
	#For XR
	uiTextReadout.text = UIText 
	
func _on_debug_toggle_toggled_signal(state: Variant) -> void:
	mars_sim.debugMode = state

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
