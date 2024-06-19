import emoji

text = str(input("Input:"))

print(f"Output:{emoji.emojize(text, language='alias')}")

