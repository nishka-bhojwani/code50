def main():
    plate = input("Plate: ")
    if is_valid(plate):
        print("Valid")
    else:
        print("Invalid")


def is_valid(s):
    if s.alunum():
        if 2<=s.len()<=6:
            print(s.len())
            if s.len()==2:
                


    else:
        return False



main()
