"""
general suffixes and output for reference
.gif   - image/gif
.jpg   - image/jpeg
.jpeg  - image/jpeg
.png   - image/png
.pdf   - application/pdf
.txt   -  text/plain
.zip   - application/zip
"""

file = str(input("file : " ))# takes user input
new = file.split(".")#splitting the original string into two strings before and after the .
extension = new[1] # gets the second word after splitting and stores it in extension
#taking into account all specified conditions printing o/p
if extension == "gif" or extension == "jpg" or extension == "jpeg" or extension == "png":
    if extension == "jpeg" or "jpg":
        print("image/jpeg")
    else:
        print(f"image/{extension}")
elif extension == "pdf" or extension == "zip":
    print(f"application/{extension}")
elif extension == "txt":
    print(f"text/plain")
else:
    print("application/octet-stream")





"""
.gif   - image/gif
.jpg   - image/jpeg
.jpeg  - image/jpeg
.png   - image/png
.pdf   - application/pdf
.txt   -  text/plain
.zip   - application/zip
"""
