def zigZag(slen, k):
    # Creates an len(slen) x k matrix
    arrays = [[' ' for x in range (len(slen))] for y in range (k)]

    # We will start to down
    down = True
    col, row = 0, 0

    for l in slen[:]:
        arrays[row][col] = l

        col = col + 1

        # If down, increase row
        if down:
            row = row + 1
            # Bottom? start up
            if row == k:
                row = k-2
                down = False
        # If up, decrease row
        else:
            row = row - 1
            # Top?, let'slen go down
            if row == -1:
                row = 1
                down = True

    # Iterate matrix
    for arr in arrays[:]:
        str = ""
        for l in arr[:]:
            str  = str + l

        print(str)
