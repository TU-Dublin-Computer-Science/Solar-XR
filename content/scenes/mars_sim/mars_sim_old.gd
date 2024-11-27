extends Node3D

"""
Data Parameters obtained from Nasa Planetary factsheets
https://nssdc.gsfc.nasa.gov/planetary/factsheet/marsfact.html
Time values are in seconds
Distance values are in meters
Angle values are in degrees
"""

@onready var InfoNodeManager = %InfoNodeManager

# Mars
"""
Mars has a radius of 0.5 in the model, so a scalar value is calculated,
which is multilied by each "real" value to get the value to be used in the model
"""
const REAL_MARS_RADIUS: float = 337620.0
const MARS_RADIUS_IN_MODEL: float = 0.5
const MODEL_SCALER = MARS_RADIUS_IN_MODEL/REAL_MARS_RADIUS
const MARS_ROT_PERIOD = 88642.44
const MARS_RADIUS = REAL_MARS_RADIUS * MODEL_SCALER
@onready var Mars = $Planet
var _mars_initial_rot: Vector3

# Orbit Visuals
const OrbitMaterial = preload("res://content/assets/materials/orbit_material.tres")
const ORBIT_VISUAL_SIZE = 0.3  # Scale of 0-1
const ORBIT_VISUAL_OPACITY = 0.2 # Scale of 0-1

# Phobos
const PHOBOS_RADIUS: float = 9100.0 * MODEL_SCALER #Using polar radius for now
const PHOBOS_SEMIMAJOR_AXIS = 937800 * MODEL_SCALER
const PHOBOS_ECCENTRICITY = 0.0151
const PHOBOS_ORBIT_PERIOD = 27553.824
const PHOBOS_ROT_PERIOD = 27553.824
const PHOBOS_ORBIT_INCLINATION = 1.08
	# Formula for calculating semi-minor axis: b = a*sqrt(1-e^2)
const PHOBOS_SEMIMINOR_AXIS = PHOBOS_SEMIMAJOR_AXIS * sqrt(1-pow(PHOBOS_ECCENTRICITY, 2))
const PhobosScn = preload("res://content/scenes/satellites/phobos.tscn")
var _phobos
var _phobos_orbit_plane: Node3D
var _phobos_initial_pos: Vector3
var _phobos_initial_rot: Vector3

# Deimos
const DEIMOS_RADIUS: float = 5100.0 * MODEL_SCALER #Using polar radius for now
const DEIMOS_SEMIMAJOR_AXIS = 2345900 * MODEL_SCALER
const DEIMOS_ECCENTRICITY = 0.0005
const DEIMOS_ORBIT_PERIOD = 109074.816
const DEIMOS_ROT_PERIOD = 109074.816
const DEIMOS_ORBIT_INCLINATION = 1.79
	# Formula for calculating semi-minor axis: b = a*sqrt(1-e^2)
const DEIMOS_SEMIMINOR_AXIS = DEIMOS_SEMIMAJOR_AXIS * sqrt(1-pow(DEIMOS_ECCENTRICITY, 2))
const DeimosScn = preload("res://content/scenes/satellites/deimos.tscn")
var _deimos
var _deimos_orbit_plane
var _deimos_initial_pos: Vector3
var _deimos_initial_rot: Vector3 

# Time Keeping
const MAX_TIME_MULT = 6000
const DEFAULT_TIME_MULT = 3000
const MIN_TIME_MULT = 1
var elapsed_real_secs = 0
var elapsed_simulated_secs = 0
var time_multiplier: float: # Externally a value between 0 and 100
	get():
		return remap(_time_multiplier, MIN_TIME_MULT, MAX_TIME_MULT, 0, 100)
	set(value):
		var input = clamp(value, 0, 100)
		_time_multiplier = remap(input, 0, 100, MIN_TIME_MULT, MAX_TIME_MULT)
var _time_multiplier = 3000
var _start_time: float = 0.0

func _ready() -> void:
	_start_time = Time.get_ticks_msec()	
	
	_mars_initial_rot = Mars.rotation
	
	_phobos_orbit_plane = _create_orbit_plane(PHOBOS_ORBIT_INCLINATION)
	
	_phobos = _instantiate_moon(PhobosScn, _phobos_orbit_plane, PHOBOS_RADIUS, PHOBOS_SEMIMAJOR_AXIS)
	_phobos_initial_pos = _phobos.position
	_phobos_initial_rot = _phobos.rotation
	
	_instantiate_orbit_visual(PHOBOS_RADIUS, _phobos_orbit_plane, PHOBOS_SEMIMAJOR_AXIS, PHOBOS_SEMIMINOR_AXIS)
	
	
	_deimos_orbit_plane = _create_orbit_plane(DEIMOS_ORBIT_INCLINATION)
	
	_deimos = _instantiate_moon(DeimosScn, _deimos_orbit_plane, DEIMOS_RADIUS, DEIMOS_SEMIMAJOR_AXIS)
	_deimos_initial_pos = _deimos.position
	_deimos_initial_rot = _deimos.rotation
	
	_instantiate_orbit_visual(DEIMOS_RADIUS, _deimos_orbit_plane, DEIMOS_SEMIMAJOR_AXIS, DEIMOS_SEMIMINOR_AXIS)


