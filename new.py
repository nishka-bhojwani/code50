"""#creating a variable that stores a value
name = input("whats your name? ") # input function takes an argument from command line and copies that from right to left
# input is stored in that variable i.e. name
print("hello",name , sep = "" ) #print function used by new.py , argument is what we input in the parenthesis , side effect - display of hello world , bugs - mistakes

print("hello," , end = "" )
print(name)
print ("hello , \"friend\"")# represents escape charecter


#strip - to remove white spaces
#title for making the first letter of all words capital
name = name.strip()
print(name)
"""
#using f string
# split gives the first word before a space is used
name = input("What is your name ? ").strip().title()
first, last = name.split(" ")
print(f"hello,{first}")
