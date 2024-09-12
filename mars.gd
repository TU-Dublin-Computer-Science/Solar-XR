extends Node3D

#Time taken in seconds for Mars to complete a full rotation
#Should find more accurate value for this
const FULL_ROT_SECS:float = 88560.0
var startTime:float = 0.0
var elapsedTime:float

const MULTIPLIER = 2000

# Called when the node enters the scene tree for the first time.
func _ready() -> void:
	startTime = Time.get_ticks_msec()
	
# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta: float) -> void:
	var elapsedRealSecs = (Time.get_ticks_msec() - startTime) / 1000.0
	
	var elapsedSimulatedSecs = elapsedRealSecs * MULTIPLIER
	
	var rotationSpeed =  (2*PI)/ FULL_ROT_SECS
	
	var angleToRotate = rotationSpeed * delta * MULTIPLIER
	
	rotate_y(angleToRotate)
	
	print("Full Rot Time = %f\n" % [FULL_ROT_SECS,])
	print("ElapsedSimulatedSecs: %f\nElapsedRealSecs %f" % [elapsedSimulatedSecs,elapsedRealSecs] )
