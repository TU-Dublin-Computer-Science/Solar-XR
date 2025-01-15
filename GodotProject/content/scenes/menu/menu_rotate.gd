extends Node3D

var rot_x_readout: float: 
	set(value):
		rot_x_readout = value
		$LblXReadout.text = "%0.2f°" % value

var rot_y_readout: float:
	set(value):
		rot_y_readout = value		
		$LblYReadout.text = "%0.2f°" % value
