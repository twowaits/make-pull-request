def searchMatrix(matrix, target):
        if len(matrix) == 0 or len(matrix[0]) == 0:
            return False
        
        i = len(matrix) - 1
        j = 0
        
        while i >= 0 and j < len(matrix[0]):
            if matrix[i][j] < target:
                j += 1
            elif matrix[i][j] > target:
                i -= 1
            else:
                return True
        return False

if __name__ == "__main__":
    matrix = [[1,4,7,11,15],
        [2,5,8,12,19],
        [3,6,9,16,22],
        [10,13,14,17,24],
        [18,21,23,26,30]]

    target_value = 9

    result = searchMatrix(matrix, target_value)

    print(f"Searching Matrix: {matrix} for {target_value} value")
    print(f"Result: {result}")

