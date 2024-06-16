# taking input from user
try:
    grocery = {}
    counter = 0
    while True:
        item = str(input())
        grocery.update({item:counter})
        if item in grocery:
            grocery[item] = counter +1



except EOFError:
    print("")
    exit

print(grocery)
