extends Node3D

var selected_planet_ID: int:
	set(value):
		selected_planet_ID = value
		if selected_planet_ID == Mappings.planet_ID["mercury"]:
			_active_planet_btn = $BtnMercury
		elif selected_planet_ID == Mappings.planet_ID["venus"]:
			_active_planet_btn = $BtnVenus
		elif selected_planet_ID == Mappings.planet_ID["earth"]:
			_active_planet_btn = $BtnEarth
		elif selected_planet_ID ==Mappings.planet_ID["mars"]:
			_active_planet_btn = $BtnMars
		elif selected_planet_ID == Mappings.planet_ID["jupiter"]:
			_active_planet_btn = $BtnJupiter
		elif selected_planet_ID == Mappings.planet_ID["saturn"]:
			_active_planet_btn = $BtnSaturn
		elif selected_planet_ID == Mappings.planet_ID["uranus"]:
			_active_planet_btn = $BtnUranus
		elif selected_planet_ID == Mappings.planet_ID["neptune"]:
			_active_planet_btn = $BtnNeptune
		elif selected_planet_ID == Mappings.planet_ID["sun"]:
			_active_planet_btn = $BtnSun

var body_scale_up_selected: bool:
	set(value):
		body_scale_up_selected = value
		if body_scale_up_selected:
			_active_scale_btn = $BtnScaleUp
		else:
			_active_scale_btn = $BtnScaleTrue

var _active_planet_btn: Button3D = null:
	set(value): # Logic for toggling buttons
		if value == _active_planet_btn: # If button already active do nothing
			return
			
		if _active_planet_btn != null: # If a button is selected
			_active_planet_btn.active = false
			_active_planet_btn.disabled = false
			
		_active_planet_btn = value
		_active_planet_btn.active = true
		_active_planet_btn.disabled = true

var _active_scale_btn: Button3D = null:
	set(value): # Logic for toggling buttons
		if value == _active_scale_btn: # If button already active do nothing
			return
			
		if _active_scale_btn != null: # If a button is selected
			_active_scale_btn.active = false
			_active_scale_btn.disabled = false
			
		_active_scale_btn = value
		_active_scale_btn.active = true
		_active_scale_btn.disabled = true


# Called when the node enters the scene tree for the first time.
func _ready() -> void:
	$BtnMercury.on_button_down.connect(func():_active_planet_btn = $BtnMercury)
	$BtnVenus.on_button_down.connect(func():_active_planet_btn = $BtnVenus)
	$BtnEarth.on_button_down.connect(func():_active_planet_btn = $BtnEarth)
	$BtnMars.on_button_down.connect(func():_active_planet_btn = $BtnMars)	
	$BtnJupiter.on_button_down.connect(func():_active_planet_btn = $BtnJupiter)
	$BtnSaturn.on_button_down.connect(func():_active_planet_btn = $BtnSaturn)
	$BtnUranus.on_button_down.connect(func():_active_planet_btn = $BtnUranus)
	$BtnNeptune.on_button_down.connect(func():_active_planet_btn = $BtnNeptune)

	$BtnScaleUp.on_button_down.connect(func(): _active_scale_btn = $BtnScaleUp)
	$BtnScaleTrue.on_button_down.connect(func(): _active_scale_btn = $BtnScaleTrue)
