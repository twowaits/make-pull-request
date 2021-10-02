import numpy as np

rw = int(input("Enter The Number of Rows:-  "))
cl = int(input("Enter The Number of Columns:-  "))
arr = np.zeros([rw,cl],dtype = int)
num = 0
flag = 0
i = 0
j = 0

while j <= cl-1:
    if i<=rw-1 and flag == 0:
        num = num + 1
        arr[i][j] = num
        if i == rw - 1 :
            i = i - 1
            j = j + 1
            flag = 1
        else:
            i = i + 1
            j = j + 1

    elif (i<rw-1 and i>=0) and flag == 1:
        num = num + 1
        arr[i][j] = num
        if i == 0:
            i = i + 1
            j = j + 1
            flag = 0
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
