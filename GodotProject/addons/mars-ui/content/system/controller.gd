extends XRController3D

const RaycastScn = preload ("res://addons/mars-ui/content/system/raycast/raycast.tscn")
const Pointer = preload ("res://addons/mars-ui/lib/utils/pointer/pointer.gd")
const Initiator = preload ("res://addons/mars-ui/lib/utils/pointer/initiator.gd")
const Finger = preload ("res://addons/mars-ui/lib/utils/touch/finger.gd")
const Touch = preload ("res://addons/mars-ui/lib/utils/touch/touch.gd")
const Collide = preload ("res://addons/mars-ui/lib/utils/touch/collide.gd")

@onready var raycast: RayCast3D = $Raycast
@onready var auto_hand = $AutoHandtracker

@onready var index_tip = $IndexTip
@onready var thumb_tip = $ThumbTip
@onready var middle_tip = $MiddleTip

var hand_mesh: MeshInstance3D
var tracker_hand: XRHandTracker.TrackerHand

@export var show_grid = false:
	set(value):
		show_grid = value

		if raycast != null:
			raycast.with_grid = value


var hand_tracking_active = false:
	set(value):
		hand_tracking_active = value

		if pointer != null:
			pointer.set_physics_process(value)


var initiator: Initiator = Initiator.new()
var collide: Collide
var pointer: Pointer
var press_distance = 0.02
var grip_distance = 0.02

var pressed = false
var grabbed = false

var touch_enabled: bool = true
var pointer_enabled: bool = true

var input_method: Mappings.InputMethod = Mappings.InputMethod.ALL:
	set(value):
		input_method = value
		
		touch_enabled = input_method == Mappings.InputMethod.ALL or input_method == Mappings.InputMethod.TOUCH
		pointer_enabled = input_method == Mappings.InputMethod.ALL or input_method == Mappings.InputMethod.POINTER
		
		_setup_hand()


func _ready():
	_setup_hand()

func _setup_hand():
		
	# Remove added children if exist
	if collide:
		remove_child(collide)
	if pointer:
		remove_child(pointer)
	if raycast:
		remove_child(raycast)
	
	if tracker == "left_hand":
		hand_mesh = $hand/Armature/Skeleton3D/mesh_Hand_L
		
		initiator.type = Initiator.Type.HAND_LEFT
		initiator.node = self
		
		# Setup touch checking
		if touch_enabled:
			TouchManager.add_finger(Finger.Type.INDEX_LEFT, $IndexTip/TouchArea)
	elif tracker == "right_hand": # Right Hand
		hand_mesh = $hand/Armature/Skeleton3D/mesh_Hand_R
		
		initiator.type = Initiator.Type.HAND_RIGHT
		initiator.node = self
		
		# Setup touch checking
		if touch_enabled:
			TouchManager.add_finger(Finger.Type.INDEX_RIGHT, $IndexTip/TouchArea)
	
	# Setup Collisions (So hand doesn't immediatly pass through buttons, etc.)
	if touch_enabled:
		collide = Collide.new($hand, hand_mesh, index_tip.get_node("Marker3D"))
		add_child(collide)
	
	# Setup Pointer
	if pointer_enabled:
		raycast = RaycastScn.instantiate()
		add_child(raycast)
		
		pointer = Pointer.new(initiator, raycast)
		add_child(pointer)
			
	
	
	auto_hand.hand_active_changed.connect(func(hand: int, active: bool):
		# Hand tracking function triggered when there is a change in state between a hand being tracked or untracked
		# hand is 0 for left, 1 for right, active is if being tracked or not
		
		hand_tracking_active = active and not _using_controllers()
			
		$IndexTip/TouchArea/CollisionShape3D.disabled = !hand_tracking_active
		hand_mesh.visible=active
	)

func _physics_process(_delta):
	if !hand_tracking_active: return

	var distance_trigger = index_tip.global_position.distance_to(thumb_tip.global_position)
	var distance_grab = middle_tip.global_position.distance_to(thumb_tip.global_position)

	var trigger_close = distance_trigger <= press_distance
	var grab_close = distance_grab <= grip_distance

	if trigger_close&&!pressed:
		pointer.pressed(Initiator.EventType.TRIGGER)
		pressed = true
	elif !trigger_close&&pressed:
		pointer.released(Initiator.EventType.TRIGGER)
		pressed = false

	if grab_close&&!grabbed:
		pointer.pressed(Initiator.EventType.GRIP)
		grabbed = true
	elif !grab_close&&grabbed:
		pointer.released(Initiator.EventType.GRIP)
		grabbed = false


func _using_controllers():
	var hand_trackers = XRServer.get_trackers(XRServer.TRACKER_HAND)

	for tracker in hand_trackers.values():	
		if 	tracker.hand_tracking_source == XRHandTracker.HAND_TRACKING_SOURCE_CONTROLLER:
			return true

	return false
