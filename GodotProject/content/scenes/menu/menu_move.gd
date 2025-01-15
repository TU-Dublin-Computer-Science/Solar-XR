extends Node3D

var pos_readout: Vector3:
	set(value):
		pos_readout = value
		$LblXReadout.text = "%0.2f" % value.x
		$LblYReadout.text = "%0.2f" % value.y
		$LblZReadout.text = "%0.2f" % value.z
