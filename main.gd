extends Node3D

const ORBIT_SEGMENTS = 64.0

var semimajor_axis = 1


# Called when the node enters the scene tree for the first time.
func _ready() -> void:
	$CanvasLayer/Control/SemiamajorValue.text = "%.2f" % $CanvasLayer/Control/SemimajorSlider.value
	


# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta: float) -> void:
	_draw_orbit()
	

func _draw_orbit():
	%Orbit.mesh.clear_surfaces()
	%Orbit.mesh.surface_begin(Mesh.PRIMITIVE_LINES)
	
	for i in range(ORBIT_SEGMENTS):
		
		var angle1 = (i / 64.0) * TAU
		var angle2 = ((i + 1) / 64.0) * TAU

		var point1 = Vector3(sin(angle1) * semimajor_axis, 0, cos(angle1) * semimajor_axis)
		var point2 = Vector3(sin(angle2) * semimajor_axis, 0, cos(angle2) * semimajor_axis)
				
		# Add vertices to the mesh
		%Orbit.mesh.surface_add_vertex(point1)
		%Orbit.mesh.surface_add_vertex(point2)
	
	%Orbit.mesh.surface_end()


func _on_semimajor_slider_value_changed(value: float) -> void:
	semimajor_axis = value
	$CanvasLayer/Control/SemiamajorValue.text = "%.2f" % value
