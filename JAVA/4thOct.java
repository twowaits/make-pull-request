public class ZigZagSolution {
	public static void main(String args[])
	{
		int n=16;
		int k=7;
		String grid[][]=new String[k][n];
		for(int i=0;i<k;i++)
		{
			for(int j=0;j<n;j++)
			{
				grid[i][j]=" ";
			}
		}
		for (int i = 0; i < n; i++) // each char
	    {
	      int m = k - 1; // zero based
	      int col = m - Math.abs(i % (2 * m) - m); // triangle wave formula
	      grid[col][i] = Integer.toString(i+1);
	    }
		for(int i=0;i<k;i++)
		{
			for(int j=0;j<n;j++)
			{
				System.out.print(grid[i][j]);
			}
			System.out.println();
		}
	}
}
