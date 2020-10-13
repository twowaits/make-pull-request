a = [[0 for j in range(n)] for i in range(n)]
spiral(n, a)
print("[",end='')
for i in range(n):
    if i==n-1:
        print(a[i],end='')
        break
    print(a[i],sep=',')
print("]")





    
