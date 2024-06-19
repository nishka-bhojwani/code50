# application programming interface
#3rd party services that we can use to retrieve data


# itunes API  ur; - https://itunes.apple.com/search?entity=song&limit=1&term=weezer
#opens a json(format) type file - can use any language to access it , JSON - java script object notation


import requests
import sys

if len(sys.argv) != 2:
    sys.exit()

response = requests.get("https://itunes.apple.com/search?entity=song&limit=1&term="+sys.argv[1])
print(response.json())
