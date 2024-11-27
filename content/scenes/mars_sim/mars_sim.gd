extends Node

const SIM_DATA = "res://content/data/simulation_data.json"
const BodyScn = preload("res://content/scenes/body/body.tscn")
const OrbitScn = preload("res://content/scenes/orbit/orbit.tscn")

var info_nodes: Array[Node3D]

# Time Keeping
var elapsed_simulated_secs: float = 0
var time_scalar: float = 1:
	set(value):
		time_scalar = value
		
		if _central_body:
			_central_body.time_scalar = value
		
		for orbit in _orbits_array:
			orbit.time_scalar = value

var _central_body: Node3D
var _orbits_array = []

# Called when the node enters the scene tree for the first time.
func _ready() -> void:
	_instantiate_simulation()

# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta: float) -> void:
	elapsed_simulated_secs += 1 * time_scalar * delta

func reset_sim() -> void:
	elapsed_simulated_secs = 0
	_central_body.reset()
	for orbit in _orbits_array:
		orbit.reset()

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
	var sim_data = _read_json_file(SIM_DATA)
	
	if not sim_data:
		return
	
	# In the simulation the central body is 1*1*1 meter
	# The value below is the ratio of the central body's model radius to it's actual radius
	# Every other body is scaled using this factor
	var model_scalar = 0.5/sim_data["radius"]
	
	_central_body = BodyScn.instantiate()
	_central_body.set_data(	load(sim_data["scene_path"]), 
							sim_data["radius"], 
							sim_data["rotation_period"], 
							time_scalar, 
							model_scalar)	
	add_child(_central_body)
	
	if sim_data["satellites"]:
		for satellite_data in sim_data["satellites"]:
			var body = BodyScn.instantiate()
			body.set_data(	load(satellite_data["scene_path"]), 
							satellite_data["radius"], 
							satellite_data["rotation_period"], 
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
	
	if sim_data["info_points"]:
		_central_body.add_info_nodes(sim_data["info_points"])
		info_nodes = _central_body.info_nodes
