
import inflect

p = inflect.engine()

names=[]
while True:
    try:
        name = str(input("Name: "))
        names.append(name)
    except EOFError:
        break
    except ValueError:
        break

new_name = p.join(names)
print(f"\nAdieu, adieu, to {new_name}")



