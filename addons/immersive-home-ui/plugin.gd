@tool
extends EditorPlugin


func _enter_tree() -> void:
	# Initialization of the plugin goes here.
	add_autoload_singleton(
			"TouchManager", 
			"res://addons/immersive-home-ui/lib/utils/touch/touch.gd")
	
	add_autoload_singleton(
			"EventSystem", 
			"res://addons/immersive-home-ui/lib/globals/event_system.gd")


func _exit_tree() -> void:
	# Clean-up of the plugin goes here.
	remove_autoload_singleton("TouchManager")
	remove_autoload_singleton("EventSystem")
	
