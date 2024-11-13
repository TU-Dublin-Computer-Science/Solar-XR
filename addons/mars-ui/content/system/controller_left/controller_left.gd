extends XRController3D

const Finger = preload ("res://addons/mars-ui/lib/utils/touch/finger.gd")
const Touch = preload ("res://addons/mars-ui/lib/utils/touch/touch.gd")
const Collide = preload ("res://addons/mars-ui/lib/utils/touch/collide.gd")

@onready var hand = $hand_l
@onready var hand_mesh = $hand_l/Armature/Skeleton3D/mesh_Hand_L
@onready var auto_hand = $AutoHandtracker

@onready var index_tip = $IndexTip

@export var show_grid = false:
	set(value):
		show_grid = value

var hand_active = false:
	set(value):
		hand_active = value

var collide: Collide

func _ready():
	_setup_hand()

func _physics_process(_delta):
	pass

func _setup_hand():
	TouchManager.add_finger(Finger.Type.INDEX_LEFT, $IndexTip/TouchArea)

	collide = Collide.new(hand, hand_mesh, index_tip.get_node("Marker3D"))
	add_child(collide)

	auto_hand.hand_active_changed.connect(func(hand: int, active: bool):
		if hand != 0: return

		hand_active=active&&_is_hand_simulated() == false
			
		$IndexTip/TouchArea/CollisionShape3D.disabled=!hand_active
		hand_mesh.visible=active
	)

func _is_hand_simulated():
	var hand_trackers = XRServer.get_trackers(XRServer.TRACKER_HAND)

	for tracker in hand_trackers.values():
		if tracker.hand != XRPositionalTracker.TrackerHand.TRACKER_HAND_LEFT:
			continue

		return tracker.hand_tracking_source == XRHandTracker.HAND_TRACKING_SOURCE_CONTROLLER

	return false
