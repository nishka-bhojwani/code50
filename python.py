'''i = 0
while i < 3:
    print("meow")
    i = i+1

m = 3
while m > 0 :
    print("meow")
    m = m - 1


for i in range(3):
    print("meow")


print("meow\n"*3,end = "")
'''
# to prompt user again and again for a particular type of input (positive integer in this case)


def main():
   number = get_number()
   meow(number)

def get_number():
    while True:
     n = int(input("What is n ? "))
     if n > 0:
        return n



def meow(n):
   for _ in range(n):
    print("meow")

main()
