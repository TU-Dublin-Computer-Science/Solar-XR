extends Node3D

const ORBIT_POINTS = 64.0

var semimajor_axis: float = 1
var eccentricity: float = 0
var inclination: float = 0
var lon_ascending_node: float = 0
var arg_periapsis: float = 0
var true_anomaly: float = 0

var polar_axis = Vector3(0,1,0)
var vernal_equinix: Vector3 = Vector3(-1, 0, 0)
#var line_of_ascending_node = vernal_equinix

# Called when the node enters the scene tree for the first time.
func _ready() -> void:
	$CanvasLayer/Control/SemimajorSlider.value = semimajor_axis
	$CanvasLayer/Control/SemiamajorValue.text = "%.2f" % semimajor_axis
	
	$CanvasLayer/Control/EccentricitySlider.value = eccentricity
	$CanvasLayer/Control/EccentricityValue.text = "%.2f" % eccentricity
	
	$CanvasLayer/Control/InclinationSlider.value = inclination
	$CanvasLayer/Control/InclinationValue.text = "%.2f" % inclination
	
	$CanvasLayer/Control/LonAscendingSlider.value = lon_ascending_node
	$CanvasLayer/Control/LonAscendingValue.text = "%.2f" % lon_ascending_node
	
	$CanvasLayer/Control/ArgPeriapsisSlider.value = arg_periapsis
	$CanvasLayer/Control/ArgPeriapsisValue.text = "%.2f" % arg_periapsis
	
	$CanvasLayer/Control/TrueAnomalySlider.value = true_anomaly
	$CanvasLayer/Control/TrueAnomalyValue.text = "%.2f" % true_anomaly
	
	



# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta: float) -> void:
	#pass
	_reset()
	_create_orbit()

func _reset():	
	%Orbit.mesh.clear_surfaces()	
	%OrbitPlane.transform.basis = Basis()

func _create_orbit():
	_set_orbital_plane()
	_draw_orbit()

func _set_orbital_plane():
	#%OrbitPlane.transform.basis = Basis() # Reset rotation
	
	# Rotate object around the global y axis (The Polar Axis)
	%OrbitPlane.rotate(Vector3(0,1,0), deg_to_rad(lon_ascending_node))
	
	# Rotate object around the new local x axis (Line of Ascending Node)
	%OrbitPlane.rotate_object_local(Vector3(1, 0, 0), deg_to_rad(inclination))
	
	"""
	var transform = Transform3D()
	DebugDraw3D.draw_gizmo(transform)
	var rotation_longitude = Basis(Vector3(0,1,0), deg_to_rad(lon_ascending_node))
	transform.basis = rotation_longitude * transform.basis	
	
	
	var rotation_inclindation = Basis(Vector3(1, 0, 0), deg_to_rad(inclination))
	transform.basis = rotation_inclindation * transform.basis
	
	
	
	%OrbitPlane.transform.basis = transform.basis
	"""


"""
func _adjust_ascending_node():
	var new_transform = %OrbitPlane.transform
	
	new_transform.basis = Basis(polar_axis, deg_to_rad(lon_ascending_node))
	
	%OrbitPlane.transform = new_transform 

func _adjust_inclination():
	var new_transform = %OrbitPlane.transform
	
	var line_of_ascending_node = (vernal_equinix * new_transform.basis).normalized()
	
	# Create a rotation basis to apply the inclination angle
	var rotation_basis = Basis(line_of_ascending_node, deg_to_rad(inclination))
	
	# Apply the rotation to the orbit plane's current transform
	new_transform.basis = rotation_basis * new_transform.basis
	
	%OrbitPlane.transform = new_transform
"""



func _draw_orbit():
	# Handling of the semi-major axis and eccentricity parameters
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

func _on_button_button_up() -> void:
	_create_orbit()


func _on_semimajor_slider_value_changed(value: float) -> void:
	semimajor_axis = value
	$CanvasLayer/Control/SemiamajorValue.text = "%.2f" % value


func _on_eccentricity_slider_value_changed(value: float) -> void:
	eccentricity = value
	$CanvasLayer/Control/EccentricityValue.text = "%.2f" % value


func _on_inclination_slider_value_changed(value: float) -> void:
	inclination = value
	$CanvasLayer/Control/InclinationValue.text = "%.2f" % value


func _on_lon_ascending_slider_value_changed(value: float) -> void:
	lon_ascending_node = value
	$CanvasLayer/Control/LonAscendingValue.text = "%.2f" % value


func _on_arg_periapsis_slider_value_changed(value: float) -> void:
	arg_periapsis = value
	$CanvasLayer/Control/ArgPeriapsisValue.text = "%.2f" % value


func _on_true_anomaly_slider_value_changed(value: float) -> void:
	true_anomaly = value
	$CanvasLayer/Control/TrueAnomalyValue.text = "%.2f" % value
