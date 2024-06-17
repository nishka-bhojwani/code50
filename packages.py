#pip is a programme that comes with python which allows you to import packages
#PyPI - webpage eith all packages

import cowsay
import sys

if len(sys.argv) == 2:
    cowsay.cow("hello, " + sys.argv[1])
