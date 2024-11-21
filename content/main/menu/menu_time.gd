extends Node3D

var simulation_speed: float
var simulation_time: int
var real_time: int


# Called when the node enters the scene tree for the first time.
func _ready() -> void:
	pass # Replace with function body.


# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(_delta: float) -> void:
	var sim_secs = simulation_time % 60
	var sim_mins = int(simulation_time / 60) % 60 
	var sim_hours = (simulation_time / 60 / 60) % 24
	var sim_days = (simulation_time / 60 / 60 / 24)
	var real_secs = real_time % 60
	var real_mins = (real_time / 60) % 60
	var real_hours = (real_time / 60 / 60) % 24
	var real_days = (real_time / 60 / 60 / 24)
	
	%LblSimSpeedValue.text = "%.0fx" % simulation_speed
	%LblSimTimeValue.text = "Day %d - %02d:%02d:%02d" % [sim_days, sim_hours, sim_mins, sim_secs]
	%LblRealTimeValue.text = "Day %d - %02d:%02d:%02d" % [real_days, real_hours, real_mins, real_secs]
