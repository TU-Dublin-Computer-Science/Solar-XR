extends Node3D

@export var InfoNodeScreenSpawner: Node3D:
	set(value):
		InfoNodeScreenSpawner = value
		InfoNodeScreenSpawner.close_btn_pressed.connect(deactivate)

var _active_info_node: InfoNode = null
"""
set(value):
	var old_info_node = _active_info_node
	
	if old_info_node == null: # Deactivate currently active info node
		old_info_node.active = false
	
	if value != old_info_node: # Update active info node
		_active_info_node = value
		
		if info_node_screen_spawner != null: # Update info screen readout
			info_node_screen_spawner.update()
"""

# Called when the node enters the scene tree for the first time.
func _ready() -> void:
	for info_node in get_children():
		info_node.on_button_down.connect(_update_info_node.bind(info_node))
		
		info_node.on_button_up.connect(deactivate)
		
		

func _update_info_node(info_node: InfoNode):
	if _active_info_node == null: # If no currently selected info node
		_active_info_node = info_node
		if InfoNodeScreenSpawner != null:
			InfoNodeScreenSpawner.create(_active_info_node.title, _active_info_node.description, _active_info_node.image)
	else: # If there is a currently selected node
		_active_info_node.active = false
		_active_info_node = info_node
		if InfoNodeScreenSpawner != null:
			InfoNodeScreenSpawner.update(_active_info_node.title, _active_info_node.description, _active_info_node.image)
			

# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta: float) -> void:
	pass


func deactivate():
	if _active_info_node != null:
		_active_info_node.active = false
		_active_info_node = null
		if InfoNodeScreenSpawner != null:
			InfoNodeScreenSpawner.destroy()
