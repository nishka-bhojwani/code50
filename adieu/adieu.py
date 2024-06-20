
import inflect

while True:
    try:
        names=[]
        name = str(input("Name: "))
        names.append(name)
    except EOFError:
        exit
    except ValueError:
        exit

print(names)



