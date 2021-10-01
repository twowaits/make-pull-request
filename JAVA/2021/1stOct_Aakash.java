class Solution {
    public List<List<String>> solveNQueens(int n) {
        List<List<String>> ans = new ArrayList<>();
        combinations(new boolean[n][n], 0,n,ans,0,0);
        return ans;
    }
    
    public boolean isQueenSafe(boolean[][] board, int row, int col) {
        for(int i=0;i<board.length;i++) {
            if(board[i][col] == true) {
                return false;
            }
        }
        
        for(int i=0;i<board[0].length;i++) {
            if(board[row][i] == true) {
                return false;
            }
        }
        
        for(int i=row+1,j=col+1; i<board.length&&j<board[0].length;i++,j++) {
            if(board[i][j] == true) {
                return false;
            }
        }
        
        for(int i=row-1,j=col-1; i>=0&&j>=0;i--,j--) {
            if(board[i][j] == true) {
                return false;
            }
        }
        
        for(int i=row+1,j=col-1; i<board.length&&j>=0;i++,j--) {
            if(board[i][j] == true) {
                return false;
            }
        }
        
        for(int i=row-1,j=col+1; i>=0&&j<board[0].length;i--,j++) {
            if(board[i][j] == true) {
                return false;
            }
        }
        
        return true;
    }
    
    public void combinations(boolean[][] board, int qpsf, int qtbp, List<List<String>> ans, int row, int col) {
        
        if(qpsf == qtbp) {
            List<String> temp = new ArrayList<>();
            for(int i=0;i<board.length;i++) {
                String str = "";
                for(int j=0;j<board[0].length;j++) {
                    if(board[i][j] == true) {
                        str+="Q";
                    }
                    else {
                        str+=".";
                    }
                }
                temp.add(str);
            }
            ans.add(new ArrayList<>(temp));
            return;
        }
        
        for(int i=col;i<board[0].length;i++) {
            if(board[row][i] == false && isQueenSafe(board,row,i)) {
                board[row][i] = true;
                combinations(board,qpsf+1,qtbp,ans,row,i);
                board[row][i] = false;
            }
        }
        
        for(int i=row+1;i<board.length;i++) {
            for(int j=0;j<board[0].length;j++) {
                if(board[i][j] == false && isQueenSafe(board,i,j)){
                    board[i][j] = true;
                    combinations(board,qpsf+1,qtbp,ans,i,j);
                    board[i][j] = false;
                }
            }
        }
        
    }
    
}
