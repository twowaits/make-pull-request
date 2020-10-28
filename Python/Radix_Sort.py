# Radix Sort by Zahra Shahid in python

def counting_sort(A,k):    
    length = len(A)                    
    Output = [0] * length               # the sorted output array
    Count = [0] * k                     # the array of count of each number in the given range
    for i in range(0,length):
        x = A[i] // k
        Count[x % k] += 1                

    for i in range(1,k):
        Count[i] = Count[i] + Count[i-1]

    j = length -1
    while j >= 0:
        x = A[j] // k
        Output[Count[x % k]- 1] = A[j]
        Count[x % k] = Count[x % k] - 1
        j = j - 1

    for i in range(0, length):
        A[i] = Output[i]



def radix_sort(A):
    max_e = max(A)  #maximum element in the array

    #Apply counting sort to sort elements based on place value.
    k = 1
    while max_e // k > 0:
        counting_sort(A,k)
        k *= 10



A = [586, 799, 324, 555, 183, 999, 356, 762, 279, 875]
print(A)
radix_sort(A)
print("Sorted Array by Radix Sort:")
print(A)
        
        
        
        
    


    
    

