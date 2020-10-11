l=[]
real=[]
while (True):
    
    userinput=input("enter your string\n")
    
    p=userinput[::-1]
    
    real.append(userinput)
    l.append(p)
    print(p)
    print("press 1 if you want to exit or press 2 for continue ")
    press=int(input())
    if(press==1):
        print("the real strings are!!\n")
        print(real)
        
        print("the final reversed strings are\n")
        print(l)
        break
    else:
        q=p
