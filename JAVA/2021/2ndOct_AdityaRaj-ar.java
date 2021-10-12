import java.util.*;
import java.io.*;

class Hacktoberfest
{
	public static void main (String[] args)
	{
	    Scanner in = new Scanner(System.in);

	    int row, column;
	    System.out.println("Enter the number of rows and number of columns separated by a single space");
	    row = in.nextInt();
	    column = in.nextInt();
	    int[][] arr = new int[row][column];

	    // Initializing the 2-D array with -1
	    for(int i = 0;i < row;i++)
	    {
	        for(int j = 0;j < column;j++)
	        {
	            arr[i][j] = -1;
	        }
	    }

	    arr[0][0] = 1;
	    int val = 1;
	    int cnt = 1;	// counter variable
	    int k = 0;		// This variable maintains the row number

	    for(int i = 1;i < column;i++)
	    {
	    	cnt++;
	        if(val == 1)
	        {
	        	k++;
	            arr[k][i] = i + 1;
	        }
	        else
	        {
	        	k--;
	            arr[k][i] = i + 1;
	        }
	        // This 'if' controls the Upward and Downward Diagonal Movement
	        // When k reaches to the last row it changes its direction by
	        // taking XOR value with 1 and vice versa.
	        if(cnt == row)
	        {
	            val = val ^ 1;
	            cnt = 1;
	        }
	    }

	    // Printing the Zigzag Pattern
	    for(int i = 0;i < row;i++)
	    {
	        for(int j = 0;j < column;j++)
	        {
	            if(arr[i][j] > 0)
	            {
	                System.out.print(arr[i][j]);
	            }
	            else
	            {
	                System.out.print(' ');
	            }
	        }
	        System.out.println();
	    }
	}
}
