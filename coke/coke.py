#taking user input (only integers 25, 5 and 10 are accepted )

amount = int(input("Amount due: "))
if amount==50:
    coin = int(input("Insert coin: "))
    while coin not in [25,15,10]:
        coin = int(input("Insert coin: "))
    amount_due = amount-coin
    print(f"Amount due: {amount_due}")
    while amount_due > 0:
        coin = int(input("Insert coin: "))
        amount_due = amount - coin
    if
