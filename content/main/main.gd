extends Node3D

var MarsSystemScn = preload("res://content/main/mars_system.tscn")

func _ready():
	%XRSetupMenu.start_pressed.connect(_init)


func _init():
	var MarsSystem = MarsSystemScn.instantiate()
	add_child(MarsSystem)
	$AudBGM.playing = true


func _process(delta):	
	pass
