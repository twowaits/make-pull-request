row,col = map(int,input().split())

pattern = [[0]*col for i in range(row)]

i = 0
for j in  range(col):
    pattern[i][j] = j+1

    if i == 0:
        step = 1
    elif i == (row-1):
        step = -1

    i +=step

for i in range(row):
    for j in range(col):
        if pattern[i][j] == 0:
            print(" ",end="")
        else:
            print(pattern[i][j],end="")
    print()
