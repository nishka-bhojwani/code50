def main():
    plate = input("Plate: ")
    if is_valid(plate):
        print("Valid")
    else:
        print("Invalid")


def is_valid(s):
    n = int(3)
    if s.isalnum() and 2<=len(s)<=6:
        if len(s) ==2:
            if s[0].isdigit():
                return False
            else:
                return True
        elif len(s) == 3:
            if s[1].isdigit()==True :
                return False
            elif  s[2].isdigit() == True:
                return True
            else:
                return True
    else:
        return False







main()
