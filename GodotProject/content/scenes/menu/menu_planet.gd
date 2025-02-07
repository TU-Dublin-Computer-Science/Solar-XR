extends Node3D

var focused_body_name: String:
	set(value):
		focused_body_name = value
		if focused_body_name == "mercury":
			_active_planet_btn = $BtnMercury
		elif focused_body_name == "venus":
			_active_planet_btn = $BtnVenus
		elif focused_body_name == "earth":
			_active_planet_btn = $BtnEarth
		elif focused_body_name == "mars":
			_active_planet_btn = $BtnMars
		elif focused_body_name == "jupiter":
			_active_planet_btn = $BtnJupiter
		elif focused_body_name == "saturn":
			_active_planet_btn = $BtnSaturn
		elif focused_body_name == "uranus":
			_active_planet_btn = $BtnUranus
		elif focused_body_name == "neptune":
			_active_planet_btn = $BtnNeptune
		elif focused_body_name == "sun":
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
