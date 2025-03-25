extends StaticBody3D

# Start Signal
signal start

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

signal time_pause_changed
signal time_live_pressed

# Planet Signals
signal planet_change_pressed
signal planet_scale_up
signal planet_scale_true

# Settings Signals
signal input_mode_changed

# Reset Signal
signal reset


@onready var MenuDefault = $ControlMenu/Tabs/MenuDefault
@onready var MenuMove = $ControlMenu/Tabs/MenuMove
@onready var MenuRotate = $ControlMenu/Tabs/MenuRotate
@onready var MenuScale = $ControlMenu/Tabs/MenuScale
@onready var MenuTime = $ControlMenu/Tabs/MenuTime
@onready var MenuPlanet = $ControlMenu/Tabs/MenuPlanet
@onready var MenuSettings = $ControlMenu/Tabs/MenuSettings

@onready var ControlMenu = $ControlMenu
@onready var StartMenu = $StartMenu

@onready var FPSCounter = %FPSCounter

# Below values just used for information readout on menu 
var pos_readout: Vector3:
	set(value):
		pos_readout = value
		MenuMove.pos_readout = value

var rot_x_readout: float:
	set(value):
		rot_x_readout = value
		MenuRotate.rot_x_readout = value

var rot_y_readout: float:
	set(value):
		rot_y_readout = value
		MenuRotate.rot_y_readout = value

var scale_readout: float:
	set(value):
		scale_readout = value
		MenuScale.scale_readout = value

var sim_time_scalar_readout: int: 
	set(value):
		sim_time_scalar_readout = value
		MenuTime.sim_time_scalar_readout = value

var sim_time_readout: float:
	set(value):
		sim_time_readout = value
		MenuTime.sim_time_readout = value
		
var sim_time_paused_readout: bool:
	set(value):
		sim_time_paused_readout = value
		MenuTime.sim_time_paused_readout = value	

var time_live_readout: bool:
	set(value):
		time_live_readout = value
		MenuTime.time_live_readout = value	

var focused_body_ID: int: 
	set(value):
		focused_body_ID = value
		MenuPlanet.selected_planet_ID = value

var input_method: Mappings.InputMethod:
	set(value):
		input_method = value
		MenuSettings.input_method = value

# ------------

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
			$ControlMenu/Tabs.remove_child(_active_tab)
		
		_active_tab = value
		$ControlMenu/Tabs.add_child(_active_tab)


# Called when the node enters the scene tree for the first time.
func _ready() -> void:	
	_setup_start_menu()
	_setup_control_menu()
	remove_child(ControlMenu)


func _process(delta: float) -> void:
	if FPSCounter != null and FPSCounter.visible:
		FPSCounter.text = "FPS: %d" % Engine.get_frames_per_second()    


func add_satellite(satellite: OrbitingBody):
	MenuPlanet.add_satellite(satellite)


func _setup_start_menu():
	StartMenu.visible = true
	StartMenu.find_child("BtnStart").on_button_up.connect(func():
		start.emit()
		remove_child(StartMenu)
		add_child(ControlMenu)
	)


func _setup_control_menu():
	ControlMenu.visible = true
	_setup_menu_buttons()
	_setup_tabs()
	
	for tab in $ControlMenu/Tabs.get_children():
		tab.visible = true
		$ControlMenu/Tabs.remove_child(tab)
	
	_active_tab = MenuDefault


func _setup_menu_buttons():
	%BtnMove.on_button_down.connect(func(): _active_tab = MenuMove)
	
	%BtnRotate.on_button_down.connect(func(): _active_tab = MenuRotate)
	
	%BtnScale.on_button_down.connect(func(): _active_tab = MenuScale)
	
	%BtnTime.on_button_down.connect(func(): _active_tab = MenuTime)
	
	%BtnPlanet.on_button_down.connect(func(): _active_tab = MenuPlanet)
	
	%BtnReset.on_button_down.connect(func(): 
		$ControlMenu/BtnTglMenu.clear_active_btn()
		_active_tab = MenuDefault
		reset.emit()
	)
	
	%BtnSettings.on_button_down.connect(func(): _active_tab = MenuSettings)


func _setup_tabs():
	_setup_move_tab()
	_setup_rotate_tab()
	_setup_scale_tab()
	_setup_time_tab()
	_setup_planet_tab()
	_setup_settings_tab()


