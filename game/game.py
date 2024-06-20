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

Guess = random.randrange(0, 100, 1)
while True:
    try:
        guess = int(input("Guess: "))
    
