n,l = list(map(int,input().split()))
for i in range(1,n+1):
    print("  "*(i-1),end="")
    count =i
    while count <=l:
        print(count ,end="")
        v2=count %(n-1)
        if (v2==0): 
            v2=(n-1)
        count +=(n-v2)*2
        print("  "*((n-v2)*2-1),end="")
    print()
