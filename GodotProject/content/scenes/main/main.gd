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

const TIME_CHANGE_SPEED = 3000
const MIN_TIME_SCALAR = -10000000
const MAX_TIME_SCALAR = 10000000

# Start of Settings Variables
var input_method: Mappings.InputMethod:
	set(value):
		input_method = value
		$XROrigin3D/XRControllerLeft.input_method = value
		$XROrigin3D/XRControllerRight.input_method = value
		%MainMenu.input_method = value

# End of Settings Variables

var _sim_position: Vector3:
	set(value):
		_sim_position = value
		%Simulation.position = value
		MainMenu.pos_readout = value




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

var _body_scale_up: bool:
	set(value):
		_body_scale_up = value
		#MainMenu.body_scale_up_selected = value
		
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
	
	_handle_constant_state_changes(delta)
	
	if Input.is_action_pressed("forward"):
		input_method = Mappings.InputMethod.POINTER


func _input(event):
	if event.is_action_pressed("forward"):
		if input_method == Mappings.InputMethod.POINTER:
			input_method = Mappings.InputMethod.TOUCH
		else:
			input_method = Mappings.InputMethod.POINTER


func _setup():
	%AudBGM.playing = true
	%Simulation.setup()

	_reset_state()


func _check_if_player_moved():
	"""When the player moves a certain distance the focus_sim_move_dir vector from them to the sim is updated"""
	"""This is done to have moving the simulation left and right work correctly"""
	var current_player_location = Vector3(Camera.global_position.x, 0, Camera.global_position.z)
	
	if current_player_location.distance_to(_saved_player_location) >= 0.2:
		_saved_player_location = current_player_location
		_to_sim = _saved_player_location.direction_to(Vector3(_sim_position.x, 0, _sim_position.z))


func _reset_state():
	"""Set state to initial defaults, this is called on program start and when sim is reset"""
	XRServer.center_on_hmd(XRServer.RESET_BUT_KEEP_TILT, true)

	_sim_position = DEFAULT_SIM_POS

	_to_sim = Vector3(Camera.global_position.x, 0, Camera.global_position.z).direction_to(Vector3(_sim_position.x, 0, _sim_position.z))

	# Resets rotation while preserving scale
	var scale = %Simulation.transform.basis.get_scale()
	%Simulation.transform.basis = Basis().scaled(scale)

	%Simulation.rotate(Vector3.LEFT, deg_to_rad(DEFAULT_ROT.x))
	%Simulation.rotate(Vector3.UP, deg_to_rad(DEFAULT_ROT.y))
	%Simulation.rotate(Vector3.FORWARD, deg_to_rad(DEFAULT_ROT.z))
	
	%Simulation.reset_state()
	
func _connect_info_nodes(orbiting_body: OrbitingBody):
	for info_node in orbiting_body.info_nodes:
		InfoNodeScreen.connect_info_node(info_node)
	
	for satellite in orbiting_body.satellites:
		_connect_info_nodes(satellite)


func _setup_menu():
	MainMenu.start.connect(_setup)
	
	_setup_move_signals()
	_setup_rotate_signals()
	_setup_scale_signals()
	_setup_time_signals()
	_setup_planet_signals()
	_setup_settings_signals()
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

	%Simulation.sim_scale_changed.connect(func(sim_scale):
		MainMenu.scale_readout = sim_scale
	)

func _setup_time_signals():
	MainMenu.time_increase_start.connect(func():_time_increasing = true)
	MainMenu.time_increase_stop.connect(func(): _time_increasing = false)

	MainMenu.time_decrease_start.connect(func(): _time_decreasing = true)
	MainMenu.time_decrease_stop.connect(func(): _time_decreasing = false)
	
	MainMenu.time_pause_changed.connect(func(value): %Simulation.sim_time_paused = value)
	MainMenu.time_live_pressed.connect(func(): %Simulation.init_time())
	
	%Simulation.sim_time_changed.connect(func(value):
		MainMenu.sim_time_readout = value
	)
	%Simulation.sim_time_live_changed.connect(func(value):
		MainMenu.time_live_readout = value
	)
	%Simulation.sim_time_paused_changed.connect(func(value):
		MainMenu.sim_time_paused_readout = value
	)
	%Simulation.sim_time_scalar_changed.connect(func(value):
		MainMenu.sim_time_scalar_readout = value
	)


func _setup_planet_signals():
	MainMenu.planet_change_pressed.connect(func(body_name):
		%Simulation.focus_body(body_name)
	)
	
	MainMenu.planet_scale_up.connect(func():
		_body_scale_up = true
	)
	
	MainMenu.planet_scale_true.connect(func():
		_body_scale_up = false
	)
	
	%Simulation.focus_body_changed.connect(func(focus_body):
		InfoNodeScreen.deactivate()
		_connect_info_nodes(focus_body)
		MainMenu.focused_body_name = focus_body.body_name
	)

func _setup_settings_signals():
	MainMenu.input_mode_changed.connect(func(p_input_method):
		input_method = p_input_method
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
		%Simulation.sim_scale = clamp(%Simulation.sim_scale * (1.0 + base_change), MIN_SIM_SCALE, MAX_SIM_SCALE)
	
	if _scale_decreasing:
		var base_change = SCALE_CHANGE_SPEED * delta
		%Simulation.sim_scale = clamp(%Simulation.sim_scale * (1.0 - base_change), MIN_SIM_SCALE, MAX_SIM_SCALE)


var _time_increase_start: float = -1
var _time_decrease_start: float = -1
func _handle_constant_time_change(delta: float):
	
	if _time_increasing:
		if _time_increase_start == -1: # If not set yet
			_time_increase_start = Time.get_unix_time_from_system()
		
		var increase_time_held = Time.get_unix_time_from_system() - _time_increase_start
		
		%Simulation.sim_time_scalar = clamp(%Simulation.sim_time_scalar + (increase_time_held * TIME_CHANGE_SPEED * delta) ,
			MIN_TIME_SCALAR,
			MAX_TIME_SCALAR)
	else:
		_time_increase_start = -1

	if _time_decreasing:
		if _time_decrease_start == -1:
			_time_decrease_start = Time.get_unix_time_from_system()
			
		var decrease_time_held = Time.get_unix_time_from_system() - _time_decrease_start
		
		%Simulation.sim_time_scalar = clamp(%Simulation.sim_time_scalar - (decrease_time_held * TIME_CHANGE_SPEED * delta),
			MIN_TIME_SCALAR,
			MAX_TIME_SCALAR)
	else:
		_time_decrease_start = -1
