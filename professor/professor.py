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


def solve(X,Y):
     X= generate_integer(get_level())
     Y= generate_integer(get_level())
     correct_answer = X +Y
     tries  = 0
     while tries <3:
         answer = input(f"{X} + {Y} =" )
     try:
        answer1 = int(answer)
        if answer1 == correct_answer:
            return True
        else:
            print("EEE")
            tries+=1
    





if __name__ == "__main__":
    main()
