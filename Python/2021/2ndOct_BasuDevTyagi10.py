row, column = map(int,input().split())
outputList = [[' ']*column for _ in range(row)]

num = 1
i,j = 0,0
toggle = True
while num<=column:
    outputList[i][j]=num
    if toggle:
        if i+1<row:
            i+=1
        else:
            i-=1
            toggle = False
    else:
        if i-1>=0:
            i-=1
        else:
            i+=1
            toggle = True
    j+=1
    num+=1

for row in outputList:
    for x in row:
        print(x,end=" ")
    print()
