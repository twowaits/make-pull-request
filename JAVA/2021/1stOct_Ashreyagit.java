import java.util.*;
public class Main
{
	public static void main(String[] args) {
	 Scanner scan = new Scanner(System.in);
	 int n1=1;
	 int n2=1;
	 int ans;
	 int i;
	 int count=scan.nextInt();    //taking in count as input
 System.out.print(n1+" "+n2+" ");   //printing 0 and 1    
    
 for(i=2;i<count;i++)           //loop starts from 2 because 0 and 1 are already printed    
 {    
   int mark=0;
   ans=n1+n2;   
   if (ans%5==0)  // if the element is a multiple of 5, then print 0
   {
      System.out.print("0 ");
   }
   else
   {         // if the element is a prime number, then print 0
        for (int j = 2; j < ans/2; j++)   //loop till half of the element value--> if any number from 2 to element/2 is a perfect divisor of the element, then element is not prime. Otherwise, the element is prime
        {
            if (ans % j == 0)
            {
                System.out.print(ans+" ");
                mark = 1;
                break;
            }
        }
  if (mark == 0)  //if prime
  {
    System.out.print("0 ");  //print 0
   }
 }
  
  n1=n2;    //first element's value equal to the second element for next iteration
  n2=ans;    //second element's value equal to ans for the next iteration
 }    
  
  }
 }