func _setup_move_tab():
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

	MenuMove.find_child("BtnBackward").on_button_down.connect(func(): move_back_start.emit())
	MenuMove.find_child("BtnBackward").on_button_up.connect(func(): move_back_stop.emit())

	MenuMove.find_child("BtnReturn").on_button_up.connect(func(): _active_tab = MenuSettings)

func _setup_rotate_tab():	
	MenuRotate.find_child("BtnUp").on_button_down.connect(func(): rotate_decreaseX_start.emit())
	MenuRotate.find_child("BtnUp").on_button_up.connect(func(): rotate_decreaseX_stop.emit())

	MenuRotate.find_child("BtnDown").on_button_down.connect(func(): rotate_increaseX_start.emit())
	MenuRotate.find_child("BtnDown").on_button_up.connect(func(): rotate_increaseX_stop.emit())

	MenuRotate.find_child("BtnLeft").on_button_down.connect(func(): rotate_decreaseY_start.emit())
	MenuRotate.find_child("BtnLeft").on_button_up.connect(func(): rotate_decreaseY_stop.emit())

	MenuRotate.find_child("BtnRight").on_button_down.connect(func(): rotate_increaseY_start.emit())
	MenuRotate.find_child("BtnRight").on_button_up.connect(func(): rotate_increaseY_stop.emit())

	MenuRotate.find_child("BtnReturn").on_button_up.connect(func(): _active_tab = MenuSettings)

func _setup_scale_tab():	
	MenuScale.find_child("BtnDecrease").on_button_down.connect(func(): scale_decrease_start.emit())
	MenuScale.find_child("BtnDecrease").on_button_up.connect(func(): scale_decrease_stop.emit())

	MenuScale.find_child("BtnIncrease").on_button_down.connect(func(): scale_increase_start.emit())
	MenuScale.find_child("BtnIncrease").on_button_up.connect(func(): scale_increase_stop.emit())
	
	MenuScale.find_child("BtnReturn").on_button_up.connect(func(): _active_tab = MenuSettings)

func _setup_time_tab():	
	MenuTime.find_child("BtnDecrease").on_button_down.connect(func(): time_decrease_start.emit())
	MenuTime.find_child("BtnDecrease").on_button_up.connect(func(): time_decrease_stop.emit())

	MenuTime.find_child("BtnIncrease").on_button_down.connect(func(): time_increase_start.emit())
	MenuTime.find_child("BtnIncrease").on_button_up.connect(func(): time_increase_stop.emit())
	
	MenuTime.find_child("BtnLive").on_button_down.connect(func(): time_live_pressed.emit())
	
	MenuTime.btn_pause_pressed.connect(func(): time_pause_changed.emit(true))
	MenuTime.btn_play_pressed.connect(func(): time_pause_changed.emit(false))


func _setup_planet_tab():
	"""
	MenuPlanet.find_child("BtnMercury").on_button_down.connect(func(): planet_change_pressed.emit(Mappings.planet_ID["mercury"]))
	MenuPlanet.find_child("BtnVenus").on_button_down.connect(func(): planet_change_pressed.emit(Mappings.planet_ID["venus"]))
	MenuPlanet.find_child("BtnEarth").on_button_down.connect(func(): planet_change_pressed.emit(Mappings.planet_ID["earth"]))
	MenuPlanet.find_child("BtnMars").on_button_down.connect(func(): planet_change_pressed.emit(Mappings.planet_ID["mars"]))
	MenuPlanet.find_child("BtnJupiter").on_button_down.connect(func(): planet_change_pressed.emit(Mappings.planet_ID["jupiter"]))
	MenuPlanet.find_child("BtnSaturn").on_button_down.connect(func(): planet_change_pressed.emit(Mappings.planet_ID["saturn"]))
	MenuPlanet.find_child("BtnUranus").on_button_down.connect(func(): planet_change_pressed.emit(Mappings.planet_ID["uranus"]))
	MenuPlanet.find_child("BtnNeptune").on_button_down.connect(func(): planet_change_pressed.emit(Mappings.planet_ID["neptune"]))
	MenuPlanet.find_child("BtnSun").on_button_down.connect(func(): planet_change_pressed.emit(Mappings.planet_ID["sun"]))
	"""
	
func _setup_settings_tab():
	MenuSettings.find_child("BtnTouch").on_button_down.connect(func(): input_mode_changed.emit(Mappings.InputMethod.TOUCH))
	MenuSettings.find_child("BtnPointer").on_button_down.connect(func(): input_mode_changed.emit(Mappings.InputMethod.POINTER))
