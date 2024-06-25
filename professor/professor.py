"""while True:

    try:
        level = int(input("Level: "))
        if 1<=level<=3:
            break
        else:
            continue
    except ValueError:
        continue

"""

import random


def main():
    level = get_level()
    generate_integer(level)




def get_level():
    while True:

        try:
            level = int(input("Level: "))
            if 1<=level<=3:
                return level
            else:
                continue
        except ValueError:
            pass


def generate_integer(level):
    if level == 1:
        X = random.randint(0, 10)
        Y = random.randint(0, 10)
    elif level == 2:
        X = random.randint(0, 100)
        Y = random.randint(0, 100)
    elif level == 3:
        X = random.randint(0, 1000)
        Y = random.randint(0, 1000)


    correct_answer = X + Y
    counter = 0
    correct = 0 
    try:
        answer = int(input(f"{X}+{Y} = "))
        if answer == correct_answer:
            counter = counter+1
            correct = correct+ 1
            print(counter)
        else:
            counter=counter+1
            print("EEE")
    except ValueError:
        pass





if __name__ == "__main__":
    main()
