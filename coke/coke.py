#taking user input (only integers 25, 5 and 10 are accepted )

amount = int(input("Amount due: "))
if amount==50:
    coin1 = int(input("Insert coin: " ))
    while coin1 not in [25,5,10]:
        coin1 = int(input("Insert coin: " ))
    amount_due = int(input(f"Amount due: {amount}-{coin1}"))
    if amount_due =! 0:
        coin2 = int(input("Insert coin: "))
    while coin2 not in [25,5,10]:
        coin2 = int(input("Insert coin: " ))
    amount_due = int(input(f"Amount due: {amount}-{coin2}"))
    if amount_due != 0 :
        print






