package Java;

import java.util.Scanner;

/**
 * Program			=>		Implementation of Element Search in Matrix (with rows and Columns Sorted) Issue #530
 * Issue Details	=> 		https://github.com/twowaits/make-pull-request/issues/530
 * Contributed by	=>		@sumitaccess007 : https://github.com/sumitaccess007
 */

public class MatrixSearch
{

	public static void main(String[] args)
	{
		
		int m, n;	// Rows and Columns of Matrix
		
		Scanner scanner = new Scanner(System.in);
		System.out.println("Enter the number of row in matrix :- ");	// Rows Input from User
		m = scanner.nextInt();
		
		System.out.println("Enter the number of columns in matrix :- ");	// Columns Input from User
		n = scanner.nextInt();
		
		int matrix[][] = new int[m][n];
		System.out.println("Enter all the elements of the matrix (Rows and Columnd Sorted in Ascending Order) :- ");	// Requested all the elements of matrix (with rows and Columns Sorted)
		for (int i=0; i<m; i++)
		{
			for (int j=0; j<n; j++)
			{
				matrix[i][j] = scanner.nextInt();
			}
		}
		
		int x;
		System.out.println("Enter the element to search :- ");	// Element to Search
		x = scanner.nextInt();
		
		System.out.println("Final Matrix is :- ");
		for (int i=0; i<m; i++)
		{
			for (int j=0; j<n; j++)
			{
				System.out.print(matrix[i][j]+" ");		// Printed the matrix
			}
			System.out.println("");
		}
		
		// Search for the elemtnt in matrix and Print final result
		System.out.println("Searching Element "+ x +" in Matrix (true - For present and false - Not Present) ...");
		System.out.println(searchInMatrix(matrix, m, n, x));

	}

	// Divide and Conquer Approach
	private static boolean searchInMatrix(int[][] matrix, int m, int n, int x) {
		
		int p=0, q=n-1;	// Start from top right corner
		
		while (p < m && q >= 0)
		{
			if (matrix[p][q] == x)
			{
				return true;	// Element Found
			}
			if (matrix[p][q] < x)
			{
				p++;	// Eliminate Rows if Matrix number if smaller than element to search
			}
			else
			{
				q--;	// Eliminate Columns if Matrix number if larger than element to search
			}
		}
		return false;	// Element Not Found in Matrix

	}
	
}
