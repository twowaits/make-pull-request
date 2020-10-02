def bubbleSort(arr): 
    n = len(arr) 
  
    for i in range(0,n): 
 
  
         
        for j in range(0, n-i-1): 
  
 
            if arr[j] > arr[j+1] : 
                temp=arr[j]
                arr[j] = arr[j+1]
                arr[j+1] = temp
  
# Driver code to test above 
arr = list(map(int,input("Enter comma seperated integers\n").strip().split()))
  
bubbleSort(arr) 
  
print ("Sorted array is:") 
for i in range(len(arr)): 
    print ("%d" %arr[i])