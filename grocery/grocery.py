# taking input from user
try:
    grocery = {}
    while True:
        item = str(input()).strip().upper()
        if item not in grocery:
            grocery[item]=1
        elif item in grocery:
            grocery[item]+=1






except EOFError:
    exit

new= list(grocery.keys())
new.sort()

for i in new:
    print(f"{grocery[i]} {i}")


