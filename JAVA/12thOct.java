/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class SortArray
{
    static void sort012(int arr[], int n){
        int l=0, mid=0, r=n-1;
        
        while(mid <= r){
            int num = arr[mid];
            int temp;
            
            if(num == 0){
                temp = arr[l];
                arr[l] = arr[mid];
                arr[mid] = temp;
                l++;
                mid++;
            }
            else if(num == 1){
                mid++;
            }
            else{
                temp = arr[r];
                arr[r] = arr[mid];
                arr[mid] = temp;
                r--;
            }
        }
        
        for(int i=0;i<n;i++)
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
