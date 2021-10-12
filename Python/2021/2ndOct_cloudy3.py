rows = int(input("Enter number of rows: "))
columns = int(input("Enter number of columns: "))
print()

# Create a 2D array of [rows][columns] and fill them with 0
zigzag_array = [[0] * columns for i in range(rows)]

jump = 1
row = 0

for col in range(columns):
    # Increment the number in the zigzag
    zigzag_array[row][col] = col + 1

    if (row == rows-1):
        # Go up the zigzag
        jump = -1
    elif (row == 0):
        # Go down the zigzag
        jump = 1

    row += jump

width = len(str(columns))

for row in zigzag_array:
    for j in row:
        if (j == 0):
            # Fills up with " "
            print(" " * width, end = "")
        else:
            # Fills remaining width with " "
            print(str(j) + " " * (width - len(str(j))), end="")
    # Goes to the next row
    print()
