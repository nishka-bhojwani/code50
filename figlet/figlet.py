from pyfiglet import Figlet
import sys
from random import choice

figlet = Figlet()

if len(sys.argv)==1 or len(sys.argv)==3 :
    text = str(input("Input :"))
    if len(sys.argv)==1:
        f = choice(figlet.getFonts())
        figlet.setFont(font=f)
        print(f"Output: {figlet.renderText(text)}")




#elif len(sys.)
    #text = str(input("Input: "))





