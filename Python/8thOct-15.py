n = int(input())
k = 2
for row in range(1, n + 1):
    for col in range(1, 2 * n):
        if row + col == n + 1 or col - row == n - 1:
            print("*", end="")
        elif row == n and col != k:
            print("*", end="")
            k = k + 2
        else:
            print(end=" ")
    print()
