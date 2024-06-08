# taking input string from user
camel_name = str(input("camelCase: "))
length = len(camel_name) #finding length of input string using len function

print("snake_case: " , end = "")
for i in range(length): #iterating over each charecter in the string
    if camel_name[i].isupper(): #finding and replacing uppercase charecters with _lowercase
        new = camel_name[i].lower() #converting and storing lowercase charecter in new
        print(f"_{new}",end="") # preventing from moving to next line  by changing end
    else: #else if the charecter is already lowercase just printing that
        print(camel_name[i],end="")

#moving to next line in terminal
print()


