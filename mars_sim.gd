extends Node3D

"""
Data Parameters obtained from Nasa Planetary factsheets
https://nssdc.gsfc.nasa.gov/planetary/factsheet/marsfact.html
Time values are in seconds
Distance values are in meters
Angle values are in degrees
"""

# Mars
"""
Mars has a radius of 0.5 in the model, so a scalar value is calculated,
which is multilied by each "real" value to get the value to be used in the model
"""
const REAL_MARS_RADIUS:float = 337620.0
const MARS_RADIUS_IN_MODEL:float = 0.5
const MODEL_SCALER = MARS_RADIUS_IN_MODEL/REAL_MARS_RADIUS
const MARS_ROT_PERIOD = 88642.44
const MARS_RADIUS = REAL_MARS_RADIUS * MODEL_SCALER

# Phobos
const PHOBOS_RADIUS:float = 9100.0 * MODEL_SCALER #Using polar radius for now
const PHOBOS_SEMIMAJOR_AXIS = 937800 * MODEL_SCALER
const PHOBOS_ECCENTRICITY = 0.0151
const PHOBOS_ORBIT_PERIOD = 27553.824
const PHOBOS_ROT_PERIOD = 27553.824
const PHOBOS_ORBIT_INCLINATION = 1.08
	# Formula for calculating semi-minor axis: b = a*sqrt(1-e^2)
const PHOBOS_SEMIMINOR_AXIS = PHOBOS_SEMIMAJOR_AXIS * sqrt(1-pow(PHOBOS_ECCENTRICITY, 2))
const PhobosScn = preload("res://phobos.tscn")
var _phobos
var _phobos_orbit_angle = 0.0
var _phobos_orbit_array:PackedVector3Array #Used for drawing orbit path for debugging
var _phobos_trail = []

# Deimos
const DEIMOS_RADIUS:float = 5100.0 * MODEL_SCALER #Using polar radius for now
const DEIMOS_SEMIMAJOR_AXIS = 2345900 * MODEL_SCALER
const DEIMOS_ECCENTRICITY = 0.0005
const DEIMOS_ORBIT_PERIOD = 109074.816
const DEIMOS_ROT_PERIOD = 109074.816
const DEIMOS_ORBIT_INCLINATION = 1.79
	# Formula for calculating semi-minor axis: b = a*sqrt(1-e^2)
const DEIMOS_SEMIMINOR_AXIS = DEIMOS_SEMIMAJOR_AXIS * sqrt(1-pow(DEIMOS_ECCENTRICITY, 2))
const DeimosScn = preload("res://deimos.tscn")
var _deimos
var _deimos_orbit_angle = 0.0
var _deimos_orbit_plane
var _deimos_orbit_array:PackedVector3Array #Used for drawing orbit path for debugging
var _deimos_trail = []

# Time Keeping
const MAX_TIME_MULT = 6000
const MIN_TIME_MULT = 1
var elapsed_real_secs = 0
var elapsed_simulated_secs = 0
var time_multiplier: float: # Externally a value between 0 and 100
	get():
		return remap(_time_multiplier, MIN_TIME_MULT, MAX_TIME_MULT, 0, 100)
	set(value):
		var input = clamp(value, 0, 100)
		_time_multiplier = remap(input, 0, 100, MIN_TIME_MULT, MAX_TIME_MULT)
var _time_multiplier = 1
var _start_time:float = 0.0

# Trails
const TrailObjectScn = preload("res://trail_object.tscn")
const TRAIL_LEN = 5

@export var debug_mode : bool = false:
	set(state):
		debug_mode = state
		_toggle_debug_surfaces(state)		

@onready var Mars = $Planet

func _ready() -> void:
	_start_time = Time.get_ticks_msec()	
	_phobos = _instantiate_moon(PhobosScn, PHOBOS_RADIUS, PHOBOS_ORBIT_INCLINATION, PHOBOS_SEMIMAJOR_AXIS)
	_deimos = _instantiate_moon(DeimosScn, DEIMOS_RADIUS, DEIMOS_ORBIT_INCLINATION, DEIMOS_SEMIMAJOR_AXIS)
	
	
func _process(delta: float) -> void:
	_increase_time(delta)
	_animate_sim(delta)
	if debug_mode: _draw_debug_gizmos(delta)


