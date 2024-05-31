# to write a functin that converts :) to 🙂  and :( to🙁

def main(message):
    message = str(input("Write your message: " ))
    print(convert(message))



def convert(str(input)):
    new = input.replace(":)","🙂")
    new = input.replace(":(","🙁")
    return new

