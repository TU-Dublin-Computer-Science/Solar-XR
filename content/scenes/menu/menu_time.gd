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


# Called when the node enters the scene tree for the first time.
func _ready() -> void:
	pass # Replace with function body.


# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(_delta: float) -> void:
	var time_dict = Time.get_datetime_dict_from_system
	
	
