#taking user input (only integers 25, 5 and 10 are accepted )

amount = int(input("Amount due: "))
counter = 0
# if statement 
if amount==50:
    coin = int(input("Insert coin: "))
    while coin not in [25,5,10]:
        coin = int(input("Insert coin: "))
    amount_due = amount-coin
    print(f"Amount due: {amount_due}")
    while amount_due > 0 :
        coin1 = int(input("Insert coin: "))
        while coin1 not in [25,5,10]:
            coin1 = int(input("Insert coin: "))
        amount_due = amount_due - coin1
        if amount_due >= 0:
            print(f"Amount due: {amount_due}")
    change = int(-(amount_due))
    print(f"Change owed: {change}")
else:
    print("Invalid input")
