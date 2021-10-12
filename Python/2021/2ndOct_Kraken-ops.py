#!/usr/bin/env python
# coding: utf-8

# In[2]:


print("Enter the number of rows and columns : ", end="")
m, n = map(int, input().split())

pattern = [[0]*n for i in range(m)]

step = 1 
row=0

for column in range(n):
    pattern[row][column] = column+1
    if (row == m-1):
        step=-1
    elif (row == 0):
        step=1
    row+=step

maxWidth = len(str(n))

for row in pattern:
    for i in row:
        if (i==0):
            print(" "*maxWidth, end="")
        else:
            print(str(i)+" "*(maxWidth - len(str(i))), end="")

    print()

