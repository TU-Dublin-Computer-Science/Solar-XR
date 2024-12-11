from astroquery.jplhorizons import Horizons

obj = Horizons(id=401, location=499, 
               epochs={'start': '2024-11-28',
                       'stop': '2024-11-29',
                       'step': '1d'})

print(obj.ephemerides_async().text)