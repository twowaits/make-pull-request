# @file Solution-1.py
# @author Koushik
# @brief Zigzag problem from Hacktoberfest @2021
# @version 0.1
# @date 2021-10-04
#
# @copyright Copyright (c) 2021
#

row, col = input().split()

row = int(row)
col = int(col)

down = 0
up = (row * 2) - 2


# Display Zigzag pattern
def zigzag_print(row, col, next_up, next_down):
    for i in range(row):
        for j in range(col):
            # To down 👇
            if i == j or i + next_down == j:
                print(f'{j + 1}', end=' ')
                next_down += (row * 2) - 2
            elif (i > 0 and i < row - 1) and next_up - i == j:  # To up 👆
                print(j + 1, end='')
                next_up += (row * 2) - 2
            else:
                print('  ', end='')
        print()
        next_down = 0
        next_up = (row * 2) - 2


zigzag_print(row, col, up, down)
