#name  and value error correction codes
while True:
    try :
        x = int(input("x: "))
    except ValueError:
        print("x is not an integer")
    else: #used for conditionals as well as exception testing
        break

#prints only the value of x if try gives an int value 
print(f"x is {x}")
