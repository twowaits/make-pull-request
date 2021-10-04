# ZigZag Problem
row, col = [int(x) for x in input().split()]
# Printing the pattern
for it in range(1, row+1):
    print("  "*(it-1), end="")
    comp = it
    while comp <= col:
        print(comp, end="")
        zigzag = comp % (row-1)
        if(zigzag == 0):
            zigzag = (row-1)
        comp += (row-zigzag)*2
        print("  "*((row-zigzag)*2-1), end="")
    print()
