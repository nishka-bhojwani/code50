# application programming interface
#3rd party services that we can use to retrieve data


# itunes API  ur; - https://itunes.apple.com/search?entity=song&limit=1&term=weezer
#opens a json(format) type file - can use any language to access it , JSON - java script object notation

#request library converts it to python dictionary
#program acts as a browser to grab data from
import requests #does not come with python so installed using pip #code - pip install requests (in terminal )

import sys
import json

if len(sys.argv) != 2:
    sys.exit() #terminates the whole programme  , break - just breaks out of the loop

response = requests.get("https://itunes.apple.com/search?entity=song&limit=50&term="+sys.argv[1])

#print(json.dumps(response.json(),indent =2 ))
#json.dumps() from documentation - helps make it more readable

o = response.json() #grabbing the json object b/w the curly braces
for result in o["results"]: #results key is a list
    print(result["trackName"])

