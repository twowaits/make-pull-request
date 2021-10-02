import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
	    int row=sc.nextInt();
	    int col=sc.nextInt();
		int[][] a = new int[row][col];
		
		int i=0;
		boolean bool=false;
		for(int j=0;j<col;j++){
		    
		    a[i][j]=j+1;
		    
		    if(i==row-1) bool=true;
		    if(i==0) bool=false;
		    
		    if(bool) i--;
		    else i++;
		}
		
		for(int k=0;k<row;k++){
	    for(int l=0;l<col;l++){
	        if(a[k][l]>0)
	        System.out.printf(a[k][l]+" ");
	        else
	        System.out.printf(" ");
	    }
	    System.out.println();
	}
	}
	
	
}
