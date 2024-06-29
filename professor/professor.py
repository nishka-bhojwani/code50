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
        return random.randint(0,9)
    elif level == 2:
        return random.randint(0,99)

    elif level == 3:
       return random.randint(0,999)
    X = generate_integer(level)
    Y= generate_integer(level)
    return X,Y


    try:
        answer = int(input(f"{X}+{Y} = "))
        counter = counter +1
        while counter<10:
            if answer == correct_answer:
                print(correct)
            continue
        else:
            print("EEE")
            correct = correct+0
    except ValueError:
        pass





if __name__ == "__main__":
    main()
