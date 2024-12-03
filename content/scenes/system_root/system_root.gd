extends Node3D

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

const MIN_SIM_SCALE: float = 0.5 
const MAX_SIM_SCALE: float = 4
const DEFAULT_SIM_SCALE: float = 1
const SCALE_CHANGE_SPEED = 1

const MIN_TIME_SCALAR = 1
const MAX_TIME_SCALAR = 6000
const DEFAULT_TIME_SCALAR = 1
const TIME_CHANGE_SPEED = 1000

var _sim_position: Vector3:
	set(value):
		_sim_position = value
		%PlanetSim.position = value
		%MainMenu.pos_readout = value

	
var _sim_scale: float = DEFAULT_SIM_SCALE:
	set(value):
		_sim_scale = value
		%PlanetSim.scale = Vector3(value, value, value)
		%MainMenu.scale_readout = %PlanetSim.model_scalar * value


var _sim_time_scalar: float = DEFAULT_TIME_SCALAR:
	set(value):
		_sim_time_scalar = value
		%PlanetSim.time_scalar = value
		%MainMenu.sim_time_scalar_readout = value
		if _sim_time_paused:
			_sim_time_paused = false


var _sim_time: float: 
	set(value):
		_sim_time = value
		%MainMenu.sim_time_readout = value
		
		var sys_time = Time.get_unix_time_from_system()
		
		#When sim time is out of sync it's not live
		if abs(int(_sim_time) - int(sys_time)) > 5: 
			_sim_time_live = false


var _sim_time_paused: bool:
	set(paused):
		_sim_time_paused = paused
		%MainMenu.sim_time_paused_readout = paused
		if paused:
			$PlanetSim.time_scalar = 0
			_sim_time_live = false
		else:
			$PlanetSim.time_scalar = _sim_time_scalar


var _sim_time_live: bool:
	set(value):
		_sim_time_live = value
		%MainMenu.time_live_readout = value
		

var _planet: GlobalEnums.Planet:
	set(value):
		_planet = value
		%PlanetSim.planet = value
		%MainMenu.planet = value

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

func _ready():	
	_setup_menu()
	_planet = GlobalEnums.Planet.MARS
	_initialise_system()


func _process(delta):	
	if not _sim_time_paused:
		_sim_time += 1 * delta * _sim_time_scalar
	_handle_constant_state_changes(delta)


func _initialise_system():
	_sim_position = DEFAULT_SIM_POS

	%PlanetSim.transform.basis = Basis()

	_sim_scale = DEFAULT_SIM_SCALE

	_initialise_time()
	
	%InfoNodeScreen.deactivate()
	var info_nodes = $PlanetSim.info_nodes 
	%InfoNodeScreen.info_nodes = info_nodes  # Doesn't work if assign directly
	
	%PlanetSim.reset_sim()	

func _initialise_time():
	_sim_time = Time.get_unix_time_from_system() 
	_sim_time_scalar = DEFAULT_TIME_SCALAR
	_sim_time_paused = false
	_sim_time_live = true


func _setup_menu():
	_setup_move_signals()
	_setup_rotate_signals()
	_setup_scale_signals()
	_setup_time_signals()
	_setup_planet_signals()
	%MainMenu.reset.connect(_initialise_system)


func _setup_move_signals():
	$MainMenu.move_up_start.connect(func(): _moving_up = true)
	$MainMenu.move_up_stop.connect(func(): _moving_up = false)
	
	$MainMenu.move_down_start.connect(func(): _moving_down = true)
	$MainMenu.move_down_stop.connect(func(): _moving_down = false)
	
	$MainMenu.move_left_start.connect(func(): _moving_left = true)
	$MainMenu.move_left_stop.connect(func(): _moving_left = false)
	
	$MainMenu.move_right_start.connect(func(): _moving_right = true)
	$MainMenu.move_right_stop.connect(func(): _moving_right = false)
	
	$MainMenu.move_forward_start.connect(func(): _moving_forward = true)
	$MainMenu.move_forward_stop.connect(func(): _moving_forward = false)
	
	$MainMenu.move_back_start.connect(func(): _moving_back = true)
	$MainMenu.move_back_stop.connect(func(): _moving_back = false)


func _setup_rotate_signals():
	$MainMenu.rotate_increaseX_start.connect(func():_rot_increasing_x = true)
	$MainMenu.rotate_increaseX_stop.connect(func(): _rot_increasing_x = false)

	$MainMenu.rotate_decreaseX_start.connect(func(): _rot_decreasing_x = true)
	$MainMenu.rotate_decreaseX_stop.connect(func(): _rot_decreasing_x = false)

	$MainMenu.rotate_increaseY_start.connect(func(): _rot_increasing_y = true)
	$MainMenu.rotate_increaseY_stop.connect(func(): _rot_increasing_y = false)

	$MainMenu.rotate_decreaseY_start.connect(func(): _rot_decreasing_y = true)
	$MainMenu.rotate_decreaseY_stop.connect(func(): _rot_decreasing_y = false)


