# taking input from user
try:
    grocery = {}
    while True:
        item = str(input()).strip().upper()
        if item not in grocery:
            grocery[item]=1
        elif item in grocery:
            grocery[item]+=1
        grocery = sorted(grocery)
        for x in grocery:
            print(f"{grocery[x]} {x}")




except EOFError:
    exit


