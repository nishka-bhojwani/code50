import sys

if len(sys.argv) < 2:
    sys.exit("Too few arguments")

for i in sys.argv[1:]:
    print("hello, my name is,", i )

