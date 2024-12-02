extends Node3D

var sim_speed_readout: float
var sim_time_readout: int
var real_time_readout: int


# Called when the node enters the scene tree for the first time.
func _ready() -> void:
	pass # Replace with function body.


# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(_delta: float) -> void:
	var sim_secs = sim_time_readout % 60
	var sim_mins = int(sim_time_readout / 60) % 60 
	var sim_hours = (sim_time_readout / 60 / 60) % 24
	var sim_days = (sim_time_readout / 60 / 60 / 24)
	var real_secs = real_time_readout % 60
	var real_mins = (real_time_readout / 60) % 60
	var real_hours = (real_time_readout / 60 / 60) % 24
	var real_days = (real_time_readout / 60 / 60 / 24)
	
	%LblSimSpeedValue.text = "%.0fx" % sim_speed_readout
	%LblSimTimeValue.text = "Day %d - %02d:%02d:%02d" % [sim_days, sim_hours, sim_mins, sim_secs]
	%LblRealTimeValue.text = "Day %d - %02d:%02d:%02d" % [real_days, real_hours, real_mins, real_secs]
