
# Program -- Implementation of Element Search in Matrix

def search_element(matrix, x):
    l = len(matrix)
    k = 0
    for i in range(l):
        if x in matrix[i]:
            k = 1
            break
    if k == 1:
        return True
    else:
        return False

m = [[1,4,7,11,15],
[2,5,8,12,19],
[3,6,9,16,22],
[10,13,14,17,24],
[18,21,23,26,30]]

target = 5
print(search_element(m,target))
