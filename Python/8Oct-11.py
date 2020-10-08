# Python program to print a hollow  
# pyramid pattern 
  
def pattern() : 
    k = 0
    n=int(input('Enter the number of rows you want: '))
    for i in range(1,n) : 
      
        # Print spaces 
        for j in range(i,n+1) : 
            print(' ', end='') 
          
        # Print * 
        while (k != (2 * i - 1)) :
            
            if (k == 0 or k == 2 * i - 2) : 
                print('*', end='') 
            
            else : 
                print(' ', end ='') 
            
            k = k + 1
        k = 0; 
        
        print ("") # print next row 
          
    # print last row 
    for i in range(0, 2*n) :
        
        if i%2==0:
            print(' ', end ='')
        
        else:
            print ('*', end = '') 
  
    
pattern()