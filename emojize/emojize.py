import emoji #dowloading the emoji module using pip then importing it

text = str(input("Input: ")) #taking user input as string
new = emoji.emojize(text, language = 'alias') #using the emojize function from documentation to convert it to an emoji
print(f"Output: {new}") #printing o/p

