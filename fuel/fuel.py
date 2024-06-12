

def main():
    user = str(input("Fraction: "))
    new = user.split("/")
    new1 = int(new[0])
    new2 = int(new[1])
    first(new1)
    second(new2)
    while (new1/new2 )> 0:
        user = str(input("Fraction: "))
    print(f"{(new1/new2)*100}%")

def first(x):
    while True :
        try :
            return int(input(x))
            break
        except ValueError:
            pass


def second(y):
    while True:
        try:
            return int(input(y))
            break
        except ZeroDivisionError:
            pass
        except ValueError:
            pass

main()





