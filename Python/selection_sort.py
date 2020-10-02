
def selection(arr):


    for i in range(len(arr)): 
        
    
        mini = i 
        for j in range(i+1, len(arr)): 
            if arr[mini] > arr[j]: 
                mini = j 
                
            
        arr[i], arr[mini] = arr[mini], arr[i] 
arr = list(map(int,input("Enter space seperated integers\n").strip().split())) 
selection(arr)


 
print ("Sorted array") 
for i in range(len(arr)): 
    print("%d" %arr[i])