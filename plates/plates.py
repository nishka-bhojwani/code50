def main():
    plate = input("Plate: ")
    if is_valid(plate):
        print("Valid")
    else:
        print("Invalid")


def is_valid(s):
    if s.isalnum() and 2<=len(s)<=6:
        if len(s) ==2:
            if s[0].isdigit() or s[1].isdigit()  :
                return False
            else:
                return True
        elif len(s) == 3:
            if s[1].isdigit()==True or s[0].isdigit()==True:
                return False
            elif  s[2].isdigit() == True and s[1]!=0 :
                return True
            else:
                return True
        elif len(s)==4:
            if s[1].isdigit() or s[0].isdigit():
                return False
            if s[2].isdigit() and s[3].isdigit():
                return True
            if s.isalpha():
                return True
            if s[2].isdigit() == False and s[3].isdigit():
                return True
            else:
                return False
        elif len(s) == 5:
             if s.isalpha():
                return True
             if s[1].isdigit() or s[0].isdigit():
                return False
             if s[2].isdigit() and s[3].isdigit() and s[4].isdigit():
                return True
             if s[2].isdigit() == False and s[3].isdigit()and s[4].isdigit:
                return True
             if s[2].isdigit() == False and s[3].isdigit()==False and s[4].isdigit:
                 return True
             else:
                return False
        elif len(s) == 6:
             if s.isalpha():
                return True
             if s[1].isdigit()==False and s[0].isdigit()==False:
                return True
             if s[2].isdigit() and s[3].isdigit() and s[4].isdigit() and s[5].isdigit():
                return True
             if s[2].isdigit() == False and s[3].isdigit()and s[4].isdigit and s[5].isdigit():
                return True
             if s[2].isdigit() == False and s[3].isdigit()==False and s[4].isdigit and s[5].isdigit():
                 return True
             if s[2].isdigit() == False and s[3].isdigit()==False and s[4].isdigit==False and s[5].isdigit():
                 return True
             else:
                return False





main()
