#creating a dictionary to store all the key value pairs.

fruits = {"apple":130 , "avocado":50 , "banana":110 , "cantaloupe":110, "grapefruit":60 , "grapes":90 , "honeydrew melon" : 50 , "kiwifruit" : 90 , "lemon" : 15 ,
          "lime": 20 , "nectarine": 60 , "orange" : 80 , "pear":100 , "peach" : 60 , "pineapple":50 , "plums":70 , "strawberries" : 50 , "sweet cherries " : 100 , "tangerine" : 50 ,
          "watermelon" : 80 }

#taking input from user as string i.e. the fruit
name = str(input("Item: " )).lower()

# checking whether the inputed fruit is in the list and thereby printing teh required value 
if name in fruits:
    print(f"Calories : {fruits[name]}")
else:
    print("please enter a fruit")


