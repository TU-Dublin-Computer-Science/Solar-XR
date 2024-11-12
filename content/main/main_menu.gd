extends StaticBody3D

signal btn_move_pressed
signal btn_rotate_pressed
signal btn_scale_pressed
signal btn_time_pressed
signal btn_reset_pressed
signal slider_1_changed
signal slider_2_changed

func _ready() -> void:
	_setup_signals()


# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta: float) -> void:
	pass


func _setup_signals():
	%BtnMove.on_button_up.connect(func():
		btn_move_pressed.emit()
	)
	
	%BtnRotate.on_button_up.connect(func():
		btn_rotate_pressed.emit()
	)
	
	%BtnScale.on_button_up.connect(func():
		btn_scale_pressed.emit()
	)

	%BtnTime.on_button_up.connect(func():
		btn_time_pressed.emit()
	)
	
	%BtnReset.on_button_up.connect(func():
		btn_reset_pressed.emit()
	)
	
	%Slider1.on_value_changed.connect(func(value: int):
		slider_1_changed.emit()
	)
	
	%Slider2.on_value_changed.connect(func(value: int):
		slider_2_changed.emit()	
	)
