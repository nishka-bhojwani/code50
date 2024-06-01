file = str(input("file : " ))# takes user input
new = file.split(".")#splitting the original string into two strings before and after the .
extension = new[1] # gets the second word after splitting and stores it in extension
if extension == "gif" or "jpg" or "jpeg" or "png":
    if extension == "jpeg" or "jpg":
        print("image/jpeg")
    else:
        print(f"image/{extension}")
elif extension == "pdf":
    print



"""
.gif   - image/gif
.jpg   - image/jpeg
.jpeg  - image/jpeg
.png   - image/png
.pdf   - application/pdf
.txt   -  text/plain
.zip   - application/zip
"""
