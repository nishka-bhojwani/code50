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
            print(date_new)
            break
        elif " " and "," in date:
            date_new = date.split(" ")
            date_new2 = date_new[1].split(",")
            print(date_new[0] , date_new2)
            break
        else:
            pass

except ValueError:
    pass
