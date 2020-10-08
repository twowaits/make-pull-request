n=int(input())
m=2*n-1
m1=int(m/2)
for i in range(n-1):
    for j in range(m):
        if(j==m1-i or j ==m1+i):
            print("*",end='')
        else:
            print(" ",end='')
    print()
for j in range(m):
    if(j%2==0):
        print("*",end='')
    else:
        print(" ",end='')
    
