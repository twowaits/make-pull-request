import numpy as np

# take input of number of rows and columns from user
rows = int(input("Enter number of rows "))
cols = int(input("Enter number of columns "))

# Creating output array of zeros of size rows x cols
arr = np.zeros([rows,cols],dtype = int)

# initializing variables to 0
num = 0 # value initially is set to 0
flag = 0 # flag to check if the zig zag is going upwards or downwards
i = 0 # row pointer
j = 0 # column pointer

# while j not equal to total no. of columns
while j <= cols-1:
    # if we reach last row, then go up and until we reach last row, keep increamenting row and col
    if i<=rows-1 and flag == 0:
        num = num + 1
        arr[i][j] = num
        if i == rows - 1 :
            i = i - 1
            j = j + 1
            flag = 1
        else:
            i = i + 1
            j = j + 1
    # if we reach first row, then start climbing down again
    elif (i<rows-1 and i>=0) and flag == 1:
        num = num + 1
        arr[i][j] = num
        if i == 0:
            i = i + 1
            j = j + 1
            flag = 0
        else:
            i = i - 1
            j = j + 1 

# print the output
for i in range(rows):
    for j in range(cols):
        if(arr[i][j] == 0):
            print(" ",end =" ")
        else:
            print(arr[i][j],end =" ")
    print()      
