
def search_2D(list_of_list, n, x): 
  
    i = 0
      
    j = n - 1
    while ( i < n and j >= 0 ): 
      
        if (list_of_list[i][j] == x ): 
      
            print("found at ", i, ", ", j) 
            return 1
      
        if (list_of_list[i][j] > x ): 
            j -= 1
              
        
        else:  
            i += 1
      
    print("not found") 
    return 0

list_of_list = [ [1,4,7,11,15],
                [2,5,8,12,19],
                [3,6,9,16,22],
                [10,13,14,17,24],
                [18,21,23,26,30]] 

element = int(input())
search_2D(list_of_list, 5, element) 


