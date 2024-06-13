

def main():
    user = str(input("Fraction: "))
    new = user.split("/")
    try:
        new1 = int(new[0])
        new2 = int(new[1])
    



    while (new1/new2 )<0 or (new1/new2)>1:
        user = str(input("Fraction: "))
    print(f"{(new1/new2)*100}%")






main()





