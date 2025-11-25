# Solar XR
An extended reality model of the solar system designed for education.

This project has both a Godot and Unity version. Currently, the Godot verison is the most up-to-date.

## Features
- View a model of the 8 planets of the solar system and their moons.
- View the live state of the solar system.
- Speed up and slow down time, see the state of the solar system at specific dates and times.
- Focus view on specific planets.
- Scale, rotate and move the model.
- System can be controlled entirely through hand tracking.

## Demonstration Video (Godot Version)
[![Feature Demonstration Video](https://img.youtube.com/vi/dO7rRDLmElw/0.jpg)](https://youtu.be/dO7rRDLmElw?si=Wt81rAEHF_lyOEj5)

## APK Download
APKs of the project can be downloaded in the release section [here](https://github.com/TU-Dublin-Computer-Science/Solar-XR/releases) (note that only APKs of the Godot version are available for now).

## Godot Development Setup
- Supported Deployment Target: Meta Quest 3
- Godot Version: 4.5

1. Clone this repo.
2. Open folder GodotProject in the Godot Editor.
3. Add the following assets from the asset library:

| Name                        |  Installation Path          |
| ----------------------------| -------------------------- |
| Godot OpenXR Vendors plugin | addons/godotopenxrvendors  |

3. From here the project can be run in editor.

### To Build onto Device
Follow the official documentation for [deploying to Android](https://docs.godotengine.org/en/stable/tutorials/xr/deploying_to_android.html).

## Unity Version Development Setup
- Supported Deployment Target: Meta Quest 3
- Unity Version: 6.2

1. Clone this repo.
2. Open the UnityProject folder in the Unity Editor.
3. From here the project can be run in the MRTK simulator by pressing the "Play" button.

### To Build onto Device
1. Connect meta quest device that has been put in developer mode over USB-C, and click allow debugging in the popup on the headset.
2. Go to File -> Build Profiles.
3. In platform selection, click Meta Quest, then "Switch Platform".
4. In this menu, check that the headset device appears under the "Run Device" dropdown.
5. Select File -> Build and Run, select a folder for the built apk file to be placed when prompted.
6. The project will build and be placed on the headset.

## References
See [References](REFERENCES.md)
