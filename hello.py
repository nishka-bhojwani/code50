
#defining a function called hello which prints hello when called
def hello(to="world"): #to is the parameter , default value is world(if nothing is inputed)
    print(f"hello, {to}")


def main():
    name = input("Whats your name? ")
    hello(name) #name is essentially copied to the variable "to"
    hello()

#defining a function called hello which prints hello when called
def hello(to="world"): #to is the parameter , default value is world(if nothing is inputed)
    print(f"hello, {to}")

main() #calling main function 
