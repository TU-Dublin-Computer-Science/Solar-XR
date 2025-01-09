extends MeshInstance3D


# Called when the node enters the scene tree for the first time.
func _ready() -> void:
	mesh.surface_begin(Mesh.PRIMITIVE_LINES)
	
	mesh.surface_add_vertex(Vector3(0,0,0))
	
	mesh.surface_add_vertex(Vector3(0,1,0))
	
	mesh.surface_end()
	


# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta: float) -> void:
	pass
