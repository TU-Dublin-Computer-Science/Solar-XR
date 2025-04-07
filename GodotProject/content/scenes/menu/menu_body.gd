extends Node3D

const EntityScene = preload("res://addons/mars-ui/content/ui/components/entity/entity.tscn")

signal on_body_select

var selected_body_name: String:
	set(value):
		selected_body_name = value


func add_body(body: OrbitingBody):
	var entity = EntityScene.instantiate()
	entity.text = body.body_name
	
	entity.on_select.connect(func():
		on_body_select.emit(body.body_name)
	)
	
	$FlexContainer.add_child(entity)
	$FlexContainer._update()


func clear():
	for body in $FlexContainer.get_children():
		$FlexContainer.remove_child(body)
		body.queue_free()
	$FlexContainer._update()
