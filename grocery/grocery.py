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

#creating and sorting a list to obtain the keys in alphabetical order
new= list(grocery.keys())
new.sort() #inbuilt function to sort a list

for i in new: #for the keys in sorted list printing the values and keys
    print(f"{grocery[i]} {i}")


