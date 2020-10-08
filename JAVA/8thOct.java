/******************************************************************************
Java Program To Print Hollow Pyramid
Author: Siddharth Shrivastava, GitHub: @Siddharth2430
*******************************************************************************/
import java.util.Scanner;
import java.io.*; 
// Java code to demonstrate star pattern 
public class Main 
{ 
	// Function to demonstrate printing pattern 
	public static void hollowPyra(int n) 
	{ 
	int i, j, k = n;
	// Outer loop to handle number of rows
	// n in this case
	for (i = 1; i < n; i++) {

		// Inner loop for columns
		for (j = 1; j <= n; j++) {

			// Condition to print star pattern
			if(j>k && j<n)
                System.out.print(" ");
			if (j == k || j == n)
				{
                    System.out.print("* ");
                }
			else
				System.out.print(" ");
		}
		k--;
		System.out.println("");
	}
	for (i = 1; i <= n; i++)
        System.out.print("* ");
	} 
	// Driver Function
	public static void main(String args[]) 
	{ 
		int n = 0;
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		hollowPyra(n); 
	} 
} 

