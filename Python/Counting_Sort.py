# counting sort by Zahra Shahid in python

def counting_sort(A,k):    
    length = len(A)                    
    Output = [0] * length               # the sorted output array
    Count = [0] * k                     # the array of count of each number in the given range
    for i in range(0,length):
        Count[A[i]] = Count[A[i]] + 1                

    for i in range(1,k):
        Count[i] = Count[i] + Count[i-1]

    j = length -1
    while j >= 0:
        x = A[j]
        Output[Count[x % k]- 1] = A[j]
        Count[x % k] = Count[x % k] - 1
        j = j - 1 
      
    print(Output)



#Verify if it works on the passed array
Arr = [2,5,8,0,1,3,3,3,8,9,6,6,8,7,1]
print(Arr)
counting_sort(Arr,10)   #pass array and range of numbers eg:(0-9)


        
    
    
