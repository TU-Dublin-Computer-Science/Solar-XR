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
signal time_pause_changed
signal time_live_pressed
signal time_speed_changed

# Body Signals
signal body_selected
signal body_back_pressed

# Settings Signals
signal input_mode_changed

# Reset Signal
signal reset


@onready var MenuDefault = $ControlMenu/Tabs/MenuDefault
@onready var MenuMove = $ControlMenu/Tabs/MenuMove
@onready var MenuRotate = $ControlMenu/Tabs/MenuRotate
@onready var MenuScale = $ControlMenu/Tabs/MenuScale
@onready var MenuTime = $ControlMenu/Tabs/MenuTime
@onready var MenuBody = $ControlMenu/Tabs/MenuBody
@onready var MenuSettings = $ControlMenu/Tabs/MenuSettings

@onready var ControlMenu = $ControlMenu

@onready var StartMenu = $StartMenu
@onready var MenuStart = $StartMenu/Tabs/MenuStart
@onready var MenuInputMode = $StartMenu/Tabs/MenuInputMode
@onready var MenuTouchBtn = $StartMenu/Tabs/MenuTouchBtn
@onready var MenuTouchInfo = $StartMenu/Tabs/MenuTouchInfo
@onready var MenuRayBtn = $StartMenu/Tabs/MenuRayBtn
@onready var MenuRayInfo = $StartMenu/Tabs/MenuRayInfo

@onready var FPSCounter = %FPSCounter

var Camera: XRCamera3D

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

var time_scalar_enum: Mappings.TimeScalar: 
	set(value):
		time_scalar_enum = value
		MenuTime.time_scalar_enum = value

var time_scalar_readout: int:
	set(value):
		time_scalar_readout = value
		MenuTime.time_scalar_readout = value

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

var focused_body_name: String: 
	set(value):
		focused_body_name = value
		MenuBody.selected_body_name = value
		
var parent_body_name: String:
	set(value):
		parent_body_name = value
		MenuBody.parent_body_name = value

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

var _active_control_tab: Node3D = null:
	set(value):
		if _active_control_tab != null:
			$ControlMenu/Tabs.remove_child(_active_control_tab)
		
		_active_control_tab = value
		$ControlMenu/Tabs.add_child(_active_control_tab)

var _active_start_tab: Node3D = null:
	set(value):
		if _active_start_tab != null:
			$StartMenu/Tabs.remove_child(_active_start_tab)
		
		_active_start_tab = value
		$StartMenu/Tabs.add_child(_active_start_tab)

# Called when the node enters the scene tree for the first time.
func _ready() -> void:	
	_setup_start_menu()
	_setup_control_menu()
	remove_child(ControlMenu)


func _process(delta: float) -> void:
	if FPSCounter != null and FPSCounter.visible:
		FPSCounter.text = "FPS: %d" % Engine.get_frames_per_second()    


func add_body(body: OrbitingBody):
	MenuBody.add_body(body)


func reset_body_menu():
	MenuBody.reset()

func render_body_menu():
	MenuBody.render()


func _setup_control_menu():
	ControlMenu.visible = true
	_setup_menu_buttons()
	_setup_tabs()
	
	for tab in $ControlMenu/Tabs.get_children():
		tab.visible = true
		$ControlMenu/Tabs.remove_child(tab)
	
	_active_control_tab = MenuDefault


func _setup_menu_buttons():
	%BtnMove.on_button_down.connect(func(): _active_control_tab = MenuMove)
	
	%BtnRotate.on_button_down.connect(func(): _active_control_tab = MenuRotate)
	
	%BtnScale.on_button_down.connect(func(): _active_control_tab = MenuScale)
	
	%BtnTime.on_button_down.connect(func(): _active_control_tab = MenuTime)
	
	%BtnBody.on_button_down.connect(func(): _active_control_tab = MenuBody)
	
	%BtnReset.on_button_down.connect(func(): 
		$ControlMenu/BtnTglMenu.clear_active_btn()
		_active_control_tab = MenuDefault
		reset.emit()
	)
	
	%BtnSettings.on_button_down.connect(func(): _active_control_tab = MenuSettings)


func _setup_tabs():
	_setup_move_tab()
	_setup_rotate_tab()
	_setup_scale_tab()
	_setup_time_tab()
	_setup_body_tab()
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

	MenuMove.find_child("BtnReturn").on_button_up.connect(func(): _active_control_tab = MenuSettings)


