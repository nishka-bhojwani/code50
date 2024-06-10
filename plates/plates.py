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
        elif len(s) == n:
            for char in s[0:n-1]:
                if char.isdigit():
                    return False
                else:
                    return True
        n= n+1
    else:
        return False







main()
