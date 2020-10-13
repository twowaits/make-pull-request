def generateMatrix(n):
        if n == 0:
            return []
        elif n == 1:
            return [[1]]
        
        matrix = [[0 for _ in range(n)] for _ in range(n)] 
        
        top = 0
        bottom = n-1
        left = 0
        right = n-1
        
        size = n ** 2
        num = 1
        
        while num <= size: # should be num <= size , otherwise will return the matrix before it finished
            
            for i in range(left, right+1):
                if num <= size:
                    matrix[top][i] = num
                    num += 1
            top += 1
            
            for i in range(top, bottom+1):
                if num <= size:
                    matrix[i][right] = num
                    num += 1
            right -= 1
            
            for i in range(right, left-1, -1):
                if num <= size:
                    matrix[bottom][i] = num
                    num += 1
            bottom -= 1
            
            for i in range(bottom, top-1, -1):
                if num <= size:
                    matrix[i][left] = num
                    num += 1
            
            left += 1
        
        return matrix

print(generateMatrix(3))
print()
print(generateMatrix(4))