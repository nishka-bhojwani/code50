def main():
    while True:
        user = input("Fraction: ")
        new = user.split("/")

        # Check if input can be split correctly
        if len(new) != 2:
            print("Invalid input. Please enter in the form 'numerator/denominator'.")
            continue

        try:
            # Ensure both parts are integers
            new1 = int(new[0])
            new2 = int(new[1])

            # Calculate the fraction
            fraction = new1 / new2

            # Ensure the fraction is within the valid range (0, 1]
            if 0 <= fraction <= 1:
                print(f"{fraction * 100:.0f}%")
                break
            

        except ValueError:
            print("Invalid input. Please enter integers in the form 'numerator/denominator'.")
        except ZeroDivisionError:
            print("Denominator cannot be zero. Try again.")

main()
