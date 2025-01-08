extends Node3D

var planet: GlobalEnums.Planet:
	set(value):
		planet = value
		match planet:
			GlobalEnums.Planet.MERCURY:
				_active_btn = $BtnMercury
			GlobalEnums.Planet.VENUS:
				_active_btn = $BtnVenus
			GlobalEnums.Planet.EARTH:
				_active_btn = $BtnEarth
			GlobalEnums.Planet.MARS:
				_active_btn = $BtnMars
			GlobalEnums.Planet.JUPITER:
				_active_btn = $BtnJupiter
			GlobalEnums.Planet.SATURN:
				_active_btn = $BtnSaturn
			GlobalEnums.Planet.URANUS:
				_active_btn = $BtnUranus
			GlobalEnums.Planet.NEPTUNE:
				_active_btn = $BtnNeptune
			GlobalEnums.Planet.SUN:
				_active_btn = $BtnSun

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
	$BtnMercury.on_button_down.connect(func():_active_btn = $BtnMercury)
	$BtnVenus.on_button_down.connect(func():_active_btn = $BtnVenus)
	$BtnEarth.on_button_down.connect(func():_active_btn = $BtnEarth)
	$BtnMars.on_button_down.connect(func():_active_btn = $BtnMars)	
	$BtnJupiter.on_button_down.connect(func():_active_btn = $BtnJupiter)
	$BtnSaturn.on_button_down.connect(func():_active_btn = $BtnSaturn)
	$BtnUranus.on_button_down.connect(func():_active_btn = $BtnUranus)
	$BtnNeptune.on_button_down.connect(func():_active_btn = $BtnNeptune)


# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta: float) -> void:
	pass
