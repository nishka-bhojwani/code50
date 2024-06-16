# taking input from user
try:
    grocery = {}
    while True:
        item = str(input())
        if item not in grocery:
            grocery[item]=1
        elif item in grocery:
            grocery[item]+=1




except EOFError:
    exit

print(grocery)
