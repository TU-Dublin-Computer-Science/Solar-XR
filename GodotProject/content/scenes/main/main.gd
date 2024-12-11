extends Node3D

var SystemRootScn = preload("res://content/scenes/system_root/system_root.tscn")

func _ready():
	%XRSetupMenu.start_pressed.connect(_setup)


func _setup():
	var SystemRoot = SystemRootScn.instantiate()
	SystemRoot.camera = $XROrigin3D/XRCamera3D
	add_child(SystemRoot)
	%AudBGM.playing = true
	
	
func _process(delta):	
	pass
