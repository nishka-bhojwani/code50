

def main():
    user = str(input("Fraction: "))
    new = user.split("/")\
    new1 = int(new[0])
    new2 = int(new[1])

    while (new1/new2 )> 1:
        user = str(input("Fraction: "))
    print(f"{(new1/new2)*100}%")




def second(y):
    while True:
        try:
            return y
            break
        except ZeroDivisionError:
            pass
        except ValueError:
            pass

main()





