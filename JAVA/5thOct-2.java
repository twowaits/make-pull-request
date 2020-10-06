public class SpiralSolution {
	public static void printSpiral(int size,int x) 
    { 
  
        // Create row and col 
        // to traverse rows and columns 
        int row = 0, col = 0; 
  
        int boundary = size - 1; 
        int sizeLeft = size - 1; 
        int flag = 1; 
  
        // Variable to determine the movement 
        // r = right, l = left, d = down, u = upper 
        char move = 'r'; 
  
        // Array  for matrix 
        String matrix[][] = new String[size][size]; 
        for(int i=0;i<size;i++)
		{
			for(int j=0;j<size;j++)
			{
				matrix[i][j]="  ";
			}
		}
  
        for (int i = 1; i < x + 1; i++) { 
  
            // Assign the value 
            matrix[row][col] = Integer.toString(i); 
  
            // switch-case to determine the next index 
            switch (move) { 
  
            // If right, go right 
            case 'r': 
                col += 1; 
                break; 
  
            // if left, go left 
            case 'l': 
                col -= 1; 
                break; 
  
            // if up, go up 
            case 'u': 
                row -= 1; 
                break; 
  
            // if down, go down 
            case 'd': 
                row += 1; 
                break; 
            } 
  
            // Check if the matrix 
            // has reached array boundary 
            if (i == boundary) { 
  
                // Add the left size for the next boundary 
                boundary += sizeLeft; 
  
                // If 2 rotations has been made, 
                // decrease the size left by 1 
                if (flag != 2) { 
  
                    flag = 2; 
                } 
                else { 
  
                    flag = 1; 
                    sizeLeft -= 1; 
                } 
  
                // switch-case to rotate the movement 
                switch (move) { 
  
                // if right, rotate to down 
                case 'r': 
                    move = 'd'; 
                    break; 
  
                // if down, rotate to left 
                case 'd': 
                    move = 'l'; 
                    break; 
  
                // if left, rotate to up 
                case 'l': 
                    move = 'u'; 
                    break; 
  
                // if up, rotate to right 
                case 'u': 
                    move = 'r'; 
                    break; 
                } 
            } 
        } 
  
        // Print the matrix 
        for (row = 0; row < size; row++) { 
            for (col = 0; col < size; col++) {
            	try {
                System.out.print((Integer.parseInt(matrix[row][col])<10)?(matrix[row][col]+"  "):(matrix[row][col]+" ")); 
            	}catch (NumberFormatException e) { 

        			// This is thrown when the String 
        			// contains characters other than digits 
        			System.out.print("   "); 
        		} 
            } 
  
            System.out.println(); 
        } 
    } 
  
    // Driver Code 
    public static void main(String[] args) 
    { 
    	int n=65;
    	int size=0;
  
        // Get the size of size 
    	for(float i=1;i<n/2;i++)
    	{
    		if(n/i<=i)
    		{
    			size=(int)i;
    			break;
    		}
    	}
  
        // Print the Spiral Pattern 
        printSpiral(size,n); 
    } 

}
