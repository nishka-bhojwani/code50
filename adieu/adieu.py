#from documentation of inflect 
import inflect

p = inflect.engine()

names=[] #creating an empty list called names
while True: #reprompting for names
    try: #trying to get names till ctrl d is pressed (EOF- error handling )
        name = str(input("Name: ")).strip().capitalize()
        names.append(name) #appending names in a list called names
    except EOFError: #breaking out of the while loop if ctrl d pressed
        break
    except ValueError:
        break

new_name = p.join(names) #using the method join the names
print(f"\nAdieu, adieu, to {new_name}")



