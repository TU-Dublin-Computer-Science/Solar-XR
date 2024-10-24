extends Node3D

var xr_interface: XRInterface
@onready var viewport : Viewport = get_viewport()

@onready var uninitialized_hmd_transform:Transform3D = XRServer.get_hmd_transform()
var hmd_synchronized:bool = false

@onready var marsSim = $PickableMars/MarsSim

@onready var rightGestureController = $XROrigin3D/RightGestureController
@onready var leftGestureController = $XROrigin3D/LeftGestureController
@onready var leftPointCollider = $XROrigin3D/LeftHandTrack/PointCollider
@onready var rightPointCollider = $XROrigin3D/RightHandTrack/PointCollider
@onready var rightPhsyicalController = $XROrigin3D/RightPhysicalController
@onready var leftPhysicalController = $XROrigin3D/LeftPhysicalController
@onready var uiTextReadout = $UI
@onready var debugButton = $DebugToggle

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
	syncHeadsetOrientation()
	
	#Keyboard input
	if Input.is_action_pressed("speed_up"):
		marsSim.increaseTimeMult(6)
	elif Input.is_action_pressed("speed_down"):
		marsSim.decreaseTimeMult(6)
	
	#Gesture Speed
	if rightGestureController.is_button_pressed("speed_up"):
		marsSim.increaseTimeMult(100)
	if leftGestureController.is_button_pressed("speed_down"):
		marsSim.decreaseTimeMult(100)
	
	updateUI(marsSim.timeMultiplier, marsSim.elapsedSimulatedSecs, marsSim.elapsedRealSecs)	
		
func syncHeadsetOrientation():
	if hmd_synchronized:
		return

	# Synchronizes headset ORIENTATION as soon as tracking information begins to arrive :
	if uninitialized_hmd_transform != XRServer.get_hmd_transform():
		hmd_synchronized = true
		_on_openxr_pose_recentered()

func _input(event: InputEvent) -> void:
	if event.is_action_pressed("toggle_debug"):
		marsSim.toggleDebugMode()
		debugButton.state = marsSim.debugMode

func _on_right_physical_controller_button_pressed(name: String) -> void:
	if name == "ax_button":
		marsSim.toggleDebugMode()
		debugButton.state = marsSim.debugMode

func _on_right_physical_controller_input_vector_2_changed(name: String, value: Vector2) -> void:
	if value[1] >= 0: #Speed up on Analogue stick up
		marsSim.increaseTimeMult(remap(value[1], 0, 1, 0, 100))
	if value[1] < 0: #Speed down on Analogue stick down
		marsSim.decreaseTimeMult(remap(value[1], 0, -1, 0, 100))
	
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
	
	var fpsText = "FPS: %f"  % Engine.get_frames_per_second()
	var simTimeText = "Sim Time: Day %d - %02d:%02d:%02d" % [simDays, simHours, simMins, simSecs]
	var realTimeText = "Real Time: Day %d - %02d:%02d:%02d" % [realDays, realHours, realMins, realSecs]
	
	var UIText = simSpeedText + "\n" + simTimeText + "\n" + realTimeText
	
	#For non XR
	DebugDraw2D.clear_all()
	DebugDraw2D.set_text(fpsText)
	DebugDraw2D.set_text(simSpeedText)
	DebugDraw2D.set_text(realTimeText)	
	DebugDraw2D.set_text(simTimeText)
	
	#For XR
	uiTextReadout.text = UIText 
	
func _on_debug_toggle_toggled_signal(state: Variant) -> void:
	marsSim.debugMode = state

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
