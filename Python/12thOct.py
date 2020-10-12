
#Function that sorts the given array putting all 0s first, then all 1s and all 2s in last.
 
 def array_sort( A, size): 
    low = 0
    high = size - 1
    mid = 0
    while mid <= high: 
        if A[mid] == 0: 
            A[low],A[mid] = A[mid],A[low] 
            low = low + 1
            mid = mid + 1
        elif A[mid] == 1: 
            mid = mid + 1
        else: 
            A[mid],A[high] = A[high],A[mid]  
            high = high - 1
return A