# taking input from user
try:
    grocery = {}
    counter = 0
    while True:
        item = str(input())

        if item in grocery:
            grocery[item] +=1
        else:
            grocery[item] = 1
        grocery.update({item:counter})


except EOFError:
    print("")
    exit

print(grocery)
