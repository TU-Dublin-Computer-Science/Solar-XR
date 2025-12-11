"""
This script is for pulling the data from the downloaded html files in this directory and creating data files for each satellites,
which are added to a "SatelliteDataFiles" subdirectory.
Note that these won't include the info point data that has been added after.
"""

from bs4 import BeautifulSoup

import json, os, shutil

SATELLITE_DIR = "SatelliteDataFiles"

def create_satellite_list() -> list:
    satellite_physical_file = open("Planetary Satellite Physical Parameters.html", "r")
    satellite_phsyical_data = satellite_physical_file.read()
    satellite_physical_file.close()

    soup = BeautifulSoup(satellite_phsyical_data, 'html.parser')
    rows = soup.find_all('tr', role='row')

    physical_satellite_data_list = []

    for row in rows:
        cells = row.find_all('td')
        if cells and len(cells) >= 7:
            data_object = {
                "horizons_code": int(cells[2].get_text(strip=True)),
                "radius": float(cells[6].get_text(strip=True))
            }    
        
            physical_satellite_data_list.append(data_object)


    satellite_orbit_file = open("Planetary Satellite Mean Elements.html", 'r')
    satellite_orbit_data = satellite_orbit_file.read()
    satellite_orbit_file.close()

    soup = BeautifulSoup(satellite_orbit_data, 'html.parser')
    rows = soup.find_all('tr', role='row')

    satellite_data_list = []

    for row in rows:
        cells = row.find_all('td')
        if cells and len(cells) >= 13: 
            
            data_object = {
                "ID": int(cells[2].get_text(strip=True)),
                "name": cells[1].get_text(strip=True),
                
                "radius": -1,
                "rotation_factor": -1,
                "model_path": "",

                "central_body": cells[0].get_text(strip=True),
                "semimajor_axis": int(cells[6].get_text(strip=True).strip(".")),
                "eccentricity": float(cells[7].get_text(strip=True)),
                "argument_periapsis": float(cells[8].get_text(strip=True)),
                "mean_anomaly": float(cells[9].get_text(strip=True)),
                "inclination": float(cells[10].get_text(strip=True)),
                "lon_ascending_node": float(cells[11].get_text(strip=True)),
                "orbital_period": float(cells[12].get_text(strip=True)),
                "info_points": [],
                "satellites": []
            }

            horizons_code = int(cells[2].get_text(strip=True))
            for item in physical_satellite_data_list:
                if item["horizons_code"] == horizons_code:
                    data_object["radius"] = item["radius"]


            satellite_data_list.append(data_object)

    return satellite_data_list
            

def regen_satellite_files(satellite_list: list):

    if os.path.exists(SATELLITE_DIR):
        shutil.rmtree(SATELLITE_DIR)
    
    os.makedirs(SATELLITE_DIR)

    for satellite_data in satellite_list:
        json_string = json.dumps(satellite_data, indent=4)

        file_path = SATELLITE_DIR + "/" + satellite_data["name"].lower() + ".json"

        file = open(file_path, "w")
        file.write(json_string)
        file.close()
    
    print("Files created.")


def print_planet_satellites(satellite_list: list, planet_name: str):
    for satellite_data in satellite_list:
        if satellite_data["central_body"].lower() == planet_name.lower():
            print('"' + satellite_data["name"].lower() + '",')
            

def main_menu():
    while True:
        print("\n--- SolarXR Data File Script ---")
        print("1. Generate Satellite Files")
        print("2. Print a List of Satellites for a Specified Planet")
        print("3. Exit")

        choice = input("Enter your choice: ")

        if choice == "1":
            # Ask for confirmation before regenerating satellite files
            confirm = input(('Are you sure you want to generate the satellite files in a subdirectory "SatelliteDataFiles"?\n'
                            "Any files in a subdirectory of the same name will be removed!\n"
                            "(Press y to confirm):")).strip().lower()
            if confirm == "y":
                print("Generating satellite files...")
                satellite_list = create_satellite_list()
                regen_satellite_files(satellite_list)
            else:
                print("Operation canceled.")
        elif choice == "2":
            planet = input("Enter the name of the planet: ").strip().lower()
            # Assuming we want to print the satellites of the given planet
            satellite_list = create_satellite_list()
            print_planet_satellites(satellite_list, planet)
        elif choice == "3":
            print("Exiting program.")
            break
        else:
            print("Invalid choice, please try again.")


if __name__ == "__main__":
    main_menu()

