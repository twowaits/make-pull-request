import java.util.*;
public class Main
{
    public static boolean isPrime(int n)
	    {
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
		int f1 = 1, f2 = 1, i;
		int count = 0;
        System.out.print(f1 +" " + f2 + " ");
        for (i = 1; i < n-1; i++)
        {
            int next = f1 + f2;
            if(isPrime(next)){
                System.out.print(0+ " ");
            }
            else if(next % 5 ==0){
                System.out.print(0 + " ");
            }
            else{
                System.out.print(next + " ");
            }
            f1 = f2;
            f2 = next;
            
        }
	}
}
