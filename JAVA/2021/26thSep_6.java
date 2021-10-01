import java.util.Scanner;
// Code By Nikhil Kumar Kataria 
 class Binary{
    public static void main(String[] args) {
        Scanner s1 = new Scanner(System.in);
        int n = s1.nextInt();

        // print all binary from 1 to n
        for(int i=1;i<=n;i++)
        {
            System.out.print(Integer.toBinaryString(i)+" ");
          
        }
    }
}
