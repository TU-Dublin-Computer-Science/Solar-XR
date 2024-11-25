extends Node3D

var MarsSystemScn = preload("res://content/main/mars_system.tscn")

func _ready():
	if OS.get_name() != "Android":
		# If running in test mode
		$AudBGM.playing = false 
	
	%XRSetupMenu.start_pressed.connect(_setup_mars_system)


func _setup_mars_system():
	var MarsSystem = MarsSystemScn.instantiate()
	add_child(MarsSystem)


func _process(delta):	
	pass
