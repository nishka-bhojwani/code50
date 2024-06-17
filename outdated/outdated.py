#taking specific input from user else reprompt
months = [
    "January",
    "February",
    "March",
    "April",
    "May",
    "June",
    "July",
    "August",
    "September",
    "October",
    "November",
    "December"
]

try:
    while True:
        date = str(input("Date: "))
        if "/" in date:
            date_new = date.split("/")
            if len(date_new) == 3 and 1<= int(date_new[0]) <=12 :
                print(f"{int(date_new[0]):02}-{int(date_new[1]):02}-{date_new[2]}")
                break
            else:
                pass
        elif " " and "," in date:
            date_new = date.split(" ")
            date_new[1] = date_new[1].strip(",")
            print(date_new)

        else:
            pass

except ValueError:
    pass
