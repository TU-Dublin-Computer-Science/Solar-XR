extends Node

const BodyScn = preload("res://content/scenes/body/body.tscn")
const OrbitScn = preload("res://content/scenes/orbit/orbit.tscn")

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

var _sun: Body
var _planet_orbit_array = []


func instantiate_simulation():
	var sun_path = "res://content/data/bodies/Sun.json"
	var sun_data = _read_json_file(sun_path)
	
	_instantiate_body(sun_data)


func get_body(ID: int):
	if ID == Mappings.planet_ID["Sun"]:
		return _sun
	else:
		for orbit in _planet_orbit_array:
			if ID == orbit.body.ID:
				return orbit.body


func _instantiate_body(body_data: Variant):

	if not body_data:
		return
	
	model_scalar = 0.5 / body_data["radius"]

	_sun = BodyScn.instantiate()
	_sun.init(	body_data["ID"],
				body_data["name"],
				body_data["model_path"], 
				body_data["radius"],
				body_data["rotation_factor"],
				body_data["info_points"],
				_unix_to_julian(time),
				model_scalar,
				camera,
				false)
	
	info_nodes = _sun.info_nodes

	add_child(_sun)
	
	for satellite_name in body_data["satellites"]:
		var satellite_data_path = "res://content/data/bodies/%s.json" % satellite_name
		var satellite_data = _read_json_file(satellite_data_path)
		
		# This distance chosen for now as Neptune is this far away from Sun
		if satellite_data["semimajor_axis"] < 4500000000: 
			
			var body = BodyScn.instantiate()
			body.init(	satellite_data["ID"],
						satellite_data["name"],
						satellite_data["model_path"], 
						satellite_data["radius"], 
						satellite_data["rotation_factor"],
						satellite_data["info_points"],
						_unix_to_julian(time),
						model_scalar,
						camera,
						true)
			
			var orbit = OrbitScn.instantiate()
			orbit.init(	body, 
						satellite_data["semimajor_axis"],
						satellite_data["eccentricity"], 
						satellite_data["argument_periapsis"],
						satellite_data["mean_anomaly"],
						satellite_data["inclination"],
						satellite_data["lon_ascending_node"],
						satellite_data["orbital_period"], 
						_unix_to_julian(time),
						model_scalar,
						camera,)

			_planet_orbit_array.append(orbit)
			add_child(orbit)


func _read_json_file(file_path: String) -> Dictionary:
	var file = FileAccess.open(file_path, FileAccess.READ)
	
	if file == null:
		print("Failed to open file: ", file_path)
		return {}
	
	var json_string = file.get_as_text()  # Read the file as text
	file.close()  # Close the file after reading

	# Parse JSON
	var json_data = JSON.new()
	var error = json_data.parse(json_string)
	
	if error != OK:
		print("Failed to parse JSON: ", json_data.error_string)
		return {}

	return json_data.data  # Returns the parsed dictionary


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
