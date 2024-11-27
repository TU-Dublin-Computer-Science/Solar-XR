extends StaticBody3D

signal close_btn_pressed

var title: String = "":
	set(value):
		title = value
		%LblTitle.text = value


var description: String = "":
	set(value):
		description = value
		%LblDesc.text = value


var image: CompressedTexture2D = null:
	set(value):
		image = value
		%SprtImage.texture = value


func _ready() -> void:
	%BtnClose.on_button_up.connect(func():
		close_btn_pressed.emit()
	)

	
