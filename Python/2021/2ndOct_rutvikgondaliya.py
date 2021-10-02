# created by rutvik gondaliya
# problem: ZigZag pattern
# date: 2-10-21


def createZigzag(row, col):
    zigzag = [[" " for i in range(col)] for j in range(row)]

    i = 0
    j = 0
    stepup = 1
    stepdown = False
    while j < col:
        zigzag[i][j] = stepup
        if (i == n-1 or i == 0):
            stepdown = not stepdown
        if(stepdown):
            i = i+1
        else:
            i = i-1
        j = j+1
        stepup = stepup + 1

    return zigzag


def printZigzag(zigzag, row, col):
    for i in range(0, row):
        for j in range(0, col):
            print(zigzag[i][j], end=" ")
        print("\n")


row, col = map(int, input().split())
zigzag = createZigzag(row, col)
printZigzag(zigzag, row, col)
