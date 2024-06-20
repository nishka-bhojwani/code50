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

win = random.randint(1,level)
while True:
    try:
        guess = int(input("Guess: "))
        if guess<=0:
            continue
        elif guess==win:
            print("Just right!")
            break
        elif guess<win:
            print("Too small!")
            break
        elif guess>win:
            print("Too large!")
            break
    except ValueError:
        continue