func _setup_rotate_tab():	
	MenuRotate.find_child("BtnUp").on_button_down.connect(func(): rotate_decreaseX_start.emit())
	MenuRotate.find_child("BtnUp").on_button_up.connect(func(): rotate_decreaseX_stop.emit())

	MenuRotate.find_child("BtnDown").on_button_down.connect(func(): rotate_increaseX_start.emit())
	MenuRotate.find_child("BtnDown").on_button_up.connect(func(): rotate_increaseX_stop.emit())

	MenuRotate.find_child("BtnLeft").on_button_down.connect(func(): rotate_decreaseY_start.emit())
	MenuRotate.find_child("BtnLeft").on_button_up.connect(func(): rotate_decreaseY_stop.emit())

	MenuRotate.find_child("BtnRight").on_button_down.connect(func(): rotate_increaseY_start.emit())
	MenuRotate.find_child("BtnRight").on_button_up.connect(func(): rotate_increaseY_stop.emit())

	MenuRotate.find_child("BtnReturn").on_button_up.connect(func(): _active_control_tab = MenuSettings)


func _setup_scale_tab():	
	MenuScale.find_child("BtnDecrease").on_button_down.connect(func(): scale_decrease_start.emit())
	MenuScale.find_child("BtnDecrease").on_button_up.connect(func(): scale_decrease_stop.emit())

	MenuScale.find_child("BtnIncrease").on_button_down.connect(func(): scale_increase_start.emit())
	MenuScale.find_child("BtnIncrease").on_button_up.connect(func(): scale_increase_stop.emit())
	
	MenuScale.find_child("BtnReturn").on_button_up.connect(func(): _active_control_tab = MenuSettings)


func _setup_time_tab():	
	MenuTime.find_child("BtnBackward2").on_button_down.connect(func(): time_speed_changed.emit(Mappings.TimeScalar.BACKWARD2))
	MenuTime.find_child("BtnBackward1").on_button_down.connect(func(): time_speed_changed.emit(Mappings.TimeScalar.BACKWARD1))
	MenuTime.find_child("BtnLive").on_button_down.connect(func(): time_live_pressed.emit())
	MenuTime.find_child("BtnForward1").on_button_down.connect(func(): time_speed_changed.emit(Mappings.TimeScalar.FORWARD1))
	MenuTime.find_child("BtnForward2").on_button_down.connect(func(): time_speed_changed.emit(Mappings.TimeScalar.FORWARD2))

	MenuTime.btn_pause_pressed.connect(func(): time_speed_changed.emit(Mappings.TimeScalar.ZERO))
	MenuTime.btn_play_pressed.connect(func(): time_speed_changed.emit(Mappings.TimeScalar.REAL))


func _setup_body_tab():
	MenuBody.find_child("BtnBack").on_button_up.connect(func(): body_back_pressed.emit())
	
	MenuBody.body_selected.connect(func(body_name):
		body_selected.emit(body_name)
	)


func _setup_settings_tab():
	MenuSettings.find_child("BtnTouch").on_button_down.connect(func(): input_mode_changed.emit(Mappings.InputMethod.TOUCH))
	MenuSettings.find_child("BtnPointer").on_button_down.connect(func(): input_mode_changed.emit(Mappings.InputMethod.POINTER))


func _setup_start_menu():
	%StartMenu.visible = true
	
	MenuStart.find_child("BtnStart").on_button_up.connect(func():
		_exit_start_menu()
	)
	
	MenuInputMode.find_child("BtnTouch").on_button_up.connect(func(): _active_start_tab = MenuTouchBtn)
	MenuInputMode.find_child("BtnRay").on_button_up.connect(func(): 
		input_mode_changed.emit(Mappings.InputMethod.POINTER)
		_active_start_tab = MenuRayBtn
	)
	
	MenuTouchBtn.find_child("BtnPress").on_button_up.connect(func(): _active_start_tab = MenuTouchInfo)	
	MenuTouchInfo.find_child("InfoNode").on_button_down.connect(func(): _exit_start_menu())
	
	MenuRayBtn.find_child("BtnPress").on_button_up.connect(func(): _active_start_tab = MenuRayInfo)
	MenuRayInfo.find_child("InfoNode").on_button_down.connect(func(): _exit_start_menu())
	
	for tab in $StartMenu/Tabs.get_children():
		tab.visible = true
		$StartMenu/Tabs.remove_child(tab)
		
	_active_start_tab = MenuInputMode


func _exit_start_menu():
	start.emit()
	remove_child(StartMenu)
	add_child(ControlMenu)
