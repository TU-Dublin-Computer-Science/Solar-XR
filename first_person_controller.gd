extends CharacterBody3D

const MOVE_SPEED = 5.0
const LOOK_SPEED = 200.0

var lookDirection:Vector2 = Vector2.ZERO
var controlling = true

func _ready():
	Input.set_mouse_mode(Input.MOUSE_MODE_CAPTURED)

func _input(event):
	if event is InputEventMouseMotion and controlling:
		#Capture mouse input
		lookDirection = event.relative
	
	if event.is_action_pressed("escape"):
		if controlling: #If escape is pressed while in fp mode, return mouse
			Input.set_mouse_mode(Input.MOUSE_MODE_VISIBLE)
			controlling = false
		else: #If escape is pressed while not in fp mode, exit application
			get_tree().quit()
		
	elif event.is_action_pressed("left_mouse_click"):
		if !controlling: #if left mouse pressed while not in fp, enter fp mode
			Input.set_mouse_mode(Input.MOUSE_MODE_HIDDEN)
			Input.set_mouse_mode(Input.MOUSE_MODE_CAPTURED)
			controlling = true			
	
func _physics_process(delta: float) -> void:
	if controlling:
		#Rotate based on mouse input
		rotate(Vector3.DOWN, deg_to_rad(lookDirection.x * deg_to_rad(LOOK_SPEED) * delta))
		rotate(transform.basis.x,deg_to_rad(-lookDirection.y * deg_to_rad(LOOK_SPEED) * delta))
		lookDirection = Vector2.ZERO
	
		# Get the input direction and handle the movement/deceleration.
		var verticalInput = 0
		if Input.is_action_pressed("up"):
			verticalInput = 1
		elif Input.is_action_pressed("down"):
			verticalInput = -1		
		var input_dir := Input.get_vector("left", "right", "forward", "backward")
		var direction := (transform.basis * Vector3(input_dir.x, verticalInput, input_dir.y)).normalized()
		
		if direction:
			velocity.x = direction.x * MOVE_SPEED
			velocity.y = direction.y * MOVE_SPEED 
			velocity.z = direction.z * MOVE_SPEED		
		else:
			velocity.x = move_toward(velocity.x, 0, MOVE_SPEED)
			velocity.y = move_toward(velocity.y, 0, MOVE_SPEED)
			velocity.z = move_toward(velocity.z, 0, MOVE_SPEED)

		move_and_slide()
