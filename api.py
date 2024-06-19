# application programming interface
#3rd party services that we can use to retrieve data


# itunes API  ur; - https://itunes.apple.com/search?entity=song&limit=1&term=weezer
#opens a json(format) type file - can use any language to access it , JSON - java script object notation

#request library converts it to python dictionary
#program acts as a browser to grab data from
import requests #does not come with python so installed using pip

import sys
import json

if len(sys.argv) != 2:
    sys.exit()

response = requests.get("https://itunes.apple.com/search?entity=song&limit=1&term="+sys.argv[1])
print(response.json())
