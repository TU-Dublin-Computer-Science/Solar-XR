# Solar-XR Data

Each celestial body stored as a separate JSON file will the fields listed below.

All data used in the system is extracted from the following two pages:
https://ssd.jpl.nasa.gov/planets/approx_pos.html
https://ssd.jpl.nasa.gov/sats/elem/

To ensure scientific accuracy of the model, all data should be gathered from reputable sources that can be referenced in the documentation.

| Name                   | Units              | Description                                                                                                                                                                                                                                                                                 |
| ---------------------- | ------------------ | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **ID**                 | None               | NAIF code of the object (ID standard used by NASA), see [here](https://www.imcce.fr/content/medias/recherche/equipes/asd/calceph/html/c/calceph.naifid.html). Not used by the program at the moment but good to have a unique ID, especially if we ever move over to a DB.                  |
| **name**               | None               | Name of the celestial body.                                                                                                                                                                                                                                                                 |
| **radius**             | km                 | Radius of the object.                                                                                                                                                                                                                                                                       |
| **rotation_factor**    | deg/day            | This is explained in the "Rotation" section below.                                                                                                                                                                                                                                          |
| **central_body**       | None               | The primary celestial body this object orbits.                                                                                                                                                                                                                                              |
| **semimajor_axis**     | km                 | (Keplerian Element) Semi-major axis of the elliptical orbit the                                                                                                                                                                                                                             |
| **eccentricity**       | Number from 0 to 1 | (Keplerian Element) Measure of the orbit's deviation from a perfect circle.                                                                                                                                                                                                                 |
| **argument_periapsis** | degrees            | (Keplerian Element) Angle from the ascending node to the orbit's closest point.                                                                                                                                                                                                             |
| **mean_anomaly**       | degrees            | (Keplerian Element) Position of the object along its orbit at a specific time.                                                                                                                                                                                                              |
| **inclination**        | degrees            | (Keplerian Element) Tilt of the object's orbit relative to a reference plane.                                                                                                                                                                                                               |
| **lon_ascending_node** | degrees            | (Keplerian Element) Angle of the ascending node relative to the reference frame.                                                                                                                                                                                                            |
| **orbital_period**     | days               | Time taken to complete one orbit around the central body.                                                                                                                                                                                                                                   |
| **info_points**        | Array              | Points of interest of the surface of the planet, each one must include a title, description, image, and lon/lat coords                                                                                                                                                                      |
| **satellites**         | Array              | List of satellites (natural & manmade) that we currently have data for orbiting the object.                                                                                                                                                                                                 |
| **model**              |                    | A model representing the object. For spherical planets & moons a texture is applied to a perfect spherical object. For non-spherical bodies and manmade satellites, the simulation supports models in the GLB/GLTF format. This is currently only used by the Godot version of the project. |
## Further Description of Fields
### Kepler Elements
The simulation has been designed to create the orbits from the 6 Keplerian elements that define an orbit, which are included in the list above, see [here](https://en.wikipedia.org/wiki/Orbital_elements)
### Rotation
The best way found so far to get the current rotation of an object at a specified epoch is the following. It would be good to incorporate a more standardised way of doing this if one is found.

The IAU Working Group on Cartographic Coordinates and Rotational Elements creates publications with equations that specify celestial body's rotations with respect to time.

The 2015 publication is the most recent that could be found:
https://astropedia.astrogeology.usgs.gov/download/Docs/WGCCRE/WGCCRE2015reprint.pdf
This publication only contains equations for the 8 planets in the solar system and some of the major moons.

These equations can be long, so this is how they were simplified to the one data field used by the application:

This is an example of how the current rotation of Mars is calculated with respect to time:
```
W = 176.049863 + 350.891982443297d
	+ 0.000145 sin(129.071773 + 19140.0328244T ) 
	+ 0.000157 sin(36.352167 + 38281.0473591T ) 
	+ 0.000040 sin(56.668646 + 57420.9295360T )
	+ 0.000001 sin(67.364003 + 76560.2552215T )
	+ 0.000001 sin(104.792680 + 95700.4387578T )
	+ 0.584542 sin(95.391654 + 0.5042615T )(d)
```

The additions with the trigonometric functions account for minor changes, so these were removed, giving:
```
W = 176.049863 + 350.891982443297d
```

The 176.049863 is the angle the prime meridian is at (Earths prime meridian is Greenwich line) at the J2000.0 epoch (January 1, 2000).

We are assuming the initial rotation of the planets in the model is with the prime meridian already at J2000.0, so the first value can be ignored:
```
W = 350.891982443297d
```

The above is the rate at which Mars has rotated with respect to the current date (d is date)

d is the date in **Julian Time**, which is the number of days since a certain date

The constant in this equation is what the "rotation_factor" data field is, which is 350.891982443297 in the case of Mars.