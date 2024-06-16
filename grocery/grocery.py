# taking input from user
try:
    grocery = {}
    counter = 0
    while True:
        item = str(input())
        grocery.update({item:counter})
        


except EOFError:
    exit

print(grocery)
