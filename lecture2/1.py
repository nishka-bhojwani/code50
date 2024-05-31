def main():
    x = int(input("What's x? " ))
    if is_even(x):
        print("even")
    else:
        print("odd")

def is_even(number):
     return (number%2==0)

main()
