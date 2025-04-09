@tool
extends Button3D

signal on_select()

func _ready():
	on_button_up.connect(func():
		on_select.emit()
	)
