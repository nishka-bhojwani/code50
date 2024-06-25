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
    generate_level()



def get_level():
    while True:

        try:
            level = int(input("Level: "))
            if 1<=level<=3:
                break
            else:
                continue
        except ValueError:
            pass


def generate_integer(level):
    get_level()
    if level==1:
        X = random.randint(0,10)
        Y = random.randint(0,10)
    print(X+Y)



if __name__ == "__main__":
    main()
