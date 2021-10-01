def numInRow(i, line, start, end):
    arr = [start]
    switch = False
    while True:
        if line != i or line != 0:
            if switch:
                ele = arr[-1] + 2*(i)
            else:
                ele = arr[-1] + 2*(line-i-1)
            switch = not switch
        else:
            ele = arr[-1] + 2*(line-1)

        if ele >= end:
            break
        else:
            arr.append(ele)
    return sorted(list(set(arr)))

def spaceBetween(a, b):
    print(' '*(b-a), end="")

def main(line, end):
    for i in range(line):
        spaceBetween(0, i)
        elements = numInRow(i,line,i,end+1)
        for j in range(len(elements)):
            if len(str(elements[j])) > 1:
                inend = ""
            else :
                inend = " "
            print(elements[j], end=inend)
            try:
                spaceBetween(elements[j], elements[j+1])
            except:
                pass
        print()

if __name__ == "__main__":
    main(7,16)
