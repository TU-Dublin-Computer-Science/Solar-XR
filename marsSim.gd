extends Node3D

#Data Parameters obtained from Nasa Planetary factsheets
#Time values are in seconds
#Distance values are in meters

#Mars has a radius of 0.5 in the model, so a scalar value is calculated,
#which is multilied by each "real" value to get the value to be used in the model
const REAL_MARS_RADIUS:float = 337620.0
const MARS_RADIUS_IN_MODEL:float = 0.5
const modelScalar = MARS_RADIUS_IN_MODEL/REAL_MARS_RADIUS

const MARS_ROT_PERIOD = 88642.44
const MARS_RADIUS = REAL_MARS_RADIUS * modelScalar

const PHOBOS_RADIUS:float = 9100.0 * modelScalar #Using polar radius for now
const PHOBOS_SEMIMAJOR_AXIS = 937800 * modelScalar
const PHOBOS_ECCENTRICITY = 0.0151
const PHOBOS_ORBIT_PERIOD = 27553.824

#Formula for calculating semi-minor axis: b = a*sqrt(1-e^2)
const PHOBOS_SEMIMINOR_AXIS = PHOBOS_SEMIMAJOR_AXIS * sqrt(1-pow(PHOBOS_ECCENTRICITY, 2))

const PHOBOS_MOVE_SPEED_TEST = 0.1

var phobosOrbitAngle = 0.0

var debugMode = false

#Time Keeping
var startTime:float = 0.0
var elapsedRealSecs = 0
var elapsedSimulatedSecs = 0
var timeMultiplier = 1
const TIME_INCREMENT = 50
const MAX_TIME_MULT = 6000
const MIN_TIME_MULT = 1

@onready var planet = $Planet

const phobosScene = preload("res://phobos.tscn")
var phobos

# Called when the node enters the scene tree for the first time.
func _ready() -> void:
	startTime = Time.get_ticks_msec()	
	loadPhobos()

func loadPhobos():
	phobos = phobosScene.instantiate()
	phobos.global_transform.origin = Vector3(PHOBOS_SEMIMAJOR_AXIS, 0, 0)	
	phobos.setSize(PHOBOS_RADIUS)
	add_child(phobos)	
	
func _process(delta: float) -> void:
	elapsedRealSecs += 1 * delta
	elapsedSimulatedSecs += 1 * timeMultiplier * delta	
		
	rotateMars(delta)
	movePhobos(delta)

func toggleDebugMode():
	debugMode = !debugMode
	print(debugMode)
	$RotationDebugPlaneSystem.visible = debugMode
	$Planet/RotationDebugPlanePlanet.visible = debugMode
	
	
func rotateMars(delta:float):	
	var angleToRotate = ((2*PI)/ MARS_ROT_PERIOD) * delta * timeMultiplier	
	planet.rotate_y(angleToRotate)

var phobosPath:PackedVector3Array #Used for drawing orbit path for debugging
func movePhobos(delta):	
	var angleToRotate = ((2*PI)/PHOBOS_ORBIT_PERIOD) * timeMultiplier * delta
	
	phobosOrbitAngle -= angleToRotate
	phobosOrbitAngle = fmod(phobosOrbitAngle, 2*PI)
	
	phobos.position.x = cos(phobosOrbitAngle) * PHOBOS_SEMIMAJOR_AXIS
	phobos.position.z = sin(phobosOrbitAngle) * PHOBOS_SEMIMINOR_AXIS
	
	phobosPath.append(phobos.global_position)
	
	if debugMode:		
		DebugDraw3D.draw_sphere(phobos.global_position, 0.02, Color.BLUE, delta)
		DebugDraw3D.draw_lines(phobosPath, Color.GREEN, delta)	
	
func increaseTime(value):
	if ((timeMultiplier + (TIME_INCREMENT * (value/100))) <= MAX_TIME_MULT):
		timeMultiplier += (TIME_INCREMENT * (value/100))
	else:
		timeMultiplier = MAX_TIME_MULT

func decreaseTime(value):
	if ((timeMultiplier - (TIME_INCREMENT * (value/100))) >= 0):
		timeMultiplier -= (TIME_INCREMENT * (value/100))
	else:
		timeMultiplier = MIN_TIME_MULT
