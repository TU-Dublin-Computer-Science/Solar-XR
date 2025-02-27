extends Node
## Handles touch events and emits them to the EventSystem

const Finger = preload ("res://addons/mars-ui/lib/utils/touch/finger.gd")

## Record<Finger.Type, Area3D>
## Keeps a record of the collision areas associated with a finger
var finger_areas: Dictionary

## Record<Area3D, Array<Finger.Type>>
## Keeps a record of areas a finger has entered, two fingers can be in the same area
var areas_entered = {}

func is_touching() -> bool:
	return areas_entered.keys().size() > 0

func add_finger(finger_type: Finger.Type, finger_area: Area3D):	
	"""Called at setup to register fingers"""
	finger_areas[finger_type] = finger_area

	finger_area.area_entered.connect(func(entered_area):
		_on_area_entered(finger_type, entered_area)
	)

	finger_area.area_exited.connect(func(entered_area):
		_on_area_exited(finger_type, entered_area)
	)

func remove_finger(finger_type: Finger.Type):
	if finger_areas.has(finger_type):
		finger_areas.erase(finger_type)

func _physics_process(_delta):
	for area in areas_entered.keys():
		if areas_entered.has(area) == false:
			return
		_emit_event("touch_move", area)

func _on_area_entered(finger_type, area):
	"""Emit 'touch_enter' event and register to areas_entered, when a finger enters
	an area that it wasn't already in"""
	if areas_entered.has(area): 
		if !areas_entered[area].has(finger_type):
			areas_entered[area].append(finger_type)
			_emit_event("touch_enter", area)
	else: 
		areas_entered[area] = [finger_type]
		_emit_event("touch_enter", area)

func _on_area_exited(finger_type, area):
	"""Unregister finger when finger exited, 
	unregister area when area exited."""
	if areas_entered.has(area):
		if areas_entered[area].has(finger_type):
			areas_entered[area].erase(finger_type)

		if areas_entered[area].size() == 0:
			_emit_event("touch_leave", area)
			areas_entered.erase(area)

func _emit_event(type: String, target):
	var event = EventTouch.new()
	event.target = target
	var fingers: Array[Finger] = []
	for finger_type in areas_entered[target]:
		var finger = Finger.new()
		finger.type = finger_type
		finger.area = finger_areas[finger_type]
		fingers.append(finger)

	event.fingers = fingers

	EventSystem.emit(type, event)
