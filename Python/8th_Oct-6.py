print("Enter number of rows : ")
rows=int(input())
for i in range(rows):
    for j in range(rows-i):
        print(" ", end='')
    for j in range(0,2*i+1):
        if j==0 or j==2*i or i==rows-1:
            print("*",end='')
        else:
            print(" ",end='')
    print()