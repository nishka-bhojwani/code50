#taking input from user
Expression = str(input("Expression: ")).strip()
new = Expression.split(" ")
x = float(new[0])
y = str(new[1])
z = float(new[2])

# using conditionals to perform the required operation on the basis of the input y (operand type)
if y == "+":
    print(x+z)
elif y == "-":
    print(x-z)
elif y=="*":
    print(x*z)
elif y == "/":
    if z== 0: #if z ==0 then the division will be not defined therefore shows invalid input 
        print("invalid input")
    else:
        print(x/z)

