class searchInMatrix {
    private static boolean search(int[][] mat, int target) {
        if(mat.length == 0) {
            return false;
        }
        
        int rowLen = mat.length;
        int colLen = mat[0].length;
        
        int begin = 0, end = rowLen*colLen - 1;
        
        while(begin <= end) {
            int mid = (begin + end)/2;
            int midItem = mat[mid/colLen][mid%colLen];
            if(target == midItem) {
                return true;
            } else if (target < midItem) {
                end = mid-1;
            } else {
                begin = mid+1;
            }
        }
        
        return false;
    }
    
    public static void main(String[] args) {
        int[][]mat = {
            {1, 4, 7, 11, 15},
            {2, 5, 8, 12, 19},
            {3, 6, 9, 16, 22},
	    {10, 13, 14, 17, 24},
	    {18, 21, 23, 26, 30}
        };
        
        int target = 17;
        
        System.out.println(search(mat, target));
    }
}