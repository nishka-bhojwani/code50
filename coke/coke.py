#taking user input (only integers 25, 5 and 10 are accepted )

print("Amount due: 50")
amount=50
coin = int(input("Insert coin: "))#taking first coin input
while coin not in [25,5,10]: # keep prompting till input is in 25,5,10
    print("Amount Due: 50")
    coin = int(input("Insert coin: "))
amount_due = amount-coin #calculating due amount and printing it
print(f"Amount Due: {amount_due}")
while amount_due > 0 : # checking if due amount is greater than zero and then asking for more coin inputs till it becomes zero
    coin1 = int(input("Insert coin: "))
    print(f"Amount Due: {amount_due}")
    while coin1 not in [25,5,10]:
        coin1 = int(input("Insert coin: "))
    amount_due = amount_due - coin1
    if amount_due >0:
        print(f"Amount Due: {amount_due}")
change = int(-(amount_due)) #calculating the change owed
print(f"Change Owed: {change}") # printing the change owed
