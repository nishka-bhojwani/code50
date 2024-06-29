import random

def get_level():
    while True:
        level = input("Choose a level (1, 2, or 3): ")
        if level in ['1', '2', '3']:
            return int(level)
        else:
            print("Invalid input. Please choose 1, 2, or 3.")
