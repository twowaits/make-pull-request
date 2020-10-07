# Python program to check whether a given  
# matrix is magic square or not

# sample order of matrix  
N = 3

def isMagicSquare( mat) : 
      
    # calculate the sum of  
    # the prime diagonal 
    s = 0 
      
    for i in range(0, N) : 
        s = s + mat[i][i] 
  
    # the secondary diagonal 
    s2 = 0
    for i in range(0, N) : 
        s2 = s2 + mat[i][N-i-1] 
  
    if(s!=s2) : 
        return False
  
    # For sums of Rows  
    for i in range(0, N) : 
        rowSum = 0;      
        for j in range(0, N) : 
            rowSum += mat[i][j] 
          
        # check if every row sum is 
        # equal to prime diagonal sum 
        if (rowSum != s) : 
            return False
  
    # For sums of Columns 
    for i in range(0, N): 
        colSum = 0
        for j in range(0, N) : 
            colSum += mat[j][i] 
  
        # check if every column sum is  
        # equal to prime diagonal sum 
        if (s != colSum) : 
            return False
  
    return True
  
# sample matrix
mat = [ [ 2, 7, 6 ], 
        [ 9, 5, 1 ], 
        [ 4, 3, 8 ] ] 
      
if (isMagicSquare(mat)) : 
    print( "Magic Square") 
else : 
    print( "Not a magic Square")