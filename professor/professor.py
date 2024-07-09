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
    counter, correct = ask_questions(level, 10)
    print(f"{correct}")

 #getting a level , only accepts 1,2,3
def get_level():
    while True:
        try:
            level = int(input("Level: "))
            if 1 <= level <= 3:
                return level

            else:
                continue
        except ValueError:
            pass

#generating integers based on the level

def generate_integer(level):
    if level == 1:
        return random.randint(0, 10), random.randint(0, 10)
    elif level == 2:
        return random.randint(0, 100), random.randint(0, 100)
    elif level == 3:
        return random.randint(0, 1000), random.randint(0, 1000)

#keeping count of correct anwers and number of questions answered
def ask_questions(level, num_questions):
    counter = 0
    correct = 0

    for _ in range(num_questions):
        X, Y = generate_integer(level) #generating X and Y based on level
        correct_answer = X + Y
        attempts = 0

        while attempts < 3: #prints EEE till 3 attempts then prints the answer
            try:
                answer = int(input(f"{X} + {Y} = "))
                if answer == correct_answer:
                    correct += 1
                    break
                else:
                    print("EEE")
                    attempts += 1
            except ValueError:
                print("EEE")
                attempts += 1

        if attempts == 3: #prints correct answer after 3 attempts
            print(f"{correct_answer}.")

        counter += 1

    return counter, correct #returns the answers given correctly and the number of questions asked

if __name__ == "__main__":
    main()
