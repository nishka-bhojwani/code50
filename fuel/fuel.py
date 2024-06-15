while True: #to create a loop to keep promting the user
    fuel= str(input("Fraction: "))
    new = fuel.split("/")
    while len(new) != 2:#only allowing proper input i.e of the form numerator/denominator
         fuel= str(input("Fraction: "))
         new = fuel.split("/")

    #trying to check whether the inputed numerator(new1) and denominator(new2) are integers or not
    try:
         new1 = int(new[0])
         new2 = int(new[1])

    # calculating the fraction
         fraction = new1/new2
     #conditions to check the input fraction and print the o/p percentage
         if 0<fraction<1:
            print(f"{fraction*100:.0f}%")
            break # to exit the loop once
         elif fraction==0 or (fraction*100)<=1:
            print("E")
            break
         elif fraction == 1 (fraction*100)>=99:
            print("F")
            break

#handling the errors
    except ValueError:
        pass
    except ZeroDivisionError:
        pass








