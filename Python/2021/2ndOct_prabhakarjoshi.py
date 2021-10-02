import numpy as np

rw,cl=(input().split(' '))
rw=int(rw)
cl=int(cl)
arr = np.zeros([rw,cl],dtype = int)
n,c,i,j = 0,0,0,0
while j <= cl-1:
    if i<=rw-1 and c == 0:
        n = n + 1
        arr[i][j] = n
        if i == rw - 1 :
            i = i - 1
            j = j + 1
            c = 1
        else:
            i = i + 1
            j = j + 1
    elif (i<rw-1 and i>=0) and c == 1:
        n = n + 1
        arr[i][j] = n
        if i == 0:
            i = i + 1
            j = j + 1
            c = 0
        else:
            i = i - 1
            j = j + 1 
for i in range(rw):
    for j in range(cl):
        if(arr[i][j] == 0):
            print(" ",end =" ")
        else:
            print(arr[i][j],end =" ")
    print()