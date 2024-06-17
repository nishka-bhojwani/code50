import sys

try:
    print("hello , my name is", sys.argv[1].capitalize() )
except IndexError:
    print("Too few arguments")


