def create(n, m):
    spiral = [[" " for i in range(m)] for j in range(n)]
    i = 0
    number = 1
    down = False
    for j in range(m):
        spiral[i][j] = number
        if (i == n-1 or i == 0):
            down = not down
        if(down):
            i = i+1
        else:
            i = i-1
        number += 1
    return spiral
def formation(spiral, n, m):
    for i in range(n):
        print(*spiral[i])
        print("\n")
def main():
    inp=[int(x) for x in input().split()]
    n, m = inp[0],inp[1]
    spiral = create(n, m)
    formation(spiral,n,m)
if __name__=='__main__':
    main()
