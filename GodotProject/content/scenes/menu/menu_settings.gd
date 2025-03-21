extends Node3D

var input_method: Mappings.InputMethod:
	set(value):
		input_method = value
		if input_method == Mappings.InputMethod.TOUCH:
			$BtnTglInput.set_active($BtnTglInput/BtnTouch)
		elif input_method == Mappings.InputMethod.POINTER:
			$BtnTglInput.set_active($BtnTglInput/BtnPointer)
