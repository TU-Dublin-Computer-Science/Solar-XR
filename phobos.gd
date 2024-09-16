extends StaticBody3D


# Called when the node enters the scene tree for the first time.
func _ready() -> void:
	pass # Replace with function body.


# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta: float) -> void:
	pass

func setSize(radius):
	var mesh = $Mesh.mesh as SphereMesh	
	mesh.radius = radius
	mesh.height = radius * 2
	
	var shape = $CollisionShape.shape as SphereShape3D
	shape.radius = radius
