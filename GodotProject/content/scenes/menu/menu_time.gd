extends Node3D

signal btn_pause_pressed
signal btn_play_pressed

const BtnScn = preload("res://addons/mars-ui/content/ui/components/button/button.tscn")

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

var sim_time_paused_readout: bool:
	set(value):
		if sim_time_paused_readout != value:
			if value:
				remove_child(BtnPause)
				add_child(BtnPlay)
			else:
				remove_child(BtnPlay)
				add_child(BtnPause)
		
			sim_time_paused_readout = value

var time_live_readout: bool:
	set(value):
		time_live_readout = value
		$BtnLive.disabled = value
		$BtnLive.active = value

var BtnPause: Button3D
var BtnPlay: Button3D

# Called when the node enters the scene tree for the first time.
func _ready() -> void:
	BtnPause = BtnScn.instantiate()
	BtnPause.position = Vector3(0.001, -0.015, 0)
	BtnPause.scale = Vector3(1.5, 1.5, 1.5)
	BtnPause.label = "||"
	BtnPause.on_button_up.connect(func(): btn_pause_pressed.emit())
	
	BtnPlay = BtnScn.instantiate()
	BtnPlay.position = Vector3(0.001, -0.015, 0)
	BtnPlay.scale = Vector3(1.5, 1.5, 1.5)
	BtnPlay.label = "▸"
	BtnPlay.font_size = 20
	BtnPlay.on_button_up.connect(func(): btn_play_pressed.emit())
	
	add_child(BtnPause)


# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(_delta: float) -> void:
	pass
	
	