func get_real_time_mult() -> float:
	return _time_multiplier
	

func toggle_debug_mode():
	debug_mode = !debug_mode


func _instantiate_moon(moon_scene:Resource, moon_radius:float, orbit_inclination:float, semi_major_axis:float):
	"""Returns an instantiated moon object that is a child under a orbital plane node"""
	
	var orbit_plane = Node3D.new()
	orbit_plane.rotate(Vector3.FORWARD, -deg_to_rad(orbit_inclination))
	add_child(orbit_plane)
	
	var moon = moon_scene.instantiate()
	orbit_plane.add_child(moon)
	
	moon.position = Vector3(semi_major_axis, 0, 0)	
	moon.scale *= moon_radius/0.5 #Scale is desired_radius/current_radius
	
	return moon


func _animate_sim(delta:float):
	_rotate_planetoid(Mars, MARS_ROT_PERIOD, delta)
	_rotate_planetoid(_phobos, PHOBOS_ROT_PERIOD, delta)
	_rotate_planetoid(_deimos, DEIMOS_ROT_PERIOD, delta)
	
	_move_in_orbit(_phobos, _phobos_orbit_angle, PHOBOS_ORBIT_PERIOD, PHOBOS_SEMIMAJOR_AXIS, 
				PHOBOS_SEMIMINOR_AXIS, delta, _phobos_orbit_array)
	
	_move_in_orbit(_deimos, _deimos_orbit_angle, DEIMOS_ORBIT_PERIOD, DEIMOS_SEMIMAJOR_AXIS,
				DEIMOS_SEMIMINOR_AXIS, delta, _deimos_orbit_array)


func _rotate_planetoid(planetoid:Node3D, rot_period:float, delta:float):
	var angle_to_rotate = ((2*PI)/ rot_period) * delta * _time_multiplier	
	planetoid.rotate_y(angle_to_rotate)


func _move_in_orbit(planetoid:Node3D, current_orbit_angle:float, orbit_period:float,  
				 orbit_major_axis:float, orbit_minor_axis, delta:float, debug_pos_array:PackedVector3Array):
	var rotation_angle = ((2*PI)/orbit_period) * _time_multiplier * delta
	
	#This is the angle the planet has moved around so far in relation to the x axis (parametric angle)
	var angle_so_far = atan2(planetoid.position.z/orbit_minor_axis, planetoid.position.x/orbit_major_axis)	
	
	planetoid.position.x = cos(angle_so_far - rotation_angle) * orbit_major_axis
	planetoid.position.z = sin(angle_so_far - rotation_angle) * orbit_minor_axis

	debug_pos_array.append(planetoid.global_position)


func _increase_time(delta:float):
	elapsed_real_secs += 1 * delta
	elapsed_simulated_secs += 1 * _time_multiplier * delta	


func _toggle_debug_surfaces(state:bool):	
	$RotationDebugPlaneSystem.visible = state
	$Planet/RotationDebugPlanePlanet.visible = state


func _draw_debug_gizmos(delta:float):
	_draw_debug_orbit(_phobos_orbit_array, Color.GREEN, delta)
	_draw_debug_orbit(_deimos_orbit_array, Color.RED, delta)


func _draw_debug_orbit(orbit_array:PackedVector3Array, color, delta:float):			
	DebugDraw3D.draw_sphere(orbit_array[orbit_array.size()-1], 0.01, Color.BLUE, delta*2)
	if orbit_array.size() % 2 == 0:
		DebugDraw3D.draw_lines(orbit_array, color, delta*2)	


func _add_trail_obj(planetoid:Node3D, planetoid_radius:float, trail: Array):
	var planet_parent = planetoid.get_parent()
	
	if trail.size() == TRAIL_LEN: 
		var last_trail_obj = trail.pop_front()
		planet_parent.remove_child(last_trail_obj)
	
	var trail_object = TrailObjectScn.instantiate()
	trail.append(trail_object)
	planet_parent.add_child(trail_object) 
	trail_object.scale *= planetoid_radius/1 #Scale to half size of planetoid
	trail_object.position = planetoid.position


func _on_draw_trail_timeout() -> void:
	_add_trail_obj(_phobos, PHOBOS_RADIUS, _phobos_trail)
	_add_trail_obj(_deimos, DEIMOS_RADIUS, _deimos_trail)
