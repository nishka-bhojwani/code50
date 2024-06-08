# taking input string from user

camel_name = str(input("camelCase: "))
length = len(camel_name)

print("snake_case: " , end = "")
for i in range(length):
    if camel_name[i].isupper():
        new = camel_name[i].lower()
        print(f"_{new}",end="")
    else:
        print(camel_name[i],end="")


print()


