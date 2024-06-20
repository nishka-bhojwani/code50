
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

new_name = inflect.join(names[0:len(names)])
print(f"\n Adieu, adieu, to {new_name}")



