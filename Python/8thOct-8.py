n = int (input ())

gap = 1
for i in range(1,n+1):
    if i == 1:
        print ("*".center(n*2 - 1))
    elif i != n:
        print(((" "*gap).join("*"*2)).center(n*2-1))
        gap += 2
    else:
        print(" ".join("*"*n))
