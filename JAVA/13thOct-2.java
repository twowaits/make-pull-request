import java.util.Scanner;

public class Spiral {

    public void spiralPrint(int m)
    {
        int val=1, top=0, left=0, last=m-1, right=m-1, flag =0; 
 
        int[][] a = new int [m][m];
        
        while ( top<=last && left<=right) {
        	
            // to go from left to right in top
        	if(flag ==0) {
        		for(int i=left; i<=right; i++) {
        			a[top][i]= val++;
        		}
        			top++;
        			flag++;
        		
            }
        	
        	// to go from top to bottom in right 
        	else if(flag ==1) {
        		for(int i=top; i<=last; i++) {
        			a[i][right]= val++;
        		}
        			right--;
        			flag++;
        		
        	}
        	
        	// to go from right to left in bottom
        	else if(flag ==2) {
        		for(int i=right; i>=left; i--) {
        			a[last][i]= val++;
        		}
        			last--;
        			flag++;
        		
        	}
        	
        	// to go from bottom to up in left
        	else if(flag ==3) {
        		for(int i=last; i>=top;i--) {
        			a[i][left]= val++;
        		}
        			left++;
        			flag=0;
        	}
       }
        
        // printing matrix
        System.out.print("[");
        for(int i=0;i<m; i++) {
        	System.out.print("[");
    		for(int j=0;j<m;j++) {
    			System.out.print(a[i][j] + ", ");
    		}
    		if(i==m-1)
    			System.out.print("]");
    			System.out.print("]\n");
    		}
    }
    
 
    // Driver Code
    public static void main(String[] args){
    	int x;
        Scanner sc = new Scanner(System.in);
        // to take user input
        System.out.println("Enter the the number: ");
        x = sc.nextInt();
       
        Spiral s = new Spiral();
        
          s.spiralPrint(x);
          sc.close();
    }
}

