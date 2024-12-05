extends Node3D

signal close_btn_pressed

const DisplayScreenScn = preload("res://addons/mars-ui/content/ui/components/info_nodes/display_screen/display_screen.tscn")

@export var info_nodes: Array[Node3D]: 
	set(value):
		info_nodes = value
		_connect_info_node_signals()

var DisplayScreen: Node3D

var _active_info_node: InfoNode = null

# Called when the node enters the scene tree for the first time.
func _ready() -> void:
	DisplayScreen = DisplayScreenScn.instantiate()
	
	DisplayScreen.close_btn_pressed.connect(deactivate)
	
	_connect_info_node_signals()


func _connect_info_node_signals():
	for info_node in info_nodes:
		info_node.on_button_down.connect(_update_info_node.bind(info_node))
		info_node.on_button_up.connect(deactivate)


func _update_info_node(info_node: InfoNode):
	if _active_info_node == null: # If no currently selected info node
		_active_info_node = info_node
		_create_screen(_active_info_node.title, _active_info_node.description, _active_info_node.image)
	else: # If there exists a currently selected node
		_active_info_node.active = false
		_active_info_node = info_node
		_update_screen(_active_info_node.title, _active_info_node.description, _active_info_node.image)


func deactivate():
	# Deactivates current info node and destroys screen
	if _active_info_node != null:
		_active_info_node.active = false
		_active_info_node = null
		_destroy_screen()


func _create_screen(title: String, description: String, image: CompressedTexture2D) -> void:
	DisplayScreen.title = title
	DisplayScreen.description = description
	DisplayScreen.image = image
	
	%DisplayScreenOrigin.add_child(DisplayScreen)
	%SoundMenuOpen.play()
	%AnimationPlayer.play("menu_appear")


func _update_screen(title: String, description: String, image: CompressedTexture2D) -> void:
	DisplayScreen.title = title
	DisplayScreen.description = description
	DisplayScreen.image = image


func _destroy_screen() -> void:
	%SoundMenuClose.play()
	%AnimationPlayer.play("menu_disappear")


func _on_animation_player_animation_finished(anim_name: StringName) -> void:
	if anim_name == "menu_disappear":
		%DisplayScreenOrigin.remove_child(DisplayScreen)
