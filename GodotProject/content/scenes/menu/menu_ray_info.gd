extends Node3D

func _enter_tree() -> void:
	$InfoNode.active = false #Ensure its not still active from previous time it was used
