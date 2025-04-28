extends Node3D

var sim_time_readout: int: 
	set(value):
		sim_time_readout = value
		var time_dict = Time.get_datetime_dict_from_unix_time(value)
		
		$LblDateTime.text = "%04d-%02d-%02d %02d:%02d:%02d" % [	time_dict.year, 
																time_dict.month, 
																time_dict.day,
																time_dict.hour,
																time_dict.minute,
																time_dict.second]
		
var sim_time_scalar_readout: float: 
	set(value):
		sim_time_scalar_readout = value
		$LblScalar.text = "%dx" % value
