thought = str(input("What is the Answer to the Great Question of Life, the Universe, and Everything? ")).lower()
#checking if the input is 42 , forty two or forty-two and henceforth returning yes or no 
if thought == "42" or thought == "forty-two" or thought == "forty two":
    print("Yes")
else:
    print("No")
