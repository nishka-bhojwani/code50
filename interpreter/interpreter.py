#taking input from user
Expression = str(input("Expression: ")).strip()
new = Expression.split(" ")
x = float(new[0])
y = str(new[1])
z = float(new[2])


if y == "+":
    print(x+z)
elif y == "-":
    print(x-z)
elif y=="*":
    print(x*z)
elif y == "/":
    if z== 0:
        print("invalid input")
    else:
        print(x/z)

