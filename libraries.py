#random.py has built in functions , like flipping a coin , picking a random number
#import keyword allows you to import functions from a library
#seq is like a list
#problem to simulate a coin , 50% probability

import random
#random - module , choice - function
coin = random.choice(["heads","tails"])
print(coin)


# from - can import a particular function from a module

from random import choice

coin = choice(["heads","tails"])
print(coin)
