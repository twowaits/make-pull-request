def numInRow(i, rows, start, columns):
    arr = [start]
    switch = False
    while True:
        if rows != i or rows != 0:
            if switch:
                ele = arr[-1] + 2*(i)
            else:
                ele = arr[-1] + 2*(rows-i-1)
            switch = not switch
        else:
            ele = arr[-1] + 2*(rows-1)

        if ele >= columns:
            break
        else:
            arr.append(ele)
    return sorted(list(set(arr)))

def spaceBetween(a, b):
    print(' '*(b-a), end="")

def solve(rows, columns):
    for i in range(rows):
        spaceBetween(0, i)
        elements = numInRow(i,rows,i,columns+1)
        for j in range(len(elements)):
            if len(str(elements[j])) > 1:
                inend = ""
            else:
                inend = " "
            print(elements[j], end=inend)
            try:
                spaceBetween(elements[j], elements[j+1])
            except:
                pass
        print() 

inp = input().split(" ")
rows = int(inp[0])
columns = int(inp[1])
solve(rows, columns)