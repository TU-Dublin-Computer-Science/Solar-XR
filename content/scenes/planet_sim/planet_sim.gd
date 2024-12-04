extends Node

const MARS_DATA_PATH = "res://content/data/mars_data.json"
const JUPITER_DATA_PATH = "res://content/data/jupiter_data.json"

const BodyScn = preload("res://content/scenes/body/body.tscn")
const OrbitScn = preload("res://content/scenes/orbit/orbit.tscn")

var info_nodes: Array[Node3D]
var sim_data_path = MARS_DATA_PATH

# In the simulation the central body is 1*1*1 meter
# The value below is the ratio of the central body's model radius to it's actual radius
# Every other body is scaled using this factor
var model_scalar

@export var planet:GlobalEnums.Planet:
	set(value):
		planet = value
		match planet:
			GlobalEnums.Planet.MARS:
				sim_data_path = MARS_DATA_PATH
			GlobalEnums.Planet.JUPITER:
				sim_data_path = JUPITER_DATA_PATH
		
		for child in get_children():
			remove_child(child)	
	
		_instantiate_simulation()

# Time Keeping
@export var time: float:
	set(value):
		time = value
		
		if _central_body:
			_central_body.julian_time = _unix_to_julian(time)
			
		# TODO Orbits

var _central_body: Node3D
var _orbits_array = []

# Called when the node enters the scene tree for the first time.
func _ready() -> void:
	_instantiate_simulation()
	

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


func _instantiate_simulation():
	var sim_data_path = _read_json_file(sim_data_path)
	
	if not sim_data_path:
		return
	
	model_scalar = 0.5/sim_data_path["radius"]
	
	_central_body = BodyScn.instantiate()
	_central_body.init(	load(sim_data_path["model_path"]), 
							sim_data_path["radius"], 
							sim_data_path["rotation_multiplier"], 
							_unix_to_julian(time), 
							model_scalar)	
	add_child(_central_body)
	
	"""
	if sim_data_path["satellites"]:
		for satellite_data in sim_data_path["satellites"]:
			var body = BodyScn.instantiate()
			body.set_data(	load(satellite_data["model_path"]), 
							satellite_data["radius"], 
							satellite_data["rotation_mulitplier"], 
							time_scalar, 
							model_scalar)
			
			var orbit = OrbitScn.instantiate()
			orbit.set_data(	body, 
							satellite_data["eccentricity"], 
							satellite_data["orbit_period"], 
							satellite_data["orbit_inclination"], 
							satellite_data["semimajor_axis"],
							time_scalar,
							model_scalar)
			_orbits_array.append(orbit)
			add_child(orbit)
	"""
	if sim_data_path["info_points"]:
		_central_body.add_info_nodes(sim_data_path["info_points"])
		info_nodes = _central_body.info_nodes


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
