extends Node3D

@onready var Camera: XRCamera3D = $XROrigin3D/XRCamera3D
@onready var MainMenu = %MainMenu
@onready var InfoNodeScreen = %InfoNodeScreen

enum Mode {
	DEFAULT,
	MOVE,
	ROTATE,
	SCALE,
	TIME
}

var mode:Mode = Mode.DEFAULT

const DEFAULT_SIM_POS = Vector3(0, 1.5, -2)
const MAX_MOVE_DIST = 4
const MOVE_SPEED = 1

const ROT_CHANGE_SPEED = 1
const DEFAULT_ROT:Vector3 = Vector3(-20, 0, 0)

const MIN_SIM_SCALE: float = 0.0005
const MAX_SIM_SCALE: float = 500
const DEFAULT_SIM_SCALE: float = 0.01
const SCALE_CHANGE_SPEED = 2
const BODY_SCALE_UP = 800

const MIN_TIME_SCALAR = -10000000
const MAX_TIME_SCALAR = 10000000
const DEFAULT_TIME_SCALAR = 1
const TIME_CHANGE_SPEED = 3000

# Start of Settings Variables
var input_method: Mappings.InputMethod:
	set(value):
		input_method = value
		$XROrigin3D/XRControllerLeft.input_method = value
		$XROrigin3D/XRControllerRight.input_method = value

# End of Settings Variables

var _sim_position: Vector3:
	set(value):
		_sim_position = value
		%Simulation.position = value
		MainMenu.pos_readout = value


var _sim_scale: float:
	set(value):
		_sim_scale = value
		%Simulation.scale = Vector3(value, value, value)
		
		#Inverse scale applied to labels to keep them from being scaled with model
		%CentralBody.label_scale = 1 / _sim_scale  
		
		# Switch from showing planet orbit lines to showing planet moons once specific zoom threshold reached
		var moon_show_thresh = (focus_zoom_in_target - (focus_zoom_in_target * 0.9))
		%CentralBody.satellite_orbits_visible = _sim_scale <= moon_show_thresh # Hide/Show planet orbit lines
		# If not the sun, show/hide satellites:
		_focused_body.satellites_visible = (_focused_body.ID == Mappings.planet_ID["sun"]) or (_sim_scale > moon_show_thresh)
			
		MainMenu.scale_readout = _model_scalar * value


var _sim_time_scalar: float = DEFAULT_TIME_SCALAR:
	set(value):
		_sim_time_scalar = value
		MainMenu.sim_time_scalar_readout = value
		if _sim_time_paused:
			_sim_time_paused = false


var _sim_time: float:
	set(value):
		_sim_time = value
		%CentralBody.time = value
		MainMenu.sim_time_readout = value
		
		var sys_time = Time.get_unix_time_from_system()
		
		#When sim time is out of sync it's not live
		if abs(int(_sim_time) - int(sys_time)) > 5:
			_sim_time_live = false


var _sim_time_paused: bool:
	set(paused):
		_sim_time_paused = paused
		MainMenu.sim_time_paused_readout = paused
		if paused:
			_sim_time_live = false


var _sim_time_live: bool:
	set(value):
		_sim_time_live = value
		MainMenu.time_live_readout = value


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

# Scene Nodes
var InfoScreen: Node3D

# Player Location
var _saved_player_location: Vector3
var _to_sim: Vector3

var _model_scalar: float

var _body_scale_up: bool:
	set(value):
		_body_scale_up = value
		MainMenu.body_scale_up_selected = value
		
		if _body_scale_up:
			%CentralBody.body_scalar = BODY_SCALE_UP
		else:
			%CentralBody.body_scalar = 1

func _ready():	
	if OS.get_name() == "Android":
		input_method = Mappings.InputMethod.TOUCH
	else:
		input_method = Mappings.InputMethod.POINTER
	
	$MainMenuTracker.Camera =  $XROrigin3D/XRCamera3D	
	_setup_menu()


func _process(delta):
	_check_if_player_moved()
	
	if not _sim_time_paused:
		_sim_time += delta * _sim_time_scalar
		
	_handle_body_focusing(delta)
	
	_handle_constant_state_changes(delta)


func _setup():
	XRServer.center_on_hmd(XRServer.RESET_BUT_KEEP_TILT, true)
	%AudBGM.playing = true
	
	_init_sim()
	
	_reset_state()


