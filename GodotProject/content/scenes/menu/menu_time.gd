extends Node3D

signal btn_pause_pressed
signal btn_play_pressed

const BtnScn = preload("res://addons/mars-ui/content/ui/components/button/button.tscn")

var BtnPause: Button3D
var BtnPlay: Button3D

var sim_time_readout: int: 
	set(value):
		sim_time_readout = value
	
		var time_dict = Time.get_datetime_dict_from_unix_time(value)
		
		var system_time = Time.get_datetime_dict_from_system()
		if system_time.dst:
			time_dict.hour += 1

		var suffix = "th"
		if time_dict.day not in [11, 12, 13]: #Exceptions
			match time_dict.day % 10:
				1: suffix = "st"
				2: suffix = "nd"
				3: suffix = "rd"

		var months := [
			"January", "February", "March", "April", "May", "June",
			"July", "August", "September", "October", "November", "December"
		]
		
		var month_name = months[time_dict.month - 1]  # Month is 1-based
		
		$LblDateTime.text = "%02d:%02d:%02d - %d%s %s %d" % [	time_dict.hour,
																time_dict.minute,
																time_dict.second,
																time_dict.day, 
																suffix,
																month_name,
																time_dict.year,
															]

var time_scalar_readout: float: 
	set(value):
		time_scalar_readout = value
		
		if abs(time_scalar_readout) > 3600:
			var hours_per_sec = time_scalar_readout / 3600
			$LblScalar.text = "%d hrs/s" % hours_per_sec
		elif time_scalar_readout == 1:
			$LblScalar.text = "1 sec/s"
		else:
			var mins_per_sec = time_scalar_readout / 60
			$LblScalar.text = "%d mins/s" % mins_per_sec

var time_scalar_enum: Mappings.TimeScalar:
	set(value):
		time_scalar_enum = value
		match(time_scalar_enum):
			Mappings.TimeScalar.BACKWARD2:
				$BtnTglScalar.set_active($BtnTglScalar/BtnBackward2)
			Mappings.TimeScalar.BACKWARD1:
				$BtnTglScalar.set_active($BtnTglScalar/BtnBackward1)
			Mappings.TimeScalar.REAL:
				$BtnTglScalar.clear_active_btn()
			Mappings.TimeScalar.ZERO:
				$BtnTglScalar.clear_active_btn()
			Mappings.TimeScalar.FORWARD1:
				$BtnTglScalar.set_active($BtnTglScalar/BtnForward1)
			Mappings.TimeScalar.FORWARD2:
				$BtnTglScalar.set_active($BtnTglScalar/BtnForward2)

var sim_time_paused_readout: bool:
	set(value):
		if sim_time_paused_readout != value:
			if value:
				remove_child(BtnPause)
				add_child(BtnPlay)
				$LblScalar.text = "PAUSED"
			else:
				remove_child(BtnPlay)
				add_child(BtnPause)
			
			sim_time_paused_readout = value

var time_live_readout: bool:
	set(value):
		time_live_readout = value
		$BtnLive.disabled = value
		$BtnLive.active = value

func _ready() -> void:
	BtnPause = BtnScn.instantiate()
	BtnPause.position = Vector3(0, 0, 0)
	BtnPause.scale = Vector3(1.5, 1.5, 1.5)
	BtnPause.label = "||"
	BtnPause.on_button_up.connect(func(): btn_pause_pressed.emit())
	
	BtnPlay = BtnScn.instantiate()
	BtnPlay.position = Vector3(0, 0, 0)
	BtnPlay.scale = Vector3(1.5, 1.5, 1.5)
	BtnPlay.label = "▸"
	BtnPlay.font_size = 20
	BtnPlay.on_button_up.connect(func(): btn_play_pressed.emit())
	
	add_child(BtnPause)
