import java.util.Scanner;
 
public class Fibonacci {
  
  
  public static bool prime(int n)
 {
  if (n <= 1)
        return false;
  
    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
  
    return true;
 }
	public static void main(String args[]) {
		
	//	System.out.println("Enter the term to be printed");
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
    int t1 = 0;
   int t2=1 ;
   int nextTerm=0;
   for(int i=0 ;i< n ;i++)
   {
     if(i == 1) {
           System.out.print( t1 +" ");
            continue;
        }
        if(i == 2) {
            System.out.print( 0 +" ");
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
   if(prime(nextTerm) || (nextTerm%5==0)) System.out.print( 0 +" ");
   else System.out.print( nextTerm +" ")  ; 
   }
  }
  
}
