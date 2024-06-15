def main():
    while True:
        user = input("Fraction: ")
        new = user.split("/")

        # Check if input can be split correctly
        while len(new) != 2:
             user = input("Fraction: ")
             new = user.split("/")


        try:
            # Ensure both parts are integers
            new1 = int(new[0])
            new2 = int(new[1])
        except ValueError:
            pass
        except ZeroDivisionError:
            pass

            # Calculate the fraction
            fraction = new1 / new2

            # Ensure the fraction is within the valid range (0, 1]
            if 0 < fraction < 1:
                print(f"{fraction * 100:.0f}%")
                break
            elif fraction == 0:
                print("E")
            elif fraction == 1:
                print("F")




main()
