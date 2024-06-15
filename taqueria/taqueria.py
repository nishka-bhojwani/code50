
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
    Total = 0 # creating a variable called total
    while True: #while loop to keep prompting for item till user exits
        item = str(input("Item: ")).title()
        if item in menu:
               new = menu[item] #cost of every item from menu
        else:
            continue
        Total = Total+ new #adding the cost of the item to the total
        print(f"${Total:.2f}") #printing the total with two decimal places

#exiting the programme also printing a new line.
except EOFError:
    exit
    print(" ")





