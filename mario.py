def main():
    print_square(4)

def print_square(size):
        for i in range(size): #for each row in square
              for j in range(i): #for each brick in row
                    print("#",end="") 
                print()
main()
