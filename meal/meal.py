

def main():
    time = str(input("What time is it? ")).strip() # taking user input
    if 7.0 <= convert(time) <= 8.0:
        print("breakfast time")
    elif 12.0 <= convert(time) <= 13.0:
        print("lunch time")
    elif 18.0 <= convert(time) <= 19.0:
        print("dinner time")
    else:
        exit



def convert(time):
    time = time.split(":")
    hours = float(time[0]) #taking the first string after splitting and storing it in hours
    minutes = float(time[1]) #taking the second string after splitting and storing it in minutes
    return (hours+(minutes/60)) #returning a float number 



if __name__ == "__main__":
    main()
