def maxele(arr):
    max_ele = arr[0]
    for i in range(0, len(arr)):
        if arr[i] >= max_ele:
            max_ele = int(arr[i])
    print("Max value : ", max_ele)

def minele(arr):
    min_ele = arr[0]
    for i in range(0, len(arr)):
        if arr[i] <= min_ele:
            min_ele = int(arr[i])
    print("Min value : ", min_ele)

arr = [50,10,20,30,40,70,60]
maxele(arr)
minele(arr)