from bs4 import BeautifulSoup

import json

satellite_physical_file = open("DataScript/Planetary Satellite Physical Parameters.html", "r")
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


satellite_orbit_file = open("DataScript/Planetary Satellite Mean Elements.html", 'r')
satellite_orbit_data = satellite_orbit_file.read()
satellite_orbit_file.close()

soup = BeautifulSoup(satellite_orbit_data, 'html.parser')
rows = soup.find_all('tr', role='row')

satellite_data_list = []

for row in rows:
    cells = row.find_all('td')
    if cells and len(cells) >= 13: 
        
        data_object = {
            "name": cells[1].get_text(strip=True),
            "horizons_code": int(cells[2].get_text(strip=True)),
            "central_body": cells[0].get_text(strip=True),
            "frame": cells[4].get_text(strip=True),
            "semimajor_axis": int(cells[6].get_text(strip=True).strip(".")),
            "eccentricity": float(cells[7].get_text(strip=True)),
            "argument_of_periapsis": float(cells[8].get_text(strip=True)),
            "mean_anomaly": float(cells[9].get_text(strip=True)),
            "inclination": float(cells[10].get_text(strip=True)),
            "lon_ascending_node": float(cells[11].get_text(strip=True)),
            "orbital_period": float(cells[12].get_text(strip=True))
        }

        radius_entry_exists = False
        for item in physical_satellite_data_list:
            if item["horizons_code"] == data_object["horizons_code"]:
                data_object["radius"] = item["radius"]
                radius_entry_exists = True

        if not radius_entry_exists:
            data_object["radius"] = -1

        satellite_data_list.append(data_object)


for satellite_data in satellite_data_list:
    json_string = json.dumps(satellite_data, indent=4)

    file_path = "DataScript/DataFiles/" + satellite_data["name"] + ".json"

    file = open(file_path, "w")
    file.write(json_string)
    file.close()



