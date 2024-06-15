menu = {
        "Baja Taco": 4.25,
        "Burrito": 7.50,
        "Bowl": 8.50,
        "Nachos": 11.00,
        "Quesadilla": 8.50,
        "Super Burrito": 8.50,
        "Super Quesadilla": 9.50,
        "Taco": 3.00,
        "Tortilla Salad": 8.00
        }

try:
    Total = 0
    while True:
        item = str(input("Item:")).title()
        if item in menu:
               new = menu[item]
        else:
            continue
        Total = Total+ new
        print(f"Total: {Total}")


except EOFError:
    exit
    print("\n")

except KeyError:
    pass