func _init_sim():
	var sun_data = Utils.load_json_file("res://content/data/bodies/sun.json")
	_model_scalar = 0.5 / sun_data["radius"]
	
	%CentralBody.init(sun_data, Camera, _model_scalar, _sim_time)
	%CentralBody.satellites_visible = true
	%CentralBody.satellite_bodies_will_scale = true
	%CentralBody.visible = true


func _check_if_player_moved():
	"""When the player moves a certain distance the focus_sim_move_dir vector from them to the sim is updated"""
	"""This is done to have moving the simulation left and right work correctly"""
	var current_player_location = Vector3(Camera.global_position.x, 0, Camera.global_position.z)
	
	if current_player_location.distance_to(_saved_player_location) >= 0.2:
		_saved_player_location = current_player_location
		_to_sim = _saved_player_location.direction_to(Vector3(_sim_position.x, 0, _sim_position.z))

# --- Start of Focus Logic ---
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
const FOCUS_ZOOM_OUT_TARGET = 0.05

var _focus_zoom_out_speed: float
var focus_zoom_in_target: float
var _focus_zoom_in_speed: float

var _focus_move_time_remaining: float
var _focus_wait_timer: float = 0
var _focus_action_after_wait: FocusState

var _focus_state: FocusState = FocusState.FOCUSED
var _focused_body: OrbitingBody
var _new_focused_body: OrbitingBody


func _focus_body(p_new_focused_body: OrbitingBody):
	"""This function sets up the transition to a new focused body, which _handle_body_focusing() finishes"""
	
	if p_new_focused_body == _focused_body:
		return

	_new_focused_body = p_new_focused_body
	
	MainMenu.focused_body_ID = _new_focused_body.ID  #Update Menu Readout
	
	_body_scale_up = false  #Set bodies to true scale if not already
	
	
	_focus_zoom_out_speed = abs(FOCUS_ZOOM_OUT_TARGET - _sim_scale) / FOCUS_ZOOM_TIME
	
	_focus_move_time_remaining = FOCUS_MOVE_TIME
	
	focus_zoom_in_target =  0.5 / _new_focused_body.radius 
	_focus_zoom_in_speed = abs(focus_zoom_in_target - FOCUS_ZOOM_OUT_TARGET) / FOCUS_ZOOM_TIME
	
	if _sim_scale >= FOCUS_ZOOM_OUT_TARGET:
		_focus_state = FocusState.ZOOM_OUT  # Zoom out if too close
	else:
		_focused_body = _new_focused_body
		_focus_state = FocusState.MOVE  # Else move to new body


func _handle_body_focusing(delta: float):
	match(_focus_state):
		FocusState.ZOOM_OUT:
			if _sim_scale <= FOCUS_ZOOM_OUT_TARGET:	 # Zoom out if less than target
				_sim_scale = FOCUS_ZOOM_OUT_TARGET
				_focused_body = _new_focused_body
				_focus_action_after_wait = FocusState.MOVE
				_focus_wait_timer = 0
				_focus_state = FocusState.WAIT
			else:
				_sim_scale -= _focus_zoom_out_speed * delta	
		FocusState.MOVE:
			_focus_move_time_remaining -= delta
			var body_position: Vector3 = %Simulation.to_local(_focused_body.body.global_position)
			var focus_sim_move_target = %CentralBody.position - body_position  
			var focus_sim_move_dir = -body_position.normalized()
			var _focus_sim_move_speed = (focus_sim_move_target - %CentralBody.position).length() / _focus_move_time_remaining
		
			var step = focus_sim_move_dir * _focus_sim_move_speed * delta
			# Check if at target, accounting for overshooting
			if step.length() >= %CentralBody.position.distance_to(focus_sim_move_target):
				%CentralBody.position = focus_sim_move_target
				
				_focus_action_after_wait = FocusState.ZOOM_IN
				_focus_wait_timer = 0
				_focus_state = FocusState.WAIT
			else:
				%CentralBody.position += step
		FocusState.ZOOM_IN:
			if _sim_scale >= focus_zoom_in_target:
				_sim_scale = focus_zoom_in_target
				
				_focus_state = FocusState.FOCUSED
			else:
				_sim_scale += _focus_zoom_in_speed * delta
		FocusState.WAIT:
			if _focus_wait_timer >= FOCUS_WAIT_TIME:
				_focus_state = _focus_action_after_wait
			else:
				_focus_wait_timer += delta
	
	if _focused_body and _focus_state != FocusState.MOVE and _focus_action_after_wait != FocusState.MOVE: # Keep body in focus
		var body_position: Vector3 = %Simulation.to_local(_focused_body.body.global_position)
		%CentralBody.position =  %CentralBody.position - body_position  

