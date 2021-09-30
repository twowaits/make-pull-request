#Contribution by Srijan Singh
# How merge sort is implemented?
def merge(arr:list, first:int, mid:int, last:int) -> None:
    temp_arr = [0]*(last - first + 1)

    left = first
    right = mid+1
    index = 0

    while left<=mid and right<=last:

        if arr[left] <= arr[right]:
            temp_arr[index] = arr[left]
            left+=1
            index+=1
        else:
            temp_arr[index] = arr[right]
            right+=1
            index+=1

    while left<=mid:
        temp_arr[index] = arr[left]
        left+=1
        index+=1

    while right<=last:
        temp_arr[index] = arr[right]
        right+=1
        index+=1

    for i in range(first, last+1):
        arr[i] = temp_arr[i-first]



def merge_sort(arr:list, first:int, last:int) -> None :
    if first<last:
        mid = (first+last)//2
        merge_sort(arr, first, mid)
        merge_sort(arr, mid+1, last)
        merge(arr, first, mid, last)

if __name__ == "__main__":
    arr1 = [0, 1, 2, 0, 1, 2]
    arr2 = [0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1]
    
    first1 = 0 
    last1 = len(arr1)-1
    
    first2 = 0
    last2 = len(arr2)-1

    print("Array 1 before sorting: ",arr1)
    merge_sort(arr1, first1, last1)
    print("Array 1 after sorting: ",arr1)
    
    print("Array 2 before sorting: ",arr2)
    merge_sort(arr2, first2, last2)
    print("Array 2 after sorting: ",arr2)
