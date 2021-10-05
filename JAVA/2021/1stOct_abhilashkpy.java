// PROGRAM TO: Print Fibonacci numbers up to 'n' numbers and replacing multiples of 5 and prime numbers with 0


import java.util.*;

public class fibonacci
{
    public static void main(String args[])
    {
        Scanner inp = new Scanner(System.in);

    int n, sum, n1 = 1, n2 = 1, marker;
    System.out.println("Enter the limit:");
    n = inp.nextInt();
    System.out.print(n1);
    System.out.print(" ");
    System.out.print(n2);
    System.out.print(" ");
    for (int i = 2; i < n; i++) {
    marker = 0;
    sum = n1+n2;
    if (sum %5 ==0)
        System.out.print("0 ");
    else {
            for (int j = 2; j < sum /2; j++) 
                {
                 if (sum % j == 0)
                   {
                    System.out.print(sum+" ");
                    marker = 1;
                    break;
                    }
                }
         if (marker == 0)
            System.out.print("0 "); 
        }
        
            n1 = n2;
            n2 = sum;
         }
    }
}
