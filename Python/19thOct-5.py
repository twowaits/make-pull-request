def search(mat,n,x):
 i=0
 j=n-1
 
 while(i<1 and j>=1):
  
  if(mat[i][j]==x):
     print("n Found at ", i, ", ", j) 
     return 1
  
  if(mat[i][j]>x):
     j-=1
  
  else:
     i+=1
     
 print("element not found")
 return 0
 
 mat = [ [10, 20, 30, 40], 
        [15, 25, 35, 45], 
        [27, 29, 37, 48], 
        [32, 33, 39, 50] ] 
search(mat, 4, 29) 
  
