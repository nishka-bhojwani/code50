# to write a functin that converts :) to 🙂  and :( to🙁

def main():
    message = str(input("Write your message: " ))
    print(convert(message))


# takes input (old ) and converts the required characters (new) then returns that value 
def convert(old):
    new = old.replace(":(","🙁").replace(":)","🙂")
    return new

main()
