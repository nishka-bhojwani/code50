def main():
    fuel= str(input("Fraction: "))
    new = fuel.split("/")
    while len(new) != 2:
         fuel= str(input("Fraction: "))
         new = fuel.split("/")

    #trying to check whether the inputed numerator(new1) and denominator(new2) are integers or not
    try:
         new1 = int(new[0])
         new2 = int(new[1])

    # calculating the fraction
         fraction = new1/new2

         if 0<fraction<1:
            print(f"{fraction*100}%")
            break
         elif fraction==0:
            print("E")
            break
         elif fraction == 1:
            print("F")
            break

    except ValueError:
        pass
    except ZeroDivisionError:
        pass






main()

