# Author : Aditya Mathur
from itertools import cycle
from math import ceil, sqrt

# Getting the input
n = int(input("Enter the number ? "))

# Getting the number of rows and creating the array for the ouput
row = ceil(sqrt(n))
output = [['   ' for i in range(row)] for j in range(row)]

# Starting Cordinated (x, y), counting, no. of row
x, y, count, delta = 0, 0, 1, row - 1

# Cycling across the directional values [LEFT, DOWN, RIGHT, UP]
for val,(dy, dx) in enumerate(cycle([(1, 0), (0, 1), (-1, 0), (0, -1)])):
    if count > n: break
    for i in range(delta):
        if count <= n:
            output[x][y] = f"{count: >3}"
        count += 1
        x += dx; y += dy
    if (val + 1)%4 == 0:
        delta -= 2
        x += 1; y += 1
        if count <= n and delta == 0:
            delta = 1

# Printing the resulting array
print(*["".join(item) for item in output], sep="\n")
