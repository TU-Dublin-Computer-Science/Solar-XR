extends Node3D

var scale_readout: float:
	set(value):
		scale_readout = value
		$LblReadout.text = "%.6fx" % value
