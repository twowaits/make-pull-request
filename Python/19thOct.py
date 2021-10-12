def search_in_matrix(mat, x):
    l = len(mat)
    flag = 0
    for i in range(l):
        if x in mat[i]:
            flag = 1
            break
    if flag == 1:
        return True
    else:
        return False

a = [[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]]
k = 20
print(search_in_matrix(a,k))
