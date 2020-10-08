import java.util.Scanner;
class PR3
{ 
	
	public static void main(String args[]) 
	{     PR3 obj = new PR3();  //creating object of class
	        int num;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter n");
	        num = sc.nextInt();
	        obj.printPattern(num);//calling of function printPattern through object of class
		
	} 
	
	static void printPattern(int n) 
	{ 
		int i, j, k = 0; 
		for (i = 1; i < n; i++) // for printing rows
		{ 
			// for printing spaces
			for (j = i; j < n; j++) { 
				System.out.print(" "); 
			} 
			// for printing *
			while (k != (2 * i - 1)) { 
				if (k == 0 || k == 2 * i - 2) 
					System.out.print("*"); 
				else
					System.out.print(" "); 
				k++; 
				 
			} 
			k = 0; 
			
			//  to print next row 
			System.out.println(); 
		} 
		//  for printing last row 
		for (i = 0; i < n; i++) { 
			System.out.print("*" + " "); 
		} 
	}
	
}
