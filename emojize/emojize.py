import emoji

text = str(input("Input: "))
new = emoji.emojize(text, language = 'alias')
print(f"Output: {new}")

