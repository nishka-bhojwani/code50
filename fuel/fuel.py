

def main():
    user = str(input("Fraction: "))
    new = user.split("/")
    
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
            else:
                print("Fraction should be between 0 and 1. Try again.")

        except ValueError:
            print("Invalid input. Please enter integers in the form 'numerator/denominator'.")
        except ZeroDivisionError:
            print("Denominator cannot be zero. Try again.")

main()




main()





