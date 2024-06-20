from pyfiglet import Figlet
import sys
from random import choice

figlet = Figlet()

if len(sys.argv)==1 or len(sys.argv)==3 :
    text = str(input("Input :"))
    if len(sys.argv)==1:
        f = choice(figlet.getFonts())
        figlet.setFont(font=f)

    elif len(sys.argv)==3:
        if (sys.argv[2] == "-f" or sys.argv[2]=="--font") and sys.argv[3] in figlet.getFonts():
            figlet.setFont(font=sys.argv[3])


    print(f"Output: {figlet.renderText(text)}")





#elif len(sys.)
    #text = str(input("Input: "))





