
import inflect
names=[]
while True:
    try:
        name = str(input("Name: "))
        names.append(name)
    except EOFError:
        break
    except ValueError:
        break


print(f"\n{names}")



