import java.io.*;
import java.util.*;

class GFG {
	public static void main (String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int[] arr = new int[n+1];
        fib(n,arr);
        if(arr.length>3){
            for(int i=3;i<arr.length;i++)
            {
                if(check(arr[i])) // here we are checking the condition for prime and multiple of 5
                {
                    arr[i] = 0;
                }
            }
             for(int i=1;i<arr.length;i++)
            {
                System.out.print(arr[i]+" ");
            }
        }
        else{ 
            for(int i=1;i<arr.length;i++)
            {
                System.out.print(arr[i]+" ");
            }
        }
       
	}
	public static boolean check(int n){
	    if(n%5 == 0) return true;
	    int flag=0;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                flag=1;
                break;
            }
        }
        if(flag==0)
        return true;
        
        return false;
        
	}
	// here we are using dynamic programming approach to print the n fibonacci series
	public static int fib(int n,int[] qb)
	{
	    if(n == 1 || n==0){
	        if(n == 1) qb[n] = 1;
	        if(n == 0) qb[n] = 0;
	        return n;
	    } 
	    
	    if(qb[n]!=0)// if it exist in question bank then we don,t need to call by recursion just return the value of that store sum from the question bank
	    {
	        return qb[n];
	    }
	    int fb1 = fib(n-1,qb);
	    int fb2 = fib(n-2,qb);
	    int sum = fb1+fb2;
	    qb[n] = sum;// we will put the answer in the question bank why?? bcz same set of situation we encounter in recurrsion therefore we store particular value for a particular nth number     
	    return sum;
	}
}
