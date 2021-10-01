// Add following functionalities to it :

// Take input the value of 'n', upto which you will print.
// -Print the Fibonacci Series upto n while replacing prime numbers, all
// multiples of 5 by 0. Sample Input : 12 27
//

import java.util.*;

class abc{
  
  // checking for prime number
  static boolean isPrime(long n) {
    if (n <= 1)
      return false;
    if (n <= 3)
      return true;
    if (n % 2 == 0 || n % 3 == 0)
      return false;
    for (int i = 5; i * i <= n; i = i + 6)
      if (n % i == 0 || n % (i + 2) == 0)
        return false;
    return true;
  }

  // checking for multiple of file
  static boolean multipleOf5(long n) {
    if (n % 5 == 0) {
      return true;
    }
    return false;
  }

  public static void main(String args[]) {
    Scanner in = new Scanner(System.in);
    int n;
    n = in.nextInt();
    long a = 1;
    long b = 1;
    System.out.println("1 1 ");

    for (int i = 2; i < n; i++) {
      long c = a + b;
      if (isPrime(c) || multipleOf5(c)) {
        System.out.println("0 ");
      } else {
        System.out.println(c + " ");
      }
      a = b;
      b = c;
    }
    in.close();
  }
}