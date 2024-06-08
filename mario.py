def main():
    print_square(3)




'''def print_square(size):
        for i in range(size): #for each row in square
              for j in range(size): #for each brick in row
                    print("#",end="") # on the same line


                           print()  #new line after the first row of bricks is finished

'''
def print_square(size):
    for i in range(size):
        print("#"*size)

main()
