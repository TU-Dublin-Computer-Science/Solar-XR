extends Node3D

var rot_x_readout: float: 
	set(value):
		rot_x_readout = value
		$LblXReadout.text = "%0.2f°" % rad_to_deg(value)

var rot_y_readout: float:
	set(value):
		rot_y_readout = value		
		$LblYReadout.text = "%0.2f°" % rad_to_deg(value)

# Called when the node enters the scene tree for the first time.
func _ready() -> void:
	pass # Replace with function body.


# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta: float) -> void:
	pass
