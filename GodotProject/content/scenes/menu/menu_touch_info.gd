extends Node3D

func _enter_tree() -> void:
	# Wait before button is activated to prevent user proceedding immediately
	$InfoNode.disabled = true
	#await get_tree().create_timer(2.0).timeout
	$InfoNode.disabled = false
	
