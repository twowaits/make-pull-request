arrays=[[1, 7, 0, 9, 12],[9, 7, 0, 2, 12, 1, 17]]

def linear_sort(array, max_val):
    m = max_val + 1
    count = [0] * m

    for a in array:
        count[a] += 1
    i = 0
    for a in range(m):
        for c in range(count[a]):
            array[i] = a
            i += 1
    return array

for lists in arrays:
    sortedList=linear_sort(lists,max(lists))
    diffList=[]
    for i in range(len(sortedList)-2):
        diff=sortedList[i+1]-sortedList[i]
        diffList.append(diff)

    print(max(diffList))
