def searchIn2d(mat, x): 
  i,j = 0,n - 1
	while ( i < n and j >= 0 ): 
	  if (mat[i][j] == x ):  
			return 1
	
		if (mat[i][j] > x ): 
			j -= 1
			
		else: 
			i += 1

	return 0

