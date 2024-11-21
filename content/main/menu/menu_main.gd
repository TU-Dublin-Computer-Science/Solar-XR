extends StaticBody3D

# Move Signals
signal move_up_start
signal move_up_stop

signal move_down_start
signal move_down_stop

signal move_left_start
signal move_left_stop

signal move_right_start
signal move_right_stop

signal move_forward_start
signal move_forward_stop

signal move_back_start
signal move_back_stop

# Rotate Signals
signal rotate_increaseX_start
signal rotate_increaseX_stop

signal rotate_decreaseX_start
signal rotate_decreaseX_stop

signal rotate_decreaseY_start
signal rotate_decreaseY_stop

signal rotate_increaseY_start
signal rotate_increaseY_stop

# Scale Signals
signal scale_decrease_start
signal scale_decrease_stop

signal scale_increase_start
signal scale_increase_stop

# Time Signals
signal time_decrease_start
signal time_decrease_stop

signal time_increase_start
signal time_increase_stop

# Reset Signal
signal reset

const MenuDefaultScn = preload("res://content/main/menu/menu_default.tscn")
const MenuMoveScn = preload("res://content/main/menu/menu_move.tscn")
const MenuRotateScn = preload("res://content/main/menu/menu_rotate.tscn")
const MenuScaleScn = preload("res://content/main/menu/menu_scale.tscn")
const MenuTimeScn = preload("res://content/main/menu/menu_time.tscn")

var MenuDefault
var MenuMove
var MenuRotate
var MenuScale
var MenuTime

var simulation_speed: float
var simulation_time: int
var real_time: int

var _active_btn: Button3D = null:
	set(value):
		if _active_btn != null:
			_active_btn.active = false
			_active_btn.disabled = false
			
		_active_btn = value
		
		if _active_btn != null:
			_active_btn.active = true
			_active_btn.disabled = true


var _active_tab: Node3D = null:
	set(value):
		if _active_tab != null:
			remove_child(_active_tab)
		
		_active_tab = value
		add_child(_active_tab)


# Called when the node enters the scene tree for the first time.
func _ready() -> void:
	_setup_menu_buttons()	
	_setup_tabs()
	_active_tab = MenuDefault


# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(_delta: float) -> void:
	_handle_ui_updates()


func _handle_ui_updates():
	MenuTime.simulation_speed = simulation_speed
	MenuTime.simulation_time = simulation_time
	MenuTime.real_time = real_time


func _setup_menu_buttons():
	%BtnMove.on_button_down.connect(func():
		_active_btn = %BtnMove
		_active_tab = MenuMove
	)
	
	%BtnRotate.on_button_down.connect(func():
		_active_btn = %BtnRotate
		_active_tab = MenuRotate
	)
	
	%BtnScale.on_button_down.connect(func():
		_active_btn = %BtnScale
		_active_tab = MenuScale
	)
	
	%BtnTime.on_button_down.connect(func():
		_active_btn = %BtnTime
		_active_tab = MenuTime
	)
	
	%BtnReset.on_button_down.connect(func():
		_active_btn = null
		_active_tab = MenuDefault
		reset.emit()
	)


func _setup_tabs():
	_setup_default_tab()
	_setup_move_tab()
	_setup_rotate_tab()
	_setup_scale_tab()
	_setup_time_tab()

func _setup_default_tab():
	MenuDefault = MenuDefaultScn.instantiate()
	
	
func _setup_move_tab():
	MenuMove = MenuMoveScn.instantiate()
	MenuMove.find_child("BtnUp").on_button_down.connect(func():move_up_start.emit())	
	MenuMove.find_child("BtnUp").on_button_up.connect(func():move_up_stop.emit())	
	
	MenuMove.find_child("BtnDown").on_button_down.connect(func(): move_down_start.emit())
	MenuMove.find_child("BtnDown").on_button_up.connect(func(): move_down_stop.emit())

	MenuMove.find_child("BtnLeft").on_button_down.connect(func(): move_left_start.emit())
	MenuMove.find_child("BtnLeft").on_button_up.connect(func(): move_left_stop.emit())

	MenuMove.find_child("BtnRight").on_button_down.connect(func(): move_right_start.emit())
	MenuMove.find_child("BtnRight").on_button_up.connect(func(): move_right_stop.emit())

	MenuMove.find_child("BtnForward").on_button_down.connect(func(): move_forward_start.emit())
	MenuMove.find_child("BtnForward").on_button_up.connect(func(): move_forward_stop.emit())

	MenuMove.find_child("BtnBack").on_button_down.connect(func(): move_back_start.emit())
	MenuMove.find_child("BtnBack").on_button_up.connect(func(): move_back_stop.emit())


func _setup_rotate_tab():
	MenuRotate = MenuRotateScn.instantiate()
	
	MenuRotate.find_child("BtnUp").on_button_down.connect(func(): rotate_decreaseX_start.emit())
	MenuRotate.find_child("BtnUp").on_button_up.connect(func(): rotate_decreaseX_stop.emit())

	MenuRotate.find_child("BtnDown").on_button_down.connect(func(): rotate_increaseX_start.emit())
	MenuRotate.find_child("BtnDown").on_button_up.connect(func(): rotate_increaseX_stop.emit())

	MenuRotate.find_child("BtnLeft").on_button_down.connect(func(): rotate_decreaseY_start.emit())
	MenuRotate.find_child("BtnLeft").on_button_up.connect(func(): rotate_decreaseY_stop.emit())

	MenuRotate.find_child("BtnRight").on_button_down.connect(func(): rotate_increaseY_start.emit())
	MenuRotate.find_child("BtnRight").on_button_up.connect(func(): rotate_increaseY_stop.emit())


func _setup_scale_tab():
	MenuScale = MenuScaleScn.instantiate()
	
	MenuScale.find_child("BtnDecrease").on_button_down.connect(func(): scale_decrease_start.emit())
	MenuScale.find_child("BtnDecrease").on_button_up.connect(func(): scale_decrease_stop.emit())

	MenuScale.find_child("BtnIncrease").on_button_down.connect(func(): scale_increase_start.emit())
	MenuScale.find_child("BtnIncrease").on_button_up.connect(func(): scale_increase_stop.emit())


func _setup_time_tab():
	MenuTime = MenuTimeScn.instantiate()
	
	MenuTime.find_child("BtnDecrease").on_button_down.connect(func(): time_decrease_start.emit())
	MenuTime.find_child("BtnDecrease").on_button_up.connect(func(): time_decrease_stop.emit())

	MenuTime.find_child("BtnIncrease").on_button_down.connect(func(): time_increase_start.emit())
	MenuTime.find_child("BtnIncrease").on_button_up.connect(func(): time_increase_stop.emit())
