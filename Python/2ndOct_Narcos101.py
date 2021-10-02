import numpy as np #using numpy to store the output array of zeroes


# Code to take the input of number of rows and number of columns
rows = int(input("Enter number of rows "))
cols = int(input("Enter number of columns "))
arr = np.zeros([7,16],dtype = int)

#intialize all variables to zero

num = 0 #to store the value 
flag = 0 # when flag is set it goes upwards or else it goes downwards
i = 0 #i is for row
j = 0 #j is for column 

while j <= cols-1:
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


# Code to print the output
for i in range(rows):
    for j in range(cols):
        if(arr[i][j] == 0):
            print(" ",end =" ")
        else:
            print(arr[i][j],end =" ")
    print()      