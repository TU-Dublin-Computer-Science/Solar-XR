extends Node3D

#Data Parameters obtained from Nasa Planetary factsheets
#https://nssdc.gsfc.nasa.gov/planetary/factsheet/marsfact.html
#Time values are in seconds
#Distance values are in meters
#Angle values are in degrees

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
const PHOBOS_ROT_PERIOD = 27553.824
const PHOBOS_ORBIT_INCLINATION = 1.08
const PHOBOS_SEMIMINOR_AXIS = PHOBOS_SEMIMAJOR_AXIS * sqrt(1-pow(PHOBOS_ECCENTRICITY, 2))
#Formula for calculating semi-minor axis: b = a*sqrt(1-e^2)

var phobosOrbitAngle = 0.0
var phobosOrbitArray:PackedVector3Array #Used for drawing orbit path for debugging

var deimosOrbitAngle = 0.0
var deimosOrbitArray:PackedVector3Array #Used for drawing orbit path for debugging

const DEIMOS_RADIUS:float = 5100.0 * modelScalar #Using polar radius for now
const DEIMOS_SEMIMAJOR_AXIS = 2345900 * modelScalar
const DEIMOS_ECCENTRICITY = 0.0005
const DEIMOS_ORBIT_PERIOD = 109074.816
const DEIMOS_ROT_PERIOD = 109074.816
const DEIMOS_ORBIT_INCLINATION = 1.79
const DEIMOS_SEMIMINOR_AXIS = DEIMOS_SEMIMAJOR_AXIS * sqrt(1-pow(DEIMOS_ECCENTRICITY, 2))

@export var debugMode : bool = false:
	set(state):
		debugMode = state
		toggleDebugSurfaces(state)			

#Time Keeping
var startTime:float = 0.0
var elapsedRealSecs = 0
var elapsedSimulatedSecs = 0
var timeMultiplier = 1
const TIME_INCREMENT = 50
const MAX_TIME_MULT = 6000
const MIN_TIME_MULT = 1

@onready var mars = $Planet

const phobosScene = preload("res://phobos.tscn")
var phobosOrbitPlane
var phobos

const deimosScene = preload("res://deimos.tscn")
var deimosOrbitPlane
var deimos

# Called when the node enters the scene tree for the first time.
func _ready() -> void:
	startTime = Time.get_ticks_msec()	
	loadPhobos()
	loadDeimos()
	
func _process(delta: float) -> void:
	elapsedRealSecs += 1 * delta
	elapsedSimulatedSecs += 1 * timeMultiplier * delta	
		
	rotatePlanetoid(mars, MARS_ROT_PERIOD, delta)
	rotatePlanetoid(phobos, PHOBOS_ROT_PERIOD, delta)
	rotatePlanetoid(deimos, DEIMOS_ROT_PERIOD, delta)
	
	moveInOrbit(phobos, phobosOrbitAngle, PHOBOS_ORBIT_PERIOD, PHOBOS_SEMIMAJOR_AXIS, 
				PHOBOS_SEMIMINOR_AXIS, delta, phobosOrbitArray)
	
	moveInOrbit(deimos, deimosOrbitAngle, DEIMOS_ORBIT_PERIOD, DEIMOS_SEMIMAJOR_AXIS,
				DEIMOS_SEMIMINOR_AXIS, delta, deimosOrbitArray)
	
	if debugMode:		
		drawDebugOrbit(phobosOrbitArray, Color.GREEN, delta)
		drawDebugOrbit(deimosOrbitArray, Color.RED, delta)

func toggleDebugMode():
	debugMode = !debugMode

func loadPhobos():
	phobosOrbitPlane = Node3D.new()
	phobosOrbitPlane.rotate(Vector3.FORWARD, -deg_to_rad(PHOBOS_ORBIT_INCLINATION))
	add_child(phobosOrbitPlane)
	
	phobos = phobosScene.instantiate()
	phobosOrbitPlane.add_child(phobos)
	
	phobos.position = Vector3(PHOBOS_SEMIMAJOR_AXIS, 0, 0)	
	phobos.scale *= PHOBOS_RADIUS/0.5 #Scale is desired_radius/current_radius
	
func loadDeimos():
	deimosOrbitPlane = Node3D.new()
	deimosOrbitPlane.rotate(Vector3.FORWARD, -deg_to_rad(DEIMOS_ORBIT_INCLINATION))
	add_child(deimosOrbitPlane)
	
	deimos = deimosScene.instantiate()
	deimosOrbitPlane.add_child(deimos)
	
	deimos.position = Vector3(DEIMOS_SEMIMAJOR_AXIS, 0, 0)	
	deimos.scale *= DEIMOS_RADIUS/0.5
		
func toggleDebugSurfaces(state:bool):	
	$RotationDebugPlaneSystem.visible = state
	$Planet/RotationDebugPlanePlanet.visible = state

func rotatePlanetoid(planetoid:Node3D, rotPeriod:float, delta:float):
	var angleToRotate = ((2*PI)/ rotPeriod) * delta * timeMultiplier	
	planetoid.rotate_y(angleToRotate)

func drawDebugOrbit(orbitArray:PackedVector3Array, color, delta:float):			
	DebugDraw3D.draw_sphere(orbitArray[orbitArray.size()-1], 0.01, Color.BLUE, delta*2)
	if orbitArray.size() % 2 == 0:
		DebugDraw3D.draw_lines(orbitArray, color, delta*2)	

func moveInOrbit(planetoid:Node3D, currentOrbitAngle:float, orbitPeroid:float,  
				 orbitMajorAxis:float, orbitMinorAxis, delta:float, debugPosArray:PackedVector3Array):
	var rotationAngle = ((2*PI)/orbitPeroid) * timeMultiplier * delta
	
	#This is the angle the planet has moved around so far in relation to the x axis (parametric angle)
	var angleSoFar = atan2(planetoid.position.z/orbitMinorAxis, planetoid.position.x/orbitMajorAxis)	
	
	planetoid.position.x = cos(angleSoFar - rotationAngle) * orbitMajorAxis
	planetoid.position.z = sin(angleSoFar - rotationAngle) * orbitMinorAxis

	debugPosArray.append(global_transform * planetoid.position)
	
func increaseTime(value:float): 
	if ((timeMultiplier + (TIME_INCREMENT * (value/100.0))) <= MAX_TIME_MULT):
		timeMultiplier += (TIME_INCREMENT * (value/100.0))
	else:
		timeMultiplier = MAX_TIME_MULT

func decreaseTime(value:float):
	if ((timeMultiplier - (TIME_INCREMENT * (value/100.0))) >= 0):
		timeMultiplier -= (TIME_INCREMENT * (value/100.0))
	else:
		timeMultiplier = MIN_TIME_MULT
