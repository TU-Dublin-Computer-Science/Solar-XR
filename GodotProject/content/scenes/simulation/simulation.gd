extends Node

const OrbitingBodyScn = preload("res://content/scenes/orbiting_body/OrbitingBody.tscn")
const SUN_RADIUS = 696340 # TODO Read this value from json instead

@export var camera: XRCamera3D = null

# Time Keeping
@export var time: float:
	set(value):
		time = value

		if _sun:
			_sun.julian_time = _unix_to_julian(time)
			
		if _planet_orbit_array:
			for orbit in _planet_orbit_array:
				orbit.julian_time = _unix_to_julian(time)

var info_nodes: Array[Node3D]

# In the simulation the central body is 1*1*1 meter
# The value below is the ratio of the central body's model radius to it's actual radius
# Every other body is scaled using this factor
var model_scalar
var focused_body

var _sun: OrbitingBody
var _planet_orbit_array = []


func init():
	model_scalar = 0.5 / SUN_RADIUS
	
	_sun = OrbitingBodyScn.instantiate()
	_sun.init("sun", camera, model_scalar)
	add_child(_sun)


func get_body(ID: int):
	if ID == Mappings.planet_ID["Sun"]:
		return _sun
	else:
		for orbiting_body in _sun.orbiting_bodies:
			if ID == orbiting_body.ID:
				return orbiting_body


func _unix_to_julian(unix_time: float):
	var greg_date = Time.get_datetime_dict_from_unix_time(unix_time)

	var year = greg_date.year
	var month = greg_date.month
	var day = greg_date.day
	var hour = greg_date.hour
	var minute = greg_date.minute
	var second = greg_date.second

	if month <= 2:
		year -= 1
		month += 12

	var A = int(year / 100)
	var B = 2 - A + int(A / 4)
	var JD = int(365.25 * (year + 4716)) + int(30.6001 * (month + 1)) + day + B - 1524.5
	JD += (hour + (minute + second / 60.0) / 60.0) / 24.0
	return JD
