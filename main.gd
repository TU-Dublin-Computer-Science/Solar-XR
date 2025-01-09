extends Node3D

const ORBIT_POINTS = 64.0

var semimajor_axis: float = 1
var eccentricity: float = 0
var inclination: float = 0

var vernal_equinix: Vector3 = Vector3(-1, 0, 0)
var line_of_ascending_node = vernal_equinix

# Called when the node enters the scene tree for the first time.
func _ready() -> void:
	$CanvasLayer/Control/SemimajorSlider.value = semimajor_axis
	$CanvasLayer/Control/SemiamajorValue.text = "%.2f" % semimajor_axis
	
	$CanvasLayer/Control/EccentricitySlider.value = eccentricity
	$CanvasLayer/Control/EccentricityValue.text = "%.2f" % eccentricity
	
	$CanvasLayer/Control/InclinationSlider.value = inclination
	$CanvasLayer/Control/InclinationValue.text = "%.2f" % inclination
	
	
# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta: float) -> void:
	_adjust_inclination()
	_draw_orbit()

func _adjust_inclination():
	var new_transform = %OrbitPlane.transform
	
	new_transform.basis = Basis(line_of_ascending_node, deg_to_rad(inclination))
	
	%OrbitPlane.transform = new_transform

func _draw_orbit():
	# Handling of the semi-major axis and eccentricity parameters
	
	%Orbit.mesh.clear_surfaces()
	%Orbit.mesh.surface_begin(Mesh.PRIMITIVE_LINE_STRIP)
	
	# Calculate the semi-minor axis based on eccentricity
	var semiminor_axis = semimajor_axis * sqrt(1 - eccentricity * eccentricity)
	
	# Calculate focal offset, which ensures central body remains at one focal point of the ellipse
	var focal_offset = semimajor_axis * eccentricity
	
	var first_point: Vector3
	
	for i in range(ORBIT_POINTS):	
		
		var angle = (i / ORBIT_POINTS) * TAU
		var x = cos(angle) *  semimajor_axis + focal_offset
		var z = sin(angle) * semiminor_axis

		var point = Vector3(x, 0, z)
		
		if i == 0: 
			first_point = point
		
		%Orbit.mesh.surface_add_vertex(point)
		
	%Orbit.mesh.surface_add_vertex(first_point)  # Add first point to close loop
	
	%Orbit.mesh.surface_end()



func _on_semimajor_slider_value_changed(value: float) -> void:
	semimajor_axis = value
	$CanvasLayer/Control/SemiamajorValue.text = "%.2f" % value


func _on_eccentricity_slider_value_changed(value: float) -> void:
	eccentricity = value
	$CanvasLayer/Control/EccentricityValue.text = "%.2f" % value


func _on_inclination_slider_value_changed(value: float) -> void:
	inclination = value
	$CanvasLayer/Control/InclinationValue.text = "%.2f" % value