func _process(delta: float) -> void:
	_increase_time(delta)
	_animate_sim(delta)


func reset_sim() -> void:
	_time_multiplier = DEFAULT_TIME_MULT
	elapsed_real_secs = 0
	elapsed_simulated_secs = 0
	
	Mars.rotation = _mars_initial_rot
	
	_phobos.position = _phobos_initial_pos
	_phobos.rotation = _phobos_initial_rot
	
	_deimos.position = _deimos_initial_pos
	_deimos_initial_rot = _deimos_initial_rot
	
	%InfoNodeManager.deactivate()


func get_real_time_mult() -> float:
	return _time_multiplier


func _create_orbit_plane(orbit_inclination:float) -> Node3D:
	var orbit_plane = Node3D.new()
	orbit_plane.rotate(Vector3.FORWARD, -deg_to_rad(orbit_inclination))
	add_child(orbit_plane)
	return orbit_plane


func _instantiate_moon(moon_scene:Resource, orbit_plane: Node3D, moon_radius:float, semi_major_axis:float):
	"""Returns an instantiated moon object that is a child under a orbital plane node"""	
	var moon = moon_scene.instantiate()

	orbit_plane.add_child(moon)
	
	moon.position = Vector3(semi_major_axis, 0, 0)	
	moon.scale *= moon_radius/0.5 #Scale is desired_radius/current_radius
		
	return moon


func _instantiate_orbit_visual( planetoid_radius: float, 
								orbit_plane: Node3D, 
								orbit_major_axis: float, 
								orbit_minor_axis: float):
	var mesh_instance = MeshInstance3D.new()
	var torus_mesh = TorusMesh.new()
	
	var scale_factor = remap(ORBIT_VISUAL_SIZE, 0, 1, 10, 1)
	
	torus_mesh.inner_radius = orbit_major_axis - planetoid_radius/scale_factor
	torus_mesh.outer_radius = orbit_major_axis + planetoid_radius/scale_factor
	
	mesh_instance.mesh = torus_mesh
	mesh_instance.scale.z = orbit_minor_axis/orbit_major_axis 
	
	var orbit_material = OrbitMaterial.duplicate()
	var color = orbit_material.albedo_color
	color.a = ORBIT_VISUAL_OPACITY
	orbit_material.albedo_color = color
	mesh_instance.material_override = orbit_material
	
	orbit_plane.add_child(mesh_instance)


func _animate_sim(delta:float):
	_rotate_planetoid(Mars, MARS_ROT_PERIOD, delta)
	_rotate_planetoid(_phobos, PHOBOS_ROT_PERIOD, delta)
	_rotate_planetoid(_deimos, DEIMOS_ROT_PERIOD, delta)
	
	_move_in_orbit(_phobos, PHOBOS_ORBIT_PERIOD, PHOBOS_SEMIMAJOR_AXIS, 
				PHOBOS_SEMIMINOR_AXIS, delta)
	
	_move_in_orbit(_deimos, DEIMOS_ORBIT_PERIOD, DEIMOS_SEMIMAJOR_AXIS,
				DEIMOS_SEMIMINOR_AXIS, delta)


func _rotate_planetoid(planetoid:Node3D, rot_period:float, delta:float):
	var angle_to_rotate = ((2*PI)/ rot_period) * delta * _time_multiplier	
	planetoid.rotate_y(angle_to_rotate)


func _move_in_orbit(planetoid:Node3D, orbit_period:float,  
				 orbit_major_axis:float, orbit_minor_axis, delta:float):
	var rotation_angle = ((2*PI)/orbit_period) * _time_multiplier * delta
	
	#This is the angle the planet has moved around so far in relation to the x axis (parametric angle)
	var angle_so_far = atan2(planetoid.position.z/orbit_minor_axis, planetoid.position.x/orbit_major_axis)	
	
	planetoid.position.x = cos(angle_so_far - rotation_angle) * orbit_major_axis
	planetoid.position.z = sin(angle_so_far - rotation_angle) * orbit_minor_axis


func _increase_time(delta:float):
	elapsed_real_secs += 1 * delta
	elapsed_simulated_secs += 1 * _time_multiplier * delta	
