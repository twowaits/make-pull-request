n=int(input("enter number of rows:"))
for row in range(1,n+1):
    for col in range(1,2*n):
        if row==n or row+col==n+1 or col-row==n-1:
          print("*",end="")
        else:
          print(end=" ")
    print()