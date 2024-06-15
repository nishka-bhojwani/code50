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
    while True:
        item = str(input("Item:")).title()
        Total = 0
        if item in menu:
            Total = Total + menu[item]
            print(f"Total: {Total}")
        else:
            continue


except EOFError:
    exit
    print("\n")

except KeyError:
    pass
