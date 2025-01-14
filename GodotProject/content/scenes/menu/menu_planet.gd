extends Node3D

var selected_planet_ID: int:
	set(value):
		selected_planet_ID = value
		if selected_planet_ID == Mappings.planet_ID["Mercury"]:
			_active_btn = $BtnMercury
		elif selected_planet_ID == Mappings.planet_ID["Venus"]:
			_active_btn = $BtnVenus
		elif selected_planet_ID == Mappings.planet_ID["Earth"]:
			_active_btn = $BtnEarth
		elif selected_planet_ID ==Mappings.planet_ID["Mars"]:
			_active_btn = $BtnMars
		elif selected_planet_ID == Mappings.planet_ID["Jupiter"]:
			_active_btn = $BtnJupiter
		elif selected_planet_ID == Mappings.planet_ID["Saturn"]:
			_active_btn = $BtnSaturn
		elif selected_planet_ID == Mappings.planet_ID["Uranus"]:
			_active_btn = $BtnUranus
		elif selected_planet_ID == Mappings.planet_ID["Neptune"]:
			_active_btn = $BtnNeptune
		elif selected_planet_ID == Mappings.planet_ID["Sun"]:
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
