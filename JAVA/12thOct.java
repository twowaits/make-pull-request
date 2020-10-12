/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class SortArray
{
    static void sort012(int arr[], int n){
        int z=0, o=0, t=0, i;
        
        for(i=0;i<n;i++){
            int num = arr[i];
            
            if(num == 0)
                z++;
            else if(num == 1)
                o++;
            else    
                t++;
        }
        
        i=0;
        
        while(z-- > 0)
            arr[i++] = 0;
            
        while(o-- > 0)
            arr[i++] = 1;
            
        while(t-- > 0)
            arr[i++] = 2;
            
        for(i=0;i<n;i++)
            System.out.print(arr[i] + " ");
    }
    
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int n = Integer.parseInt(br.readLine());
		
		int arr[] = new int[n];
		
		String str[] = br.readLine().split(" ");
		
		for(int i=0;i<n;i++)
		    arr[i] = Integer.parseInt(str[i]);
		    
		sort012(arr, n);
	}
}
