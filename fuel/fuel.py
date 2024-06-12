

def main():
    user = str(input("Fraction: "))
    new = user.split("/")
    new1 = int(new[0])
    new2 = int(new[1])
    first(new1)
    second(new2)
    

def first(x):
    while True :
        try :
            return int(input(x))
        except ValueError:
            pass


def second(y):
    while True:
        try:
            return int(input(y))
        except ZeroError:
            pass
        except





