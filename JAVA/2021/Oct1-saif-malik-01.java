import java.util.Scanner;

class Oct1-saif-malik-01{
    public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();
      int a = 1 ,b = 1;    
      for(int i=0;i<n;i++){
      if(b%5==0 || isPrime(b) ) System.out.print(0+" ");
      else System.out.print(b+" ");
      int temp = a;
      a = a+b;
      b = temp; 
      }
    }
    
    public static boolean isPrime(int number) {
        if(number == 1) return false;
        int sqrt = (int) Math.sqrt(number) + 1;
        for (int i = 2; i < sqrt; i++) {
            if (number % i == 0) {
                // number is perfectly divisible - no prime
                return false;
            }
        }
        return true;
    }
}
