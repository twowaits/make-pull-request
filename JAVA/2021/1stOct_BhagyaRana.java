package java_class;
import java.util.*;

public class main {
  public static boolean isPrime(int n) {
    if (n <= 1)
      return false;
    for (int i = 2; i < n; i++)
      if (n % i == 0)
        return false;
    return true;
  }

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    if (n == 1) {
      System.out.print(1 + " ");
    } else if (n == 2) {
      System.out.print(1 + " ");
      System.out.print(1 + " ");
    } else {
      int a = 1, b = 1;
      System.out.print(a + " " + b + " ");
      for (int i = 2; i < n; i++) {
        int c = a + b;
        if (c % 5 == 0)
          System.out.print(0 + " ");
        else if (isPrime(c))
          System.out.print(0 + " ");
        else
          System.out.print(c + " ");
        a = b;
        b = c;
      }
    }
  }
}