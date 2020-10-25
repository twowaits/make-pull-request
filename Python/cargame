command = ""
started= False
while True:
    #Lower case we can declare here so that we dont need to write all the time. 
    command =input("> ").lower()

    if command == "start":
        if started:
            print("Car is already started")
            #Boolean valu true & false formate
        else:
            started = True
            print ("Car started....")

    elif command == "stop":
        if not started:
            print("Car is Already stoped")
        else:
            started = False
            print("Car stopped.")

    elif command == "help":
        #trepple quatation " help you to write exactly what you write
        print("""
 start -- to start the car
 stop -- to stop the car
 quit -- to quit the game        
        """)
    elif command == "quit":
        break

    else: 
        print("Sorry, i don't understand what you mention")

        
    pass
