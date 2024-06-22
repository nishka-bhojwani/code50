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
    ...


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
    X = random.randint(0,)
    Y = random.randint(0, )
    ...


if __name__ == "__main__":
    main()
