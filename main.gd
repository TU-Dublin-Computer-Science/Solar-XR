extends Node3D

const ORBIT_POINTS = 64.0

var semimajor_axis: float = 1
var eccentricity: float = 0
var inclination: float = 0
var lon_ascending_node: float = 0
var arg_periapsis: float = 0
var true_anomaly: float = 0

var object_instance: MeshInstance3D

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
	_reset()
	_create_orbit()


func _reset():	
	%Orbit.mesh.clear_surfaces()	
	%OrbitPlane.transform.basis = Basis()
	%OrbitPlane.remove_child(object_instance)

func _create_orbit():
	_orient_orbital_plane()
	_draw_orbit()
	_draw_obejct()
	

func _orient_orbital_plane():
	# Rotate orbital plane around the equatorial plane y axis (The Polar Axis)
	%OrbitPlane.rotate(Vector3(0,1,0), deg_to_rad(lon_ascending_node))
	
	# Rotate orbital plane around the orbital plane x-axis (Line of Ascending Node)
	%OrbitPlane.rotate_object_local(Vector3(1, 0, 0), deg_to_rad(inclination))
	
	# Rotate orbital plane around the orbital plane y-axis
	%OrbitPlane.rotate_object_local(Vector3(0, 1, 0), deg_to_rad(arg_periapsis))


func _draw_orbit():
	# Handling of the semi-major axis and eccentricity parameters
	%Orbit.mesh.surface_begin(Mesh.PRIMITIVE_LINE_STRIP)
	
	var first_point: Vector3
	
	for i in range(ORBIT_POINTS):	
		
		var angle = (i / ORBIT_POINTS) * TAU
		
		%Orbit.mesh.surface_add_vertex(get_orbit_point(angle))

	%Orbit.mesh.surface_add_vertex(get_orbit_point(0))  # Add first point to close loop
	
	%Orbit.mesh.surface_end()


func get_orbit_point(angle: float):
	# Note: Precalulate these two values if performance becomes issue
	# Calculate the semi-minor axis based on eccentricity
	var semiminor_axis = semimajor_axis * sqrt(1 - eccentricity * eccentricity)
	
	# Calculate focal offset, which ensures central body remains at one focal point of the ellipse
	var focal_offset = semimajor_axis * eccentricity
	
	var x = cos(angle) *  semimajor_axis + focal_offset
	var z = sin(angle) * semiminor_axis

	return Vector3(x, 0, z)


func _draw_obejct():
	# Create new spherical mesh instance
	object_instance = MeshInstance3D.new()	
	var object_mesh = SphereMesh.new()
	object_mesh.radius = 0.1
	object_mesh.height = 0.2
	object_instance.mesh = object_mesh
	
	object_instance.position = get_orbit_point(deg_to_rad(true_anomaly))
	
	%OrbitPlane.add_child(object_instance)


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
