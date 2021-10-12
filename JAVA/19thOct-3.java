public static boolean searchMatrix(int[][] matrix, int target) {
	    if (matrix == null || matrix.length == 0 || matrix[0].length == 0) return false;
	    int lo = 0, hi = matrix.length * matrix[0].length - 1;
	    while (lo <= hi) {
	        int mid = (lo + hi) >>> 1;
	        int row = getRow(matrix, mid), col = getCol(matrix, mid);
	        if (target == matrix[row][col]) {
	            return true;
	        } else if (target < matrix[row][col]) {
	            hi = mid - 1;
	        } else {
	            lo = mid + 1;
	        }
	    }
	    return false;
	}

	private static int getRow(int[][] matrix, int mid) {
	    int n = matrix[0].length;
	    return mid / n;
	}

	private static int getCol(int[][] matrix, int mid) {
	    int n = matrix[0].length;
	    return mid % n;
	}
}
