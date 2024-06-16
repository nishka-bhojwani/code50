# taking input from user
try:
    grocery = {}
    counter = 0
    while True:
        item = str(input())
        counter = counter+1
        grocery.update({item:counter})
        if item in grocery:
            grocery[item] = counter+1
        else:
            grocery[item] = counter
    print(grocery)


except EOFError:
    print("")
    exit
    
