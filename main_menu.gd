extends Control

signal btn_move_pressed
signal btn_rotate_pressed
signal btn_scale_pressed
signal btn_time_pressed
signal btn_reset_pressed
signal slider_1_changed
signal slider_2_changed

@onready var Slider1 = $ColorRect/MarginContainer/VBoxContainer/Slider1
@onready var Slider2 = $ColorRect/MarginContainer/VBoxContainer/Slider2

# Called when the node enters the scene tree for the first time.
func _ready() -> void:
	pass # Replace with function body.


# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta: float) -> void:
	pass


func _on_btn_move_pressed() -> void:
	emit_signal("btn_move_pressed")


func _on_btn_rotate_pressed() -> void:
	emit_signal("btn_rotate_pressed")


func _on_btn_scale_pressed() -> void:
	emit_signal("btn_scale_pressed")


func _on_btn_time_pressed() -> void:
	emit_signal("btn_time_pressed")


func _on_btn_reset_pressed() -> void:
	emit_signal("btn_reset_pressed")
	

func _on_slider_1_value_changed(value: float) -> void:
	emit_signal("slider_1_changed")


func _on_slider_2_value_changed(value: float) -> void:
	emit_signal("slider_2_changed")
