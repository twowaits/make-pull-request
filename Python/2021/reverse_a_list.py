def revlist(arr, start, end):
    while start < end:
        arr[start], arr[end] = arr[end], arr[start]
        #Here we did is we swapped the start element and last element
        #1st iteration list looks like:[7,2,3,4,5,6,1]
        #2nd iteration list looks like:[7,6,3,4,5,2,1] and so on
        start += 1
        end -= 1
    print(arr)
    
arr = [1,2,3,4,5,6,7]
revlist(arr, 0, len(arr)-1) #we passed the first index i.e. 0 and last index of our list...
