extends Node3D

var selected_planet_ID: int:
	set(value):
		selected_planet_ID = value

		if selected_planet_ID == Mappings.planet_ID["mercury"]:
			$PlanetBtnToggle.set_active($PlanetBtnToggle/BtnMercury)
		elif selected_planet_ID == Mappings.planet_ID["venus"]:
			$PlanetBtnToggle.set_active($PlanetBtnToggle/BtnVenus)
		elif selected_planet_ID == Mappings.planet_ID["earth"]:
			$PlanetBtnToggle.set_active($PlanetBtnToggle/BtnEarth)
		elif selected_planet_ID ==Mappings.planet_ID["mars"]:
			$PlanetBtnToggle.set_active($PlanetBtnToggle/BtnMars)
		elif selected_planet_ID == Mappings.planet_ID["jupiter"]:
			$PlanetBtnToggle.set_active($PlanetBtnToggle/BtnJupiter)
		elif selected_planet_ID == Mappings.planet_ID["saturn"]:
			$PlanetBtnToggle.set_active($PlanetBtnToggle/BtnSaturn)
		elif selected_planet_ID == Mappings.planet_ID["uranus"]:
			$PlanetBtnToggle.set_active($PlanetBtnToggle/BtnUranus)
		elif selected_planet_ID == Mappings.planet_ID["neptune"]:
			$PlanetBtnToggle.set_active($PlanetBtnToggle/BtnNeptune)
		elif selected_planet_ID == Mappings.planet_ID["sun"]:
			$PlanetBtnToggle.set_active($PlanetBtnToggle/BtnSun)

var body_scale_up_selected: bool:
	set(value):
		body_scale_up_selected = value
		if body_scale_up_selected:
			_active_scale_btn = $BtnScaleUp
		else:
			_active_scale_btn = $BtnScaleTrue

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
	pass

	$BtnScaleUp.on_button_down.connect(func(): _active_scale_btn = $BtnScaleUp)
	$BtnScaleTrue.on_button_down.connect(func(): _active_scale_btn = $BtnScaleTrue)
