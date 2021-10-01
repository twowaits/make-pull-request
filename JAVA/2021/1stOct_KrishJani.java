/*

Fibonacci Series with a Twist
Add following functionalities to it :

Take input the value of 'n', upto which you will print.
-Print the Fibonacci Series upto n while replacing prime numbers, all multiples of 5 by 0.
Sample Input :
12
27

Sample Output :
1 1 0 0 0 8 0 21 34 0 0 144
1 1 0 0 0 8 0 21 34 0 0 144 0 377 0 987 0 2584 4181 0 10946 17711 0 46368 0 121393 196418

*/

import java.util.*;

class HacktoberFest
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int sum=0;
        int a = 1;
        int b = 1;
        int flag = 0;
        
        // Taking the input
        int n = sc.nextInt();
        
        // Printing as asked.
        System.out.print(a+" "+b);
        
        // Outer For Loop
        for (int i = 2; i < n; i++) {
            flag = 0;
            sum = a+b;
            if (sum%5==0) System.out.print("0 ");
            else {
                // Inner for Loop
                for (int j = 2; j < sum/2; j++) {
                    if (sum % j == 0) {
                        System.out.print(sum+" ");
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0) System.out.print("0 ");
            }
            a = b;
            b = sum;
        }
    }
}

