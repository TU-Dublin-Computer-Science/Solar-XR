extends Node3D

const EntityScene = preload("res://addons/mars-ui/content/ui/components/entity/entity.tscn")

signal body_selected

var _bodies = []

var parent_body_name: String:
	set(value):
		parent_body_name = value
		if parent_body_name != "":
			$BtnBack.visible = true
			$BtnBack.label = parent_body_name
		else:
			$BtnBack.visible = false
			$BtnBack.label = ""
	
var selected_body_name: String:
	set(value):
		selected_body_name = value

func add_body(body: OrbitingBody):
	_bodies.append(body)
	

func render_body_menu():
	"""Called after all bodies are added"""
	for body in _bodies:
		var entity = EntityScene.instantiate()
		entity.ent_label = body.body_name.capitalize()
		entity.on_button_up.connect(func():
			body_selected.emit(body.body_name)
		)
		$CtnBodyList.add_child(entity)
	$CtnBodyList._update()

func clear():
	_bodies = []
	for body in $CtnBodyList.get_children():
		$CtnBodyList.remove_child(body)
		body.queue_free()
	$CtnBodyList._update()