# End of Focus Logic

func _reset_state():
	
	XRServer.center_on_hmd(XRServer.RESET_BUT_KEEP_TILT, true)

	_sim_position = DEFAULT_SIM_POS

	_to_sim = Vector3(Camera.global_position.x, 0, Camera.global_position.z).direction_to(Vector3(_sim_position.x, 0, _sim_position.z))

	%Simulation.transform.basis = Basis()
	
	%Simulation.rotate(Vector3.LEFT, deg_to_rad(DEFAULT_ROT.x))
	%Simulation.rotate(Vector3.UP, deg_to_rad(DEFAULT_ROT.y))
	%Simulation.rotate(Vector3.FORWARD, deg_to_rad(DEFAULT_ROT.z))
	
	_focus_body(_get_body(Mappings.planet_ID["sun"]))
	
	_body_scale_up = false
	
	_sim_scale = DEFAULT_SIM_SCALE
	
	_initialise_time()
	
	InfoNodeScreen.deactivate()
	_connect_info_nodes(%CentralBody)

	
func _connect_info_nodes(orbiting_body: OrbitingBody):
	for info_node in orbiting_body.info_nodes:
		InfoNodeScreen.connect_info_node(info_node)
	
	for satellite in orbiting_body.satellites:
		_connect_info_nodes(satellite)


func _get_body(ID: int):
	var focused_body: OrbitingBody
	
	if ID == Mappings.planet_ID["sun"]:
		focused_body = %CentralBody
	else:
		for satellite in %CentralBody.satellites:
			if ID == satellite.ID:
				focused_body = satellite
	
	return focused_body


func _initialise_time():
	_sim_time = Time.get_unix_time_from_system()
	_sim_time_scalar = DEFAULT_TIME_SCALAR
	_sim_time_paused = false
	_sim_time_live = true


func _setup_menu():
	MainMenu.start.connect(_setup)
	
	_setup_move_signals()
	_setup_rotate_signals()
	_setup_scale_signals()
	_setup_time_signals()
	_setup_planet_signals()
	MainMenu.reset.connect(_reset_state)


func _setup_move_signals():
	MainMenu.move_up_start.connect(func(): _moving_up = true)
	MainMenu.move_up_stop.connect(func(): _moving_up = false)
	
	MainMenu.move_down_start.connect(func(): _moving_down = true)
	MainMenu.move_down_stop.connect(func(): _moving_down = false)
	
	MainMenu.move_left_start.connect(func(): _moving_left = true)
	MainMenu.move_left_stop.connect(func(): _moving_left = false)
	
	MainMenu.move_right_start.connect(func(): _moving_right = true)
	MainMenu.move_right_stop.connect(func(): _moving_right = false)
	
	MainMenu.move_forward_start.connect(func(): _moving_forward = true)
	MainMenu.move_forward_stop.connect(func(): _moving_forward = false)
	
	MainMenu.move_back_start.connect(func(): _moving_back = true)
	MainMenu.move_back_stop.connect(func(): _moving_back = false)


func _setup_rotate_signals():
	MainMenu.rotate_increaseX_start.connect(func():_rot_increasing_x = true)
	MainMenu.rotate_increaseX_stop.connect(func(): _rot_increasing_x = false)

	MainMenu.rotate_decreaseX_start.connect(func(): _rot_decreasing_x = true)
	MainMenu.rotate_decreaseX_stop.connect(func(): _rot_decreasing_x = false)

	MainMenu.rotate_increaseY_start.connect(func(): _rot_increasing_y = true)
	MainMenu.rotate_increaseY_stop.connect(func(): _rot_increasing_y = false)

	MainMenu.rotate_decreaseY_start.connect(func(): _rot_decreasing_y = true)
	MainMenu.rotate_decreaseY_stop.connect(func(): _rot_decreasing_y = false)


func _setup_scale_signals():
	MainMenu.scale_increase_start.connect(func():_scale_increasing = true)
	MainMenu.scale_increase_stop.connect(func(): _scale_increasing = false)

	MainMenu.scale_decrease_start.connect(func(): _scale_decreasing = true)
	MainMenu.scale_decrease_stop.connect(func(): _scale_decreasing = false)


