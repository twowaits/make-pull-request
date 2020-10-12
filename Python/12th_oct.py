def sortArr( a, arr_size): 
    lo = 0
    hi = arr_size - 1
    mid = 0
    while mid <= hi: 
        if a[mid] == 0: 
            a[lo], a[mid] = a[mid], a[lo] 
            lo = lo + 1
            mid = mid + 1
        elif a[mid] == 1: 
            mid = mid + 1
        else: 
            a[mid], a[hi] = a[hi], a[mid]  
            hi = hi - 1
    return a 
def Array( a): 
    for k in a: 
        print(k)
arr =list(map(int,input().split(" ")))
arr_size = len(arr) 
arr = sortArr( arr, arr_size) 
Array(arr) 
