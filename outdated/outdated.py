#taking specific input from user else reprompt
months= [
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
            if len(date_new) == 3 and 1<= int(date_new[0]) <=12 and 0<=int(date_new[1])<=31 :
                print(f"{date_new[2]}-{int(date_new[0]):02}-{int(date_new[1]):02}")
                break
            else:
                continue
        elif " " and "," in date:
            date_new = date.split(" ")
            date_new[1] = date_new[1].strip(",")
            date_new[0] = date_new[0].capitalize()
            if len(date_new)==3 and date_new[0] in months and len(date_new[2])==4 and 1<=int(date_new[1])<=31:
                month_index = months.index(date_new[0]) + 1
                print(f"{date_new[2]}-{month_index:02}-{int(date_new[1]):02}")
                break
            else:
                pass

        else:
            pass

except ValueError:
    pass


