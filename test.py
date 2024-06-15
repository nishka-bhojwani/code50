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

            # Calculating the fraction
            fraction = new1 / new2

            # conditionals  to check the range of fraction and print the given percentages based on the fraction
            if 0 < fraction < 1:
                print(f"{fraction * 100:.0f}%")
                break
            elif fraction == 0:
                print("E")
                break
            elif fraction == 1:
                print("F")
                break

            # handling the errors
        except ValueError: #keeps prompting the user if the numerator and denominator are not integers
            pass
        except ZeroDivisionError:#keeps prompting the user if the denominator is zero 
            pass





main()
