# taking input from user
try:
    grocery = {}
    counter = 0
    while True:
        item = str(input())
        if item not in grocery:
            grocery.update({item:1})
        elif item in grocery:
            counter+=1
            grocery.update({item:counter})




except EOFError:
    exit

print(grocery)
