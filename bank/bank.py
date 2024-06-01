# aim is to code a programme that shows how much money will be deducted in case of different greetings from back manager


def main():
    message = str(input("greeting:")).strip().lower()#getting input greeting and removing whitespaces and making everything lowercase for comparision
    with_hello(message)#calling the function in main 


def with_hello(message): #using a function to check and give the amount on the basis of the greeting
    if message[0:5] == "hello":
        print("$0")
    elif message[0] == "h":
        print("$20")
    else:
        print("$100")

main()

