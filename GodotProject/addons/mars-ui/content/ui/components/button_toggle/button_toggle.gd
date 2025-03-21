extends Node3D

var _active_btn: Button3D = null:
	set(new_active_btn):
		if new_active_btn == _active_btn:  # If button is active do nothing
			return
			
		if _active_btn != null:  # If a button is selected, make inactive
			_active_btn.active = false
			_active_btn.disabled = false
		
		_active_btn = new_active_btn
		
		if _active_btn != null:
			_active_btn.active = true
			_active_btn.disabled = true  # Button can't be pressed

func _ready() -> void:
	for child in get_children():
		if child is Button3D:
			child.on_button_down.connect(func(): _active_btn = child)

func set_active(button: Button3D):
	if button in get_children():
		_active_btn = button

func clear_active_btn():
	_active_btn = null
