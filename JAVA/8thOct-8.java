import java.util.*;

  public class Main {
      public static void main(String [] args) {   
      System.out.println("Enter the limit :");
      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();     
      int i, j, k,l,m;
        for(i=1; i<n; i++) {
           for(j=1; j<=n-i; j++) {
               System.out.print(" ");
           }
           for(k=1; k<=i; k++) {     
                     for(;k<=(2*i-1);k++) {
                         if((k==1) || k==(2*i-1))
                             System.out.print("*");
                         else
                             System.out.print(" ");
                             }                       
           }
            System.out.println();
        }     
          for(i=1; i<=n; i++) {
              System.out.print("* ");
          }
    }
 }     
