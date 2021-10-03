def printZigZag(slen, k):
    arrays = [[' ' for x in range (len(slen))] for y in range (k)]
    down = True
    col, row = 0, 0

    for l in slen[:]:
        arrays[row][col] = l
        col = col + 1
        if down:
            row = row + 1
            if row == k:
                row = k-2
                down = False
        else:
            row = row - 1
            if row == -1:
                row = 1
                down = True

    for arr in arrays[:]:
        s = ""
        for l in arr[:]:
            s  =  s + l

        print(s)