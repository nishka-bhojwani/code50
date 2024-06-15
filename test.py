def main():
    while True:
        user = input("Fraction: ")
        new = user.split("/")

        # Check if input can be split correctly
        while len(new) != 2:
             user = input("Fraction: ")
             new = user.split("/")


        try:
            # Ensure that both the numerator and denominator are fractions 
            new1 = int(new[0])
            new2 = int(new[1])

            # Calculate the fraction
            fraction = new1 / new2

            # loop to check the range of fraction and print the given percentages based on the fraction
            if 0 < fraction < 1:
                print(f"{fraction * 100:.0f}%")
                break
            elif fraction == 0:
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
