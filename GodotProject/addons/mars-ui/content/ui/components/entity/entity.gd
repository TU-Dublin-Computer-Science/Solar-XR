@tool
extends Button3D

signal on_select()

var ent_label: String

func _ready():
	# Button labels can only be set in ready, hence why this is done
	label = ent_label 
	
	on_button_up.connect(func():
		on_select.emit()
	)
	
	
