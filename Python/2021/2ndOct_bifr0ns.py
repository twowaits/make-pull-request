def createSpiral(n, m):
    spiral = [[" " for i in range(m)] for j in range(n)]

    i = 0
    j = 0
    number = 1
    down = False
    while j < m:
        spiral[i][j] = number
        if (i == n-1 or i == 0):
            down = not down
        if(down):
            i = i+1
        else:
            i = i-1
        j = j+1
        number = number + 1

    return spiral


def printSpiral(spiral, n, m):
    for i in range(0, n):
        for j in range(0, m):
            print(spiral[i][j], end=" ")
        print("\n")


n, m = map(int, input().split())
spiral = createSpiral(n, m)
printSpiral(spiral, n, m)
