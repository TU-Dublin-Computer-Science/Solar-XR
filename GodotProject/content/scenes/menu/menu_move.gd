extends Node3D

var pos_readout: Vector3:
	set(value):
		pos_readout = value
		$LblXReadout.text = "%0.2f" % value.x
		$LblYReadout.text = "%0.2f" % value.y
		$LblZReadout.text = "%0.2f" % value.z

# Called when the node enters the scene tree for the first time.
func _ready() -> void:
	pass # Replace with function body.


# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta: float) -> void:
	pass
