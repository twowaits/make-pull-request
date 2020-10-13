# cook your dish here
def spiral(n):
    m=n
    size=n
    l=0
    k=0
    num=1
    
    arr = [[0 for j in range (n)] for i in range (n)]
    
    while k < m and l < n:
        for i in range(l, n):
            arr[k][i] = num
            num += 1
        k += 1
        
        for i in range(k, m):
            arr[i][n-1] = num
            num += 1
        n -= 1
        
        if k < m:
            for i in range(n-1, l-1, -1):
                arr[m-1][i] = num
                num += 1
            m -= 1
        
        if l < n:
            for i in range(m-1, k-1, -1):
                arr[i][l] = num
                num += 1
            l += 1
        
    for i in range(size):
        for j in range(size):
            print(arr[i][j], end=' ')
        print()
    
n = int(input())
spiral(n)