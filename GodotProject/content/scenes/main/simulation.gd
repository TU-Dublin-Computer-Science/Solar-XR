extends Node3D

signal sim_time_changed
signal sim_time_paused_changed
signal sim_time_live_changed
signal sim_time_scalar_changed

@onready var Camera: XRCamera3D = %XRCamera3D

const DEFAULT_TIME_SCALAR = 1

var sun_data = Utils.load_json_file("res://content/data/bodies/sun.json")
var model_scalar

var sim_time_scalar: float = DEFAULT_TIME_SCALAR:
	set(value):
		sim_time_scalar = value
		sim_time_scalar_changed.emit(value)

		if sim_time_paused:
			sim_time_paused = false

var sim_time_paused: bool:
	set(value):
		sim_time_paused = value
		sim_time_paused_changed.emit(sim_time_paused)

		if sim_time_paused:
			sim_time_live = false

var sim_time_live: bool:
	set(value):
		sim_time_live = value
		sim_time_live_changed.emit(sim_time_live)

var _sim_time: float:
	set(value):
		_sim_time = value
		sim_time_changed.emit(_sim_time)
		%CentralBody.time = value
		
		var sys_time = Time.get_unix_time_from_system()
		
		#When sim time is out of sync it's not live
		if abs(int(_sim_time) - int(sys_time)) > 5:
			sim_time_live = false


func _ready():
	var sun_data = Utils.load_json_file("res://content/data/bodies/sun.json")
	model_scalar = 0.5 / sun_data["radius"]
	#_focused_body = %CentralBody
	
	%CentralBody.init(sun_data, Camera, model_scalar, _sim_time)


func _process(delta: float) -> void:
	if not sim_time_paused:
		_sim_time += delta * sim_time_scalar
		

func setup():
	%CentralBody.satellites_visible = true
	%CentralBody.satellite_bodies_will_scale = true
	%CentralBody.visible = true

func reset_state():
	init_time()
	
func init_time():
	_sim_time = Time.get_unix_time_from_system()
	sim_time_scalar = DEFAULT_TIME_SCALAR
	sim_time_paused = false
	sim_time_live = true
