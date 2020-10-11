import java.io.*;
class fibo 
{
    public static void main()throws java.lang.Exception
    {   int N;
        System.out.println("Enter N :");
        BufferedReader inp = new BufferedReader (new InputStreamReader(System.in));
     N = Integer.parseInt(inp.readLine());

        int num1 = 1, num2 = 1; 
  
        int counter = 0;
        while (counter < N) { 
  
            // Print the number 
            System.out.print(num1 + " "); 
  
            // Swap 
            int num3 = num2 + num1; 
            num1 = num2; 
            num2 = num3; 
            counter = counter + 1; 
        }
    }
}
