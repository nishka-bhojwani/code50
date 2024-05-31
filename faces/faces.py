# to write a functin that converts :) to 🙂  and :( to🙁

def main():
    message = str(input("Write your message: " ))
    print(convert(message))



def convert(old):
    new = old.replace(":)","🙂")
    new = old.replace(":(","🙁")
    return new

main()
