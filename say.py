import sys

from sayings import hello
from sayings import goodbye

if len(sys.argv)==3:
    hello(sys.argv[1])
    goodbye(sys.argv[2])