func _setup_scale_signals():
	$MainMenu.scale_increase_start.connect(func():_scale_increasing = true)
	$MainMenu.scale_increase_stop.connect(func(): _scale_increasing = false)

	$MainMenu.scale_decrease_start.connect(func(): _scale_decreasing = true)
	$MainMenu.scale_decrease_stop.connect(func(): _scale_decreasing = false)


func _setup_time_signals():
	$MainMenu.time_increase_start.connect(func():_time_increasing = true)
	$MainMenu.time_increase_stop.connect(func(): _time_increasing = false)

	$MainMenu.time_decrease_start.connect(func(): _time_decreasing = true)
	$MainMenu.time_decrease_stop.connect(func(): _time_decreasing = false)
	
	%MainMenu.time_pause_changed.connect(func(value): _sim_time_paused = value)
	
	%MainMenu.time_live_pressed.connect(func(): _initialise_time())


func _setup_planet_signals():
	%MainMenu.planet_change_pressed.connect(func(value):
		_planet = value
		_initialise_system()
	)


func _handle_constant_state_changes(delta: float):
	_handle_constant_movement(delta)
	_handle_constant_rotation(delta)
	_handle_constant_scaling(delta)
	_handle_constant_time_change(delta)


func _handle_constant_movement(delta: float):
	if _moving_up:
		_sim_position.y = clamp(
								_sim_position.y + delta*MOVE_SPEED, 
								DEFAULT_SIM_POS.y - MAX_MOVE_DIST, 
								DEFAULT_SIM_POS.y + MAX_MOVE_DIST)		
	if _moving_down:
		_sim_position.y = clamp(
								_sim_position.y - delta*MOVE_SPEED, 
								DEFAULT_SIM_POS.y - MAX_MOVE_DIST, 
								DEFAULT_SIM_POS.y + MAX_MOVE_DIST)
	if _moving_left:
		_sim_position.x = clamp(
								_sim_position.x - delta*MOVE_SPEED, 
								DEFAULT_SIM_POS.x - MAX_MOVE_DIST, 
								DEFAULT_SIM_POS.x + MAX_MOVE_DIST)
	if _moving_right:
		_sim_position.x = clamp(
								_sim_position.x + delta*MOVE_SPEED, 
								DEFAULT_SIM_POS.x - MAX_MOVE_DIST, 
								DEFAULT_SIM_POS.x + MAX_MOVE_DIST)
	if _moving_forward:
		_sim_position.z = clamp(
								_sim_position.z - delta*MOVE_SPEED, 
								DEFAULT_SIM_POS.z - MAX_MOVE_DIST, 
								DEFAULT_SIM_POS.z + MAX_MOVE_DIST)
	if _moving_back:
		_sim_position.z = clamp(
								_sim_position.z + delta*MOVE_SPEED, 
								DEFAULT_SIM_POS.z - MAX_MOVE_DIST, 
								DEFAULT_SIM_POS.z + MAX_MOVE_DIST)		


func _handle_constant_rotation(delta: float):
	if _rot_increasing_x:
		$PlanetSim.rotate_x(ROT_CHANGE_SPEED*delta)

	if _rot_decreasing_x:
		$PlanetSim.rotate_x(-ROT_CHANGE_SPEED*delta)
	
	if _rot_increasing_y:
		$PlanetSim.rotate_y(ROT_CHANGE_SPEED*delta)
		
	if _rot_decreasing_y:
		$PlanetSim.rotate_y(-ROT_CHANGE_SPEED*delta)

	
func _handle_constant_scaling(delta: float):
	if _scale_increasing:
		_sim_scale = clamp(_sim_scale + SCALE_CHANGE_SPEED*delta, MIN_SIM_SCALE, MAX_SIM_SCALE)
	
	if _scale_decreasing:
		_sim_scale = clamp(_sim_scale - SCALE_CHANGE_SPEED*delta, MIN_SIM_SCALE, MAX_SIM_SCALE)


func _handle_constant_time_change(delta: float):
	if _time_increasing:
		_sim_time_scalar = clamp(	_sim_time_scalar + TIME_CHANGE_SPEED * delta,
								 	MIN_TIME_SCALAR, 
									MAX_TIME_SCALAR)
	
	if _time_decreasing:
		_sim_time_scalar = clamp(	_sim_time_scalar - TIME_CHANGE_SPEED * delta,
								 	MIN_TIME_SCALAR, 
									MAX_TIME_SCALAR)
