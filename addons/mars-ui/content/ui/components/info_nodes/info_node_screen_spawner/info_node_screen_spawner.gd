extends Node3D

signal close_btn_pressed

const InfoNodeScreenScn = preload("res://addons/mars-ui/content/ui/components/info_nodes/info_node_screen/info_node_screen.tscn")

var InfoNodeScreen: Node3D

var destroying: bool = false

# Called when the node enters the scene tree for the first time.
func _ready() -> void:
	InfoNodeScreen = InfoNodeScreenScn.instantiate()
	
	InfoNodeScreen.close_btn_pressed.connect(func():
		close_btn_pressed.emit()	
	)


func create(title: String, description: String, image: CompressedTexture2D) -> void:
	InfoNodeScreen.title = title
	InfoNodeScreen.description = description
	InfoNodeScreen.image = image
	
	%InfoNodeScreenOrigin.add_child(InfoNodeScreen)
	%SoundMenuOpen.play()
	%AnimationPlayer.play("menu_appear")


func update(title: String, description: String, image: CompressedTexture2D) -> void:
	InfoNodeScreen.title = title
	InfoNodeScreen.description = description
	InfoNodeScreen.image = image


func destroy() -> void:
	%SoundMenuClose.play()
	%AnimationPlayer.play("menu_disappear")


func _on_animation_player_animation_finished(anim_name: StringName) -> void:
	if anim_name == "menu_disappear":
		%InfoNodeScreenOrigin.remove_child(InfoNodeScreen)
