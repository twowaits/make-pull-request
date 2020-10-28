import java.util.Scanner;
public class Main
{
	public static void main(String[] args) {
		Scanner s=new Scanner(System.in);
		int n;
		System.out.println("Enter a number");
	    n=s.nextInt();
	    System.out.println("Binary numbers from 1 to "+n);
	   
	    BinaryNumber bn=new BinaryNumber();
	    bn.binary_number_generation(n);
	    
	    
	}
	
	static class BinaryNumber{
	    
	    void binary_number(int n)
        {
        int[] bin_num=new int[1000];
        int i = 0;
        while (n > 0) {
        bin_num[i] = n % 2;
        n = n / 2;
        i++;
        }
        for (int j = i - 1; j >= 0; j--)
        System.out.print(bin_num[j]);
        System.out.println();
        }
        
        void binary_number_generation(int n)
        {
        for(int i = 0; i<= n; i++)
        {
        binary_number(i);
        }
    }
	    
	}
	
}