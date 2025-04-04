extends Node3D

var selected_body_name: String:
	set(value):
		selected_body_name = value

		if selected_body_name == "mercury":
			$BtnTglPlanet.set_active($BtnTglPlanet/BtnMercury)
		elif selected_body_name == "venus":
			$BtnTglPlanet.set_active($BtnTglPlanet/BtnVenus)
		elif selected_body_name == "earth":
			$BtnTglPlanet.set_active($BtnTglPlanet/BtnEarth)
		elif selected_body_name == "mars":
			$BtnTglPlanet.set_active($BtnTglPlanet/BtnMars)
		elif selected_body_name == "jupiter":
			$BtnTglPlanet.set_active($BtnTglPlanet/BtnJupiter)
		elif selected_body_name == "saturn":
			$BtnTglPlanet.set_active($BtnTglPlanet/BtnSaturn)
		elif selected_body_name == "uranus":
			$BtnTglPlanet.set_active($BtnTglPlanet/BtnUranus)
		elif selected_body_name == "neptune":
			$BtnTglPlanet.set_active($BtnTglPlanet/BtnNeptune)
		elif selected_body_name == "sun":
			$BtnTglPlanet.set_active($BtnTglPlanet/BtnSun)
