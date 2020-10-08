import java.util.Scanner;

public class Main {


            public static void main (String[] args) {
                {
                    Scanner sc = new Scanner(System.in);

                    System.out.println("Enter the number of rows: ");

                    int x = sc.nextInt();
                    int k=2;
                    for (int row = 1; row <= x+1; row++) {
                        for (int column = 1; column <2*x; column++) {
                           if((row+column==x+1)||(column-row==x-1))
                           {
                               System.out.print("*");
                           }
                           else if((row==x)&&(column!=k))
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