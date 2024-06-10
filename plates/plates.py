def main():
    plate = input("Plate: ")
    if is_valid(plate):
        print("Valid")
    else:
        print("Invalid")


def is_valid(s):
    if s.isalnum() and 2<=len(s)<=6:
        if len(s) ==2:
            if s[0]




main()
