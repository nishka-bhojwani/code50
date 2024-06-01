# aim is to code a programme that shows how much money will be deducted in case of different greetings from back manager


def main():
    message = str(input("greeting:"))
    with_hello(message)
    print(message[0])

def with_hello(message):
    if message[0:] == "hello":
        print("$0")
    elif message[0][0] == "h":
        print("$20")
    else:
        print("$100")

main()

