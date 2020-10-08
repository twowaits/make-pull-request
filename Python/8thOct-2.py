n=int(input(""))
base=n+n-1
mid=base//2
for i in range(1,n):
    for j in range(0,base):
        if j==mid-i+1 or j==mid+i-1:
            print("*",end="")
        else:
            print(" ",end="")
    print()

for i in range(0,n):
    print("* ",end="")
