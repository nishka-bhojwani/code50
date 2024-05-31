name = input("What's your name? ")

match name:
    case "Harry"|"Hermione" | "ron":
        print("gryfindor")
    case "Draco":
        print("Slytherin")
    case _:
        print("Who?")
