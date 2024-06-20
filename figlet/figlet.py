from pyfiglet import Figlet
import sys
from random import choice

figlet = Figlet()

if len(sys.argv)==1 or len(sys.argv)==3 :
    if len(sys.argv)==1:
        text = str(input("Input :"))
        f = choice(figlet.getFonts())
        figlet.setFont(font=f)

    elif len(sys.argv)==3 and(sys.argv[1] == "-f" or sys.argv[1]=="--font") and sys.argv[2] in figlet.getFonts():
            text = str(input("Input: "))
            figlet.setFont(font=sys.argv[2])
    else:
            print("Invalid usage")
            sys.exit()


    print(f"Output: {figlet.renderText(text)}")
else:
    print("Invalid usage")
    sys.exit()





#elif len(sys.)
    #text = str(input("Input: "))





