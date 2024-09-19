extends Area3D

signal toggledSignal(state)

@export var state : bool:
	set(value):
		state = value		
		var material : StandardMaterial3D = $MeshInstance3D.material_override
		material.albedo_color = on_colour if state else off_colour
		
@export var on_colour : Color = Color.GREEN
@export var off_colour : Color = Color.DARK_GRAY

var canToggle = true

func toggle():
	if canToggle: #Timer used here to reduce the amount it's activated		
		state = !state
		toggledSignal.emit(state)
		canToggle = false
		$Timer.start()
	
# Called when the node enters the scene tree for the first time.
func _ready() -> void:
	state = false

func _on_body_entered(body: Node3D) -> void:
	toggle()
				
func _on_timer_timeout() -> void:
	canToggle = true
