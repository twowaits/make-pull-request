arrays=[[1, 7, 0, 9, 12],[9, 7, 0, 2, 12, 1, 17]]

for lists in arrays:
    sortedList=sorted(lists)
    diffList=[]
    for i in range(len(sortedList)-2):
        diff=sortedList[i+1]-sortedList[i]
        diffList.append(diff)

    print(max(diffList))
