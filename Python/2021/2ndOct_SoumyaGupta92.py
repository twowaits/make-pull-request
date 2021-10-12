print("Enter the number of rows and columns(a b): ", end="")
a, b = map(int, input().split())

list1 = [[0]*b for i in range(a)]

step = 1
row=0

for col in range(b):
    list1[row][col] = col+1
    if (row == a-1):
        step=-1
    elif (row == 0):
        step=1
    row+=step

max_width = len(str(b))

for row in list1:
    for i in row:
        if (i==0):
            print(" "*max_width, end="")
        else:
            print(str(i)+" "*(max_width - len(str(i))), end="")
    print()