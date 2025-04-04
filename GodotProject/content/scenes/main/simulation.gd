extends Node3D

const OrbitingBodyScn = preload("res://content/scenes/orbiting_body/orbiting_body.tscn")

enum FocusState {
	ZOOM_OUT,
	MOVE,
	ZOOM_IN,
	WAIT,
	FOCUSED
}

signal sim_time_changed
signal sim_time_paused_changed
signal sim_time_live_changed
signal sim_time_scalar_changed

signal sim_scale_changed

signal focus_body_changed

@onready var Camera: XRCamera3D = %XRCamera3D

const DEFAULT_TIME_SCALAR = 1

const FOCUS_MOVE_TIME: float = 1
const FOCUS_ZOOM_TIME: float = 1.2
const FOCUS_WAIT_TIME: float = 0.2
const FOCUS_SCALE_BIRDS_EYE = 0.05

var _focus_scale_body: float

var _focus_zoom_out_target: float
var _focus_zoom_out_speed: float
var _focus_zoom_in_speed: float

var _focus_move_time_remaining: float
var _focus_wait_timer: float = 0
var _focus_action_after_wait: FocusState

var _focus_state: FocusState = FocusState.FOCUSED
var _focused_body: OrbitingBody
var _new_focused_body: OrbitingBody

var sun_data = Utils.load_json_file("res://content/data/bodies/sun.json")
var _model_scalar

var _focus_scene: OrbitingBody
var _new_focus_scene: OrbitingBody

var sim_time_scalar: float = DEFAULT_TIME_SCALAR:
	set(value):
		sim_time_scalar = value
		sim_time_scalar_changed.emit(value)

		if sim_time_paused:
			sim_time_paused = false

var sim_time_paused: bool:
	set(value):
		sim_time_paused = value
		sim_time_paused_changed.emit(sim_time_paused)

		if sim_time_paused:
			sim_time_live = false

var sim_time_live: bool:
	set(value):
		sim_time_live = value
		sim_time_live_changed.emit(sim_time_live)

var _sim_time: float:
	set(value):
		_sim_time = value
		sim_time_changed.emit(_sim_time)
		_focus_scene.time = value
		
		var sys_time = Time.get_unix_time_from_system()
		
		#When sim time is out of sync it's not live
		if abs(int(_sim_time) - int(sys_time)) > 5:
			sim_time_live = false

var sim_scale: float:
	set(value):
		sim_scale = value
		_focus_scene.scale = Vector3(value, value, value)
		
		#Inverse scale applied to labels to keep them from being scaled with model
		_focus_scene.label_scale = 1 / sim_scale  
		
		# Switch from showing planet orbit lines to showing planet moons once specific zoom threshold reached

		var moon_show_thresh = (_focus_scale_body - (_focus_scale_body * 0.9))

		_focus_scene.satellite_orbits_visible = sim_scale <= moon_show_thresh # Hide/Show planet orbit lines
		# If not the sun, show/hide satellites:
		#_focused_body.satellites_visible = (_focused_body.ID == Mappings.planet_ID["sun"]) or (sim_scale > moon_show_thresh)
		
		sim_scale_changed.emit(_model_scalar * value)



func _ready():
	_focus_scene = _create_focus_scene("sun")
	add_child(_focus_scene)
#	_focused_body = %CentralBody
	


func _process(delta: float) -> void:
	if not sim_time_paused:
		_sim_time += delta * sim_time_scalar
	
	_handle_body_focusing(delta)


func setup():
	_focus_scene.satellites_visible = true
	_focus_scene.satellite_bodies_will_scale = true
	_focus_scene.visible = true


func reset_state():
	init_time()
	focus_body("sun")
	

func init_time():
	_sim_time = Time.get_unix_time_from_system()
	sim_time_scalar = DEFAULT_TIME_SCALAR
	sim_time_paused = false
	sim_time_live = true


func focus_body(p_new_focused_body_name: String):
	"""This function sets up the transition to a focused body, which _handle_body_focusing() finishes"""
	
	_new_focus_scene = _create_focus_scene(p_new_focused_body_name)
	
	# Get body to move to
	for satellite in _focus_scene.satellites:
		if satellite.body_name.to_lower() == p_new_focused_body_name.to_lower():
			_new_focused_body = satellite
	
	if _new_focused_body == null:
		return
	
	_focus_scale_body =  0.5 / _new_focused_body.radius # Scale where body is visible

	_focus_move_time_remaining = FOCUS_MOVE_TIME
	_focus_zoom_in_speed = abs(_focus_scale_body - FOCUS_SCALE_BIRDS_EYE) / FOCUS_ZOOM_TIME
	
	_focus_zoom_out_target = FOCUS_SCALE_BIRDS_EYE # Target is the space birds eye veiw
	_focus_zoom_out_speed = abs(_focus_zoom_out_target - sim_scale) / FOCUS_ZOOM_TIME
	
	_focus_state = FocusState.ZOOM_OUT  


func _handle_body_focusing(delta: float):
	match(_focus_state):
		FocusState.ZOOM_OUT:
			if sim_scale <= _focus_zoom_out_target:	 # Zoom out if less than target
				sim_scale = _focus_zoom_out_target
				_focused_body = _new_focused_body
				_focus_action_after_wait = FocusState.MOVE
				_focus_wait_timer = 0
				_focus_state = FocusState.WAIT
			else:
				sim_scale -= _focus_zoom_out_speed * delta	
		FocusState.MOVE:
			_focus_move_time_remaining -= delta
			var body_position: Vector3 = %Simulation.to_local(_focused_body.body.global_position)
			var focus_sim_move_target = _focus_scene.position - body_position  
			var focus_sim_move_dir = -body_position.normalized()
			var _focus_sim_move_speed = (focus_sim_move_target - _focus_scene.position).length() / _focus_move_time_remaining
		
			var step = focus_sim_move_dir * _focus_sim_move_speed * delta
			# Check if at target, accounting for overshooting
			if step.length() >= _focus_scene.position.distance_to(focus_sim_move_target):
				_focus_scene.position = focus_sim_move_target
				
				_focus_action_after_wait = FocusState.ZOOM_IN
				_focus_wait_timer = 0
				_focus_state = FocusState.WAIT
			else:
				_focus_scene.position += step
		FocusState.ZOOM_IN:
			if sim_scale >= _focus_scale_body:
				sim_scale = _focus_scale_body
				
				_focus_state = FocusState.FOCUSED
				
				add_child(_new_focus_scene)
	
				remove_child(_focus_scene)
				_focus_scene = _new_focus_scene
	
				focus_body_changed.emit(_focus_scene)
				
			else:
				sim_scale += _focus_zoom_in_speed * delta
		FocusState.WAIT:
			if _focus_wait_timer >= FOCUS_WAIT_TIME:
				_focus_state = _focus_action_after_wait
			else:
				_focus_wait_timer += delta


func _create_focus_scene(body_name: String) -> OrbitingBody:
	"""Creates an orbiting_body node"""
	
	var body_data_path = "res://content/data/bodies/%s.json" % body_name
	var body_data = Utils.load_json_file(body_data_path)
	
	var orbiting_body = OrbitingBodyScn.instantiate()
	
	_model_scalar = 0.5 / body_data["radius"]
	
	orbiting_body.init(body_data, Camera, _model_scalar, _sim_time, true)
	
	return orbiting_body
