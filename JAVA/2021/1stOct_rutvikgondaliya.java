package java_class;
import java.util.*;
public class main {   
	 public static boolean isPrimeChecker(int no)
	    {
	        // checking Corner case
	        if (no <= 1)
	            return false;
	  
	        // Check from 2 to n-1
	        for (int j = 2; j < no; j++)
	            if (no % j == 0)
	                return false;
	  
	        return true;
	    }
	  
	    public static void main(String[] args) {
	      Scanner scanner = new Scanner(System.in);
	      int num = scanner.nextInt();
	      int num1 = 1;
	      int num2 = 1;
	      System.out.print(num1+" "+num2+" ");
	      for(int k=2; k < num; k++)
	      {
	        int sum = num1 + num2;  
	        if(sum % 5 == 0)
	             System.out.print(0+" ");
	        else if(isPrimeChecker(sum))
	             System.out.print(0+" ");
	        else
	             System.out.print(sum+" ");
	        num1=num2;
	        num2=sum;
	      }
	    }
	}
