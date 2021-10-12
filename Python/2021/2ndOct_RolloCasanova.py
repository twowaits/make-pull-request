# Function to print given string in the zigzag form in `k` rows
def printZigZag(s, k):
    # Creates an len(s) x k matrix
    arrays = [[' ' for x in range (len(s))] for y in range (k)]

    # Indicates if we are going downside the zigzag
    down = True

    # Initialize the row and column to zero
    col, row = 0, 0

    # Iterate over all word's letters
    for l in s[:]:
        arrays[row][col] = l

        # col always increases
        col = col + 1

        # If going down, increase row
        if down:
            row = row + 1
            # Already at the bottom? let's go up
            if row == k:
                row = k-2
                down = False
        # If going up, decrease row
        else:
            row = row - 1
            # Already at top, let's go down
            if row == -1:
                row = 1
                down = True

    # Iterate over all k arrays in matrix
    for arr in arrays[:]:
        # Set str to empty string
        str = ""

        # Iterate over each letter in array
        for l in arr[:]:
            # Concatenate letters on array
            str  = str + l

        # Print str
        print(str)

# if __name__ == '__main__':
#     s = 'THISZIGZAGPROBLEMISAWESOME'
#     k = 3

#     printZigZag(s, k)
