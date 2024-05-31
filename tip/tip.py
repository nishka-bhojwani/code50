def main():
    dollars = dollars_to_float(input("How much was the meal? "))
    percent = percent_to_float(input("What percentage would you like to tip? "))
    tip = dollars * percent
    print(f"Leave ${tip:.2f}")


def dollars_to_float(d):
    d = d.replace("$","") #replacing $ with no charecter
    d = float(d) # converting it to float for calculation
    return d # returning the float value of d 


def percent_to_float(p):
    # TODO
    p = p.replace("%","")#replacing % with no charecter
    new_p = float(p) # convertung to float and storing it in new_p
    return(new_p/100) # returning decimal value of the given percent


main()
