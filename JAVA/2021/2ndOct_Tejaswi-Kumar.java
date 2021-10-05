import java.util.Scanner;
import java.util.Arrays;
class Main{
public static void main(String args[]){
    int n,m;
    Scanner sc=new Scanner(System.in);
    n=sc.nextInt();
    m=sc.nextInt();
    boolean down = true;
    // initializing pattern matrix
    int[][] pattern = new int[n][m];  
    // filling pattern matrix with value -1
    for(int[] pattern1 : pattern) 
    Arrays.fill(pattern1, -1);
    int r=0; 
    for(int c=0; c<m; c++){
        if(r==0)
            down=true;
        else if(r==n-1)
            down=false;
        pattern[r][c]=c+1;
        if(down)
            r++;
        else
            r--;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(pattern[i][j]!=-1)
                System.out.print(pattern[i][j]);
            else   
                System.out.print(" ");
        }
        System.out.println();
    }
}
}