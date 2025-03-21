extends Node3D

var selected_planet_ID: int:
	set(value):
		selected_planet_ID = value

		if selected_planet_ID == Mappings.planet_ID["mercury"]:
			$BtnTglPlanet.set_active($BtnTglPlanet/BtnMercury)
		elif selected_planet_ID == Mappings.planet_ID["venus"]:
			$BtnTglPlanet.set_active($BtnTglPlanet/BtnVenus)
		elif selected_planet_ID == Mappings.planet_ID["earth"]:
			$BtnTglPlanet.set_active($BtnTglPlanet/BtnEarth)
		elif selected_planet_ID ==Mappings.planet_ID["mars"]:
			$BtnTglPlanet.set_active($BtnTglPlanet/BtnMars)
		elif selected_planet_ID == Mappings.planet_ID["jupiter"]:
			$BtnTglPlanet.set_active($BtnTglPlanet/BtnJupiter)
		elif selected_planet_ID == Mappings.planet_ID["saturn"]:
			$BtnTglPlanet.set_active($BtnTglPlanet/BtnSaturn)
		elif selected_planet_ID == Mappings.planet_ID["uranus"]:
			$BtnTglPlanet.set_active($BtnTglPlanet/BtnUranus)
		elif selected_planet_ID == Mappings.planet_ID["neptune"]:
			$BtnTglPlanet.set_active($BtnTglPlanet/BtnNeptune)
		elif selected_planet_ID == Mappings.planet_ID["sun"]:
			$BtnTglPlanet.set_active($BtnTglPlanet/BtnSun)
