R,C= map(int,input().split())
for i in range(R):
    d=i+1
    x=2*(R-i)-3
    y=2*i-1
    print(" "*i,end="")
    print(d,end="")
    while(d<=C):
        if(x!=-1):
            print(" "*x,end="")
            d=d+x+1
            if(d<=C):
                print(d,end="")
        if(y!=-1):
            print(" "*y,end="")
            d=d+y+1
            if(d<=C):
                print(d,end="")

    print("\n")
    