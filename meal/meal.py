

def main():
    if convert()



def convert(time):
    time = str(input("What time is it? ")).strip().split(":")
    hours = float(time[0])
    minutes = float(time[1])
    return (hours+(minutes/60))






if __name__ == "__main__":
    main()
