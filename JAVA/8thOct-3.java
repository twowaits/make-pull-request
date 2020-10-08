import java.util.*;

  public class HollowStar {
      public static void main(String [] args) {   
      System.out.println("Enter the height :");
      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();     
      int i, j, k,l,m;
        for(i=1; i<n; i++) {
           for(j=1; j<=n-i; j++) {
               System.out.print(" ");
           }
           for(k=1; k<=i; k++) {     
                     while(k<=(2*i-1)) {
                         if((k==1) || k==(2*i-1))
                             System.out.print("*");
                         else
                             System.out.print(" ");
                         k++;
                        }                       
           }
            System.out.println();
        }     
          for(i=1; i<=n; i++) {
              System.out.print("* ");
          }
    }
 }     
