import random

#asking user for a level
while True:

    try:
        level = int(input("Level: "))
        if level<=0:
            continue
        else:
            break
    except ValueError:
        continue

win = random.randint(1,level) #the number should be within the specified range , i.e. lesser than the level
while True: #keep asking for guesses incase of invalid input
    try:
        guess = int(input("Guess: "))
        #conditionals for checking the conditions on guess wrt level
        if guess<=0:
            continue
        elif guess==win:
            print("Just right!")
            break
        elif guess<win:
            print("Too small!")
            exit
        elif guess>win:
            print("Too large!")
            exit
    except ValueError:
        continue
