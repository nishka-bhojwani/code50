file = str(input("file : " ))# takes user input 
new = file.split(".")#splitting the original string into two strings before and after the .
extension = new[1] # gets the second word after splitting and stores it in extension
print(f"image/{extension}")


