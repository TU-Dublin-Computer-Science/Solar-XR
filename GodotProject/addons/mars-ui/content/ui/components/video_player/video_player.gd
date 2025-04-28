extends Node3D

const Video2D = preload("res://addons/mars-ui/content/ui/components/video_player/video_2d.tscn")

@export var video_path: String

func _ready() -> void:
	if FileAccess.file_exists(video_path):
		var video_2d = Video2D.instantiate()
		video_2d.stream = load(video_path)
		$Viewport/Viewport.add_child(video_2d)
	else:
		print("Video player file does not exist.")
