#Fibonacci Series with a Twist
--------------------------------
Input <- Integer value n.
Output -> Fibonacci Series upto n while replacing prime numbers, all multiples of 5 by 0.
-------------------------------------------------------------------------------------------

  ```
  public class TwistedFibonacci {
      public static void main(String[] args) {
          java.util.Scanner sc = new java.util.Scanner(System.in);

          System.out.print("Enter the value of n: ");
          int n = sc.nextInt();

          int[] fib = new int[n + 1];
          fib[0] = 0;
          fib[1] = 1;

          for (int i = 2; i <= n; i++)
              fib[i] = fib[i - 1] + fib[i - 2];

          for (int i = 0; i <= n; i++)
              if (isPrime(fib[i]) || fib[i] % 5 == 0)
                  fib[i] = 0;

          StringBuilder result =  new StringBuilder();
          for (int i : fib)
              result.append(i + " ");

        System.out.println("\nGenerated Required TwistedFibonacci Series:\n" + result);
      }

      static boolean isPrime(int n) {
          if (n == 0 || n == 1) return false;
          for (int i = 2; i * i <= n; i++)
              if (n % i == 0) return false;
          return true;
      }
  }
 ```
