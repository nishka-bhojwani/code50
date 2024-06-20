while True:

    try:
        level = int(input("Level: "))
        if 4<=level<=0:
            continue
        else:
            break
    except ValueError:
        continue
