import java.io.*;
import java.util.*;

public class Practice {
	
	static class FastReader 
    { 
        BufferedReader br; 
        StringTokenizer st; 
  
        public FastReader() 
        { 
            br = new BufferedReader(new
                     InputStreamReader(System.in)); 
        } 
  
        String next() 
        { 
            while (st == null || !st.hasMoreElements()) 
            { 
                try
                { 
                    st = new StringTokenizer(br.readLine()); 
                } 
                catch (IOException  e) 
                { 
                    e.printStackTrace(); 
                } 
            } 
            return st.nextToken(); 
        } 
  
        int nextInt() 
        { 
            return Integer.parseInt(next()); 
        } 
  
        long nextLong() 
        { 
            return Long.parseLong(next()); 
        } 
  
        double nextDouble() 
        { 
            return Double.parseDouble(next()); 
        } 
  
        String nextLine() 
        { 
            String str = ""; 
            try
            { 
                str = br.readLine(); 
            } 
            catch (IOException e) 
            { 
                e.printStackTrace(); 
            } 
            return str; 
        } 
    } 
	
	public static void main(String args[]) {
		
		FastReader sc = new FastReader();
		
		System.out.print("Enter no. of values you want: ");
		int n = sc.nextInt();
		
		System.out.print("Fibonnaci series you desire: ");
		fibonacci(n);
	}
	
	public static void fibonacci(int n) { // prints the fibonacci series with a twist
		int num1 = 1;
		int num2 = 1;
		for(int i=0;i<n;i++) {
            
			if(num1%5 == 0 || isprime(num1)) 
				System.out.print("0 ");
			else
				System.out.print(num1+" ");
			
			int num3 = num1+num2;
			num1 = num2;
			num2 = num3;
		}
	}
	
	public static boolean isprime(int num) // return a boolean value to check whether passed argument value is prime or not
	{
	  if(num<=1)
	    return false;

	  for(int i=2; i*i<=num; i++)
	  {
	    if(num%i == 0)
	      return false;
	  }
	  return true;
	}
}