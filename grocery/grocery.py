# taking input from user
try:
    grocery = {} #empty dictionary to store items and their quantity
    while True: 
        item = str(input()).strip().upper()
        if item not in grocery:
            grocery[item]=1
        elif item in grocery:
            grocery[item]+=1
#exits when user presses ctr-d
except EOFError:
    exit


new= list(grocery.keys())
new.sort()

for i in new:
    print(f"{grocery[i]} {i}")


