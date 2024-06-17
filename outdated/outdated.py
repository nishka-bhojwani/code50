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
            if len(date_new) == 3 and 1<= int(date_new[0]) <=12 and 0<=int(date_new[2]) <=31:
                print(f"{date_new[2]}-{int(date_new[0]):02}-{int(date_new[1]):02}")
                break
            else:
                pass
        elif " " and "," in date:
            date_new = date.split(" ")
            date_new[1] = date_new[1].strip(",")
            print(date_new)
            if len(date_new)==3 and date_new[0] in months:
                print(f"{date_new[2]}-{(date_new[0].index()+1):02}-{int(date_new[1]):02}")
            else:
                pass

        else:
            pass

except ValueError:
    pass
