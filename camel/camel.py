# taking input string from user

camel_name = str(input("camelCase:"))
length = len(camel_name)

for i in range(length):
    if camel_name[i].isupper():
        print(camel_name)


