extends Node3D

const EntityScene = preload("res://addons/mars-ui/content/ui/components/entity/entity.tscn")

signal body_selected

const AMT_PER_PAGE = 6

var _bodies = []

var _page: int = 0
var _page_amount: int

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

func _ready() -> void:
	$BtnScrollUp.on_button_up.connect(func():
		_page = clamp(_page - 1, 0, _page_amount - 1)
		_clear()
		render()
	)
	
	$BtnScrollDown.on_button_up.connect(func():
		_page = clamp(_page + 1, 0, _page_amount - 1)
		_clear()
		render()
	)


func add_body(body: OrbitingBody):
	_bodies.append(body)


func render():
	"""Called after all bodies are added"""	
	_page_amount = ceil(_bodies.size() / float(AMT_PER_PAGE))
	var offset = _page * AMT_PER_PAGE
	
	for i in range(offset, min(offset + AMT_PER_PAGE, len(_bodies))):
		var body = _bodies[i]
		var entity = EntityScene.instantiate()
		entity.ent_label = body.body_name.capitalize()
		entity.on_button_up.connect(func():
			body_selected.emit(body.body_name)
		)
		$CtnBodyList.add_child(entity)
	$CtnBodyList._update()
	
	$BtnScrollUp.disabled = _page == 0
	$BtnScrollDown.disabled = _page == _page_amount - 1

func _clear():
	for body in $CtnBodyList.get_children():
		$CtnBodyList.remove_child(body)
		body.queue_free()
	$CtnBodyList._update()


func reset():
	_bodies = []
	_page = 0
	_clear()
