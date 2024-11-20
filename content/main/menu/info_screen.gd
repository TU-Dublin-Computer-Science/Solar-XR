extends StaticBody3D

var title: String = "":
	set(value):
		title = value
		%LblTitle.text = value

var description: String = "":
	set(value):
		description = value
		%LblDesc.text = value

# Called when the node enters the scene tree for the first time.
func _ready() -> void:
	pass # Replace with function body.


# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta: float) -> void:
	pass
