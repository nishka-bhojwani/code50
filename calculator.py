x = float(input("x: ")) #input gets called first # the o/p of that becomes the input to int function
y = float(input("y: "))

z = int(x + y) #takes only the integer part
n  = round(x+y) #rounds the value (5 gets rounded down ) #syntax round(number,digit)
d= round(x/y,2)

print(x+y)
print(f"{z:,}") # commas to group 3 zeroes
print(n)
