# Solar XR
An augmented reality model of the solar system written in Godot and designed for education.

**Note: This project is in a pre-alpha state, with more features and bug-fixes to come.**

## Demonstration Video
[![Feature Demonstration Video](https://img.youtube.com/vi/dO7rRDLmElw/0.jpg)](https://youtu.be/dO7rRDLmElw?si=Wt81rAEHF_lyOEj5)

## Features
- View a model of the 8 planets of the solar system and their moons.
- View the live state of the solar system.
- Speed up and slow down time, see the state of the solar system at specific dates and times.
- Focus view on specific planets.
- Scale, rotate and move the model.
- System can be controlled entirely through hand tracking.

## Installation
- Deployment Target: Meta Quest 3
- Godot Version: 4.4

After cloning the repository, the following addons must be installed from the asset library:

| Name                           | Version     | Installation Path          |
| ------------------------------ | ----------- | -------------------------- |
| Godot OpenXR Vendors plugin v4 | 4.0.0-beta1 | addons/godotopenxrvendors  |

Follow the documentation for [deploying to Android](https://docs.godotengine.org/en/stable/tutorials/xr/deploying_to_android.html) to get it onto your headset!

## Known Issues
- Visual Shakiness when focused on some planets.
  - Currently experimenting with creating a build using double precision floats to alleviate this.

## References
- Virtual Menu (extracted and modified): [Immersive Home Project](https://github.com/Nitwel/Immersive-Home)
- [Planet Textures](https://www.solarsystemscope.com/textures/)
- [Solar System Data](https://ssd.jpl.nasa.gov/horizons)
- [BGM](https://pixabay.com/music/ambient-space-158081/)
- Models:
    - [Phobos](https://science.nasa.gov/resource/phobos-mars-moon-3d-model/)
    - [Deimos](https://science.nasa.gov/resource/deimos-mars-moon-3d-model/)
    - [Saturn](https://science.nasa.gov/resource/saturn-3d-model/)
