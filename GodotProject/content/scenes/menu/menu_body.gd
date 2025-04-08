extends Node3D

const EntityScene = preload("res://addons/mars-ui/content/ui/components/entity/entity.tscn")

signal body_selected

var selected_body_name: String:
	set(value):
		selected_body_name = value


func add_body(body: OrbitingBody):
	var entity = EntityScene.instantiate()
	entity.text = body.body_name.capitalize()
	
	entity.on_select.connect(func():
		body_selected.emit(body.body_name)
	)
	
	$CtnBodyList.add_child(entity)
	$CtnBodyList._update()


func clear():
	for body in $CtnBodyList.get_children():
		$CtnBodyList.remove_child(body)
		body.queue_free()
	$CtnBodyList._update()
