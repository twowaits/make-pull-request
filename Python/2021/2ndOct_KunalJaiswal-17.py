#implementing the zigzag problem

def zigzag(row,col):
    strings = []

    for i in range(1,row+1):
        strings.append("")
        strings[i-1] = " "*((i-1)*2) + str(i) + " "*((row-i-1)*4+3)

    n = min(col,(2*row)-1)
    j = 0

    for i in reversed(range(row+1,n+1)):
        strings[j] += str(i)
        j += 1
    if (col-((2*row)-1)) > 0:
        n = (col-((2*row)-1))
        for i in range(1,n+1):
            strings[i] += " "*(4*i-2) + str(i+(2*row)-1)

    for i in range(1,row+1):
        print(strings[i-1])


row = int(input('rows: '))
col = int(input('columns: '))
zigzag(row,col)

