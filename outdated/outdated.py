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
        elif " " and "," in date:
            date_new = date.split(" ").split(",")
except ValueError:
    pass
