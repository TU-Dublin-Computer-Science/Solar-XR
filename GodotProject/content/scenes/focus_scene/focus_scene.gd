extends Node3D
class_name FocusScene

signal sim_scale_changed

enum FocusState {
	ZOOM_OUT,
	MOVE,
	ZOOM_IN,
	WAIT,
	FOCUSED
}

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

var _model_scalar: float


var sim_scale: float:
	set(value):
		sim_scale = value
		scale = Vector3(value, value, value)
		
		#Inverse scale applied to labels to keep them from being scaled with model
		$CentralBody.label_scale = 1 / sim_scale  
		
		# Switch from showing planet orbit lines to showing planet moons once specific zoom threshold reached
		var moon_show_thresh = (_focus_scale_body - (_focus_scale_body * 0.9))

		$CentralBody.satellite_orbits_visible = sim_scale <= moon_show_thresh # Hide/Show planet orbit lines
		# If not the sun, show/hide satellites:
		#_focused_body.satellites_visible = (_focused_body.ID == Mappings.planet_ID["sun"]) or (sim_scale > moon_show_thresh)
		
		sim_scale_changed.emit(_model_scalar * value)

var time: float:
	set(value):
		time = value
		$CentralBody.time = time

func _process(delta) -> void:
	_handle_body_focusing(delta)


func init(body_name: String, camera: XRCamera3D):
	var body_data_path = "res://content/data/bodies/%s.json" % body_name
	var body_data = Utils.load_json_file(body_data_path)
	
	_model_scalar = 0.5 / body_data["radius"]
	
	$CentralBody.init(body_data, camera, _model_scalar, time, true)


func focus_body(p_new_focused_body_name: String):
	"""This function sets up the transition to a focused body, which _handle_body_focusing() finishes"""
		
	# Get body to move to
	for satellite in $CentralBody.satellites:
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
			var focus_sim_move_target = $CentralBody.position - body_position  
			var focus_sim_move_dir = -body_position.normalized()
			var _focus_sim_move_speed = (focus_sim_move_target - $CentralBody.position).length() / _focus_move_time_remaining
		
			var step = focus_sim_move_dir * _focus_sim_move_speed * delta
			# Check if at target, accounting for overshooting
			if step.length() >= $CentralBody.position.distance_to(focus_sim_move_target):
				$CentralBody.position = focus_sim_move_target
				
				_focus_action_after_wait = FocusState.ZOOM_IN
				_focus_wait_timer = 0
				_focus_state = FocusState.WAIT
			else:
				$CentralBody.position += step
		FocusState.ZOOM_IN:
			if sim_scale >= _focus_scale_body:
				sim_scale = _focus_scale_body
				
				_focus_state = FocusState.FOCUSED
				
				"""
				add_child(_new_focus_scene)
	
				remove_child(_focus_scene)
				_focus_scene = _new_focus_scene
	
				focus_body_changed.emit(_focus_scene)
				"""
			else:
				sim_scale += _focus_zoom_in_speed * delta
		FocusState.WAIT:
			if _focus_wait_timer >= FOCUS_WAIT_TIME:
				_focus_state = _focus_action_after_wait
			else:
				_focus_wait_timer += delta
