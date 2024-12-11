extends Node3D

const DAY_1 = 1733184000 # Tue Dec 03 2024 00:00:00 GMT+0000
const Day_1_MID = 1733227200 # Tue Dec 03 2024 12:00:00 GMT+0000
const DAY_2 = 1733270400 # Wed Dec 04 2024 00:00:00 GMT+0000


# Called when the node enters the scene tree for the first time.
func _ready() -> void:
	_test_rotation()


# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta: float) -> void:
	pass

func _test_rotation():
	await get_tree().create_timer(2).timeout 
	$PlanetSim.time = DAY_1
	print("DAY_1")
	await get_tree().create_timer(2).timeout 
	$PlanetSim.time = Day_1_MID
	print("Day_1_MID")
	await get_tree().create_timer(2).timeout 
	$PlanetSim.time = DAY_2
	print("DAY_2")
