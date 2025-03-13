from bs4 import BeautifulSoup

import json, os

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
            

def create_satellite_files(satellite_list: list):

    if not os.path.exists(SATELLITE_DIR):
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
            

if __name__ == "__main__":
    satellite_list = create_satellite_list()
    
    create_satellite_files(satellite_list)
    
    #print_planet_satellites(satellite_list, "uranus")


