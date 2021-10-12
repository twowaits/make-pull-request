"""
ZIGZAG PROBLEM
- Take input of number of rows and columns
- Print the zig-zag pattern accordingly

Author: aryamaanthakur
Date: 02-10-2021
"""

print("Enter the number of rows and columns(m n): ", end="")
m, n = map(int, input().split())
# taking input for number of rows and columns

pattern = [[0]*n for i in range(m)]
# empty list of size m by n

step = 1 # for incrementing or decrementing row counter
row=0

for col in range(n):
    pattern[row][col] = col+1
    if (row == m-1):
        step=-1
        # if row reaches the bottom, change step to -1
    elif (row == 0):
        step=1
        # if row reaches the top, change step to -1
    row+=step # add step to row counter

max_width = len(str(n))
# maximum characters which can be occupied by a number
# this will be used for correct formatting of pattern

for row in pattern:
    for i in row:
        if (i==0):
            print(" "*max_width, end="")
            # if the position is empty, print spaces
        else:
            print(str(i)+" "*(max_width - len(str(i))), end="")
            # printing the number with appropriate spaces at its end
    print()
