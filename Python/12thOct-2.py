# cook your dish here
def sort012(arr, n):
    l = 0
    mid = 0
    r = n-1
    
    while mid <= r:
        num = arr[mid]
        
        if num == 0:
            arr[mid], arr[l] = arr[l], arr[mid]
            mid = mid+1
            l = l+1
        
        elif num == 1:
            mid = mid+1
        
        else:
            arr[r], arr[mid] = arr[mid], arr[r]
            r = r-1
            
    for i in arr:
        print(i, end=' ')

arr = []

n = int(input())
arr = list(map(int, input().split()))

sort012(arr, n)