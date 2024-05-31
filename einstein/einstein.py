# to get mass as input and print energy based on formula E=mc^2

c = 300000000 #defining approximate speed of light
mass = int(input("m: ")) # taking mass as an input (int)
energy = mass*(c**2) #calculating energy

print(f"E:{energy}")

