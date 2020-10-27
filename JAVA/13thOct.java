/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class SortArray
{
    static void spiral(int n){
        int arr[][] = new int[n][n];
        
        int m = n, size = n, k = 0,l = 0, num = 1;
        
        while(k < m && l < n){
            for(int i=l;i<n;i++)
                arr[k][i] = num++;
            k++;
            
            for(int i=k;i<m;i++)
                arr[i][n-1] = num++;
            n--;
            
            if(k < m){
                for(int i=n-1;i>=l;i--)
                    arr[m-1][i] = num++;
                m--;
            }
            
            if(l < n){
                for(int i=m-1;i>=k;i--)
                    arr[i][l] = num++;
                l++;
            }
        }
        
        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
    }
    
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int n = Integer.parseInt(br.readLine());
		
		spiral(n);
	}
}
