# taking input from user

text = str(input("Input: "))

vowels = ['a','A','e','E','i','I','o','O','u','U']


for i in vowels:
    new = text.replace(i,"")
    print(new)
