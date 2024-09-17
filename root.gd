extends Node3D

var xr_interface: XRInterface
@onready var viewport : Viewport = get_viewport()

@onready var uninitialized_hmd_transform:Transform3D = XRServer.get_hmd_transform()
var hmd_synchronized:bool = false

@onready var marsSim = $PickableMars/MarsSim

var debugMode = false



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
	
	updateUI(marsSim.timeMultiplier, marsSim.elapsedSimulatedSecs, marsSim.elapsedRealSecs)


func syncHeadsetOrientation():
	if hmd_synchronized:
		return

	# Synchronizes headset ORIENTATION as soon as tracking information begins to arrive :
	if uninitialized_hmd_transform != XRServer.get_hmd_transform():
		hmd_synchronized = true
		_on_openxr_pose_recentered()


func _on_right_hand_button_pressed(name: String) -> void:
	if name == "ax_button":
		toggleDebugMode()
			

func _on_right_hand_input_vector_2_changed(name: String, value: Vector2) -> void:	
	if value[1] >= 0: #Speed up on Analogue stick up
		marsSim.increaseTime(remap(value[1], 0, 1, 0, 100))
	if value[1] < 0: #Speed down on Analogue stick down
		marsSim.decreaseTime(remap(value[1], 0, -1, 0, 100))
	
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
	
	var simTimeText = "Sim Time: Day %d - %02d:%02d:%02d" % [simDays, simHours, simMins, simSecs]
	var realTimeText = "Real Time: Day %d - %02d:%02d:%02d" % [realDays, realHours, realMins, realSecs]
	
	var UIText = simSpeedText + "\n" + simTimeText + "\n" + realTimeText
	
	#For non XR
	DebugDraw2D.clear_all()
	DebugDraw2D.set_text(realTimeText)
	DebugDraw2D.set_text(simTimeText)
	
	#For XR
	$XROrigin3D/RightHand/UI.text = UIText #For XR
	
func toggleDebugMode():
	if debugMode == false:
		debugMode = true
		$PickableMars/RotationDebugPlane.visible = true
		$PickableMars/Mars/RotationDebugPlane.visible = true
	elif debugMode == true:
		debugMode = false
		$PickableMars/RotationDebugPlane.visible = false
		$PickableMars/Mars/RotationDebugPlane.visible = false
