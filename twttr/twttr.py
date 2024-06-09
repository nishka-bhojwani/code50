# taking input from user

text = str(input("Input: "))

vowels = ['a','A','e','E','i','I','o','O','u','U']


for i in vowels:
    text = text.replace(i,"")

print(f"Output: {text}")
