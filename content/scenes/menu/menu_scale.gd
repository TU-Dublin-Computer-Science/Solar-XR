extends Node3D

var scale_readout: float:
	set(value):
		scale_readout = value
		$LblReadout.text = "%.2fx" % value

# Called when the node enters the scene tree for the first time.
func _ready() -> void:
	pass # Replace with function body.


# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta: float) -> void:
	pass
