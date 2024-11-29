extends Node3D



var planet: GlobalEnums.Planet:
	set(value):
		planet = value
		match planet:
			GlobalEnums.Planet.MARS:
				_active_btn = $BtnMars
			GlobalEnums.Planet.JUPITER:
				_active_btn = $BtnJupiter


var _active_btn: Button3D = null:
	set(value): # Logic for toggling buttons
		if value == _active_btn: # If button already active do nothing
			return
			
		if _active_btn != null: # If a button is selected
			_active_btn.active = false
			_active_btn.disabled = false
			
		_active_btn = value
		_active_btn.active = true
		_active_btn.disabled = true


# Called when the node enters the scene tree for the first time.
func _ready() -> void:
	$BtnMars.on_button_down.connect(func():_active_btn = $BtnMars)
	
	$BtnJupiter.on_button_down.connect(func():_active_btn = $BtnJupiter)


# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta: float) -> void:
	pass
