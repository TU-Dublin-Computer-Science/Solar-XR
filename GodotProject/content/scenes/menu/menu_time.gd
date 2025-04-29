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
		
var sim_time_scalar: float: 
	set(value):
		sim_time_scalar = value
		
		if sim_time_scalar > 3600:
			var hours_per_sec = sim_time_scalar / 3600
			$LblScalar.text = "%d hrs/s" % hours_per_sec
		elif sim_time_scalar == 1:
			$LblScalar.text = "Live"
		else:
			var mins_per_sec = sim_time_scalar / 60
			$LblScalar.text = "%d mins/s" % mins_per_sec
		
		

var time_scalar: Mappings.TimeScalar:
	set(value):
		time_scalar = value
		match(time_scalar):
			Mappings.TimeScalar.LIVE:
				$BtnTglScalar.set_active($BtnTglScalar/BtnLive)
			Mappings.TimeScalar.FAST:
				$BtnTglScalar.set_active($BtnTglScalar/BtnFast)
			Mappings.TimeScalar.FASTER:
				$BtnTglScalar.set_active($BtnTglScalar/BtnFaster)
