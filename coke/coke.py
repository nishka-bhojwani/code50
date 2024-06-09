#taking user input (only integers 25, 5 and 10 are accepted )

amount = int(input("Amount due: "))
counter = 0
if amount==50:
    coin = int(input("Insert coin: "))
    while coin not in [25,15,10]:
        coin1 = int(input("Insert coin: "))
    counter = coin
    amount_due = amount-coin
    print(f"Amount due: {amount_due}")
    while amount_due > 0:
        coin1 = int(input("Insert coin: "))
        amount_due = amount_due - coin1
        counter = coin + coin1
    change = int(amount - counter)
    print(f"Change due: {change}")
else:
    print("Invalid input")