func _setup_time_signals():
	MainMenu.time_increase_start.connect(func():_time_increasing = true)
	MainMenu.time_increase_stop.connect(func(): _time_increasing = false)

	MainMenu.time_decrease_start.connect(func(): _time_decreasing = true)
	MainMenu.time_decrease_stop.connect(func(): _time_decreasing = false)
	
	MainMenu.time_pause_changed.connect(func(value): _sim_time_paused = value)
	
	MainMenu.time_live_pressed.connect(func(): _initialise_time())


func _setup_planet_signals():
	MainMenu.planet_change_pressed.connect(func(ID):
		_focus_body(_get_body(ID))
	)
	
	MainMenu.planet_scale_up.connect(func():
		_body_scale_up = true
	)
	
	MainMenu.planet_scale_true.connect(func():
		_body_scale_up = false
	)


func _handle_constant_state_changes(delta: float):
	_handle_constant_movement(delta)
	_handle_constant_rotation(delta)
	_handle_constant_scaling(delta)
	_handle_constant_time_change(delta)


func _handle_constant_movement(delta: float):

	if _moving_up:
		_sim_position.y += MOVE_SPEED * delta
	
	if _moving_down:
		_sim_position.y -= MOVE_SPEED * delta
	
	if _moving_left:
		_sim_position += _to_sim.rotated(Vector3.UP, deg_to_rad(90)) * MOVE_SPEED * delta
	
	if _moving_right:
		_sim_position += _to_sim.rotated(Vector3.UP, -deg_to_rad(90)) * MOVE_SPEED * delta
		
	if _moving_forward:
		_sim_position += -_to_sim * MOVE_SPEED * delta
		
	if _moving_back:
		_sim_position += _to_sim * MOVE_SPEED * delta


func _handle_constant_rotation(delta: float):
	if _rot_increasing_x:
		var horizontal_axis = _to_sim.cross(Vector3.UP).normalized()
		var rotation_inc = Basis(horizontal_axis, ROT_CHANGE_SPEED*delta)
		
		var new_transform = %Simulation.global_transform
		new_transform.basis = rotation_inc * new_transform.basis
		%Simulation.global_transform = new_transform

	if _rot_decreasing_x:
		var horizontal_axis = _to_sim.cross(Vector3.UP).normalized()
		var rotation_inc = Basis(horizontal_axis, -ROT_CHANGE_SPEED*delta)
		
		var new_transform = %Simulation.global_transform
		new_transform.basis = rotation_inc * new_transform.basis
		%Simulation.global_transform = new_transform
		
	if _rot_increasing_y:
		%Simulation.rotate_y(ROT_CHANGE_SPEED*delta)
		
	if _rot_decreasing_y:
		%Simulation.rotate_y(-ROT_CHANGE_SPEED*delta)

	
func _handle_constant_scaling(delta: float):
	if _scale_increasing:
		var base_change = SCALE_CHANGE_SPEED * delta
		_sim_scale = clamp(_sim_scale * (1.0 + base_change), MIN_SIM_SCALE, MAX_SIM_SCALE)
	
	if _scale_decreasing:
		var base_change = SCALE_CHANGE_SPEED * delta
		_sim_scale = clamp(_sim_scale * (1.0 - base_change), MIN_SIM_SCALE, MAX_SIM_SCALE)


var _time_increase_start: float = -1
var _time_decrease_start: float = -1
func _handle_constant_time_change(delta: float):
	
	if _time_increasing:
		if _time_increase_start == -1: # If not set yet
			_time_increase_start = Time.get_unix_time_from_system()
		
		var increase_time_held = Time.get_unix_time_from_system() - _time_increase_start
		
		_sim_time_scalar = clamp(	_sim_time_scalar + (increase_time_held * TIME_CHANGE_SPEED * delta) ,
			MIN_TIME_SCALAR,
			MAX_TIME_SCALAR)
	else:
		_time_increase_start = -1

	if _time_decreasing:
		if _time_decrease_start == -1:
			_time_decrease_start = Time.get_unix_time_from_system()
			
		var decrease_time_held = Time.get_unix_time_from_system() - _time_decrease_start
		
		_sim_time_scalar = clamp(	_sim_time_scalar - (decrease_time_held * TIME_CHANGE_SPEED * delta),
			MIN_TIME_SCALAR,
			MAX_TIME_SCALAR)
	else:
		_time_decrease_start = -1
