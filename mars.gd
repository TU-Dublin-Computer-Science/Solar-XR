extends Node3D

#Time taken in seconds for Mars to complete a full rotation
#Should find more accurate value for this
const ROT_PERIOD_HRS = 24.6229 #Obtained from JPL Horizons System
const ROT_PERIOD_SECS:float = ROT_PERIOD_HRS * 60 * 60
var startTime:float = 0.0

var elapsedRealSecs = 0
var elapsedSimulatedSecs = 0
var timeMultiplier = 1

const TIME_INCREMENT = 50
const MAX_TIME_MULT = 6000
const MIN_TIME_MULT = 1

# Called when the node enters the scene tree for the first time.
func _ready() -> void:
	startTime = Time.get_ticks_msec()
	
func _process(delta: float) -> void:
	elapsedRealSecs += 1 * delta
	elapsedSimulatedSecs += 1 * timeMultiplier * delta	
	rotateMars(delta)

func rotateMars(delta:float):
	var rotationSpeed =  (2*PI)/ ROT_PERIOD_SECS	
	var angleToRotate = rotationSpeed * delta * timeMultiplier	
	rotate_y(angleToRotate)

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
