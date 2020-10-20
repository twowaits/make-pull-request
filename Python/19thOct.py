def matrix(mat,n,x):
    i=0
    j=n-1
    while(i<n and j>=0):
        if(mat[i][j]==x):
            return True
            break
    if(mat[i][j]>x):
        j-=1
    else:
        i+=1
    return False
found=True
if found:
    print("Element Found.")
elif not found:
    print("Element Not found.")

mat=[
    [ 1, 4, 7,11,15],
    [ 2, 5, 8,12,19],
    [ 3, 6, 9,16,22],
    [10,13,14,17,24],
    [18,21,23,26,30]
    ]
matrix(mat,4,18)