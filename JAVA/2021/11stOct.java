import java.util.Scanner;
public class Decimal_To_Binary
{
	public static void main(String args[])
	{   
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter a Decimal number : ");
		int decimal = sc.nextInt();
		int binary[] = new int[20];
		int i = 0; 
		while(decimal > 0)
		{       
			int r = decimal % 2;
			binary[i++] = r;
			decimal = decimal/2;
		}
		System.out.print("Binary number : ");
		for(int j = i-1 ; j >= 0 ; j--)
		System.out.print(binary[j]+" ");
		sc.close();
	}
}  
