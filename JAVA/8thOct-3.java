import java.util.Scanner;

public class Main {


            public static void main (String[] args) {
                {
                    Scanner sc = new Scanner(System.in);

                    System.out.println("Enter the number of rows: ");

                    int n = sc.nextInt();
                    int k=2;
                    for (int i = 1; i <= n+1; i++) {
                        for (int j = 1; j <2*n; j++) {
                           if((i+j==n+1)||(j-i==n-1))
                           {
                               System.out.print("*");
                           }
                           else if((i==n)&&(j!=k))
                           {
                               System.out.print("*");
                               k=k+2;
                           }
                           else
                           {
                               System.out.print(" ");

                           }

                        }
                            System.out.println();


                    }
                    sc.close();
                }
            }
        }