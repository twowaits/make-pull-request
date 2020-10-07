public class FibboSolution {
	    
	    static void printFibonacci(int n) //Print Series
	    { 
	        int a = 0, b = 1, i,next; 
	      
	        if (n < 1) 
	            return; 
	      
	        for (i = 1; i <= n; i++) 
	        { 
	        	if(isPrime(b))
	            {
	               System.out.print(0+" ");
	            }
	            else if(b%5==0)
	            {
	            	System.out.print(0+" ");
	            }
	            else {
	            System.out.print(b+" "); 
	            }
	            next = a + b; 
	            a = b; 
	            b = next; 
	        }
	        
	    } 
	    //To check for Prime
	    static boolean isPrime(int x) 
	    {
	        int count=0;
	        for(int i=1;i<=x;i++)
	        {
	            if(x%i==0)
	            {
	                count++;
	            }
	        }
	        if(count==2)
	        return true;
	        else 
	        return false;
	    }
	      
	    // Driver Code 
	    public static void main(String[] args)
	    { 
	        int n = 12;
	        printFibonacci(n); 
	    } 
	} 


