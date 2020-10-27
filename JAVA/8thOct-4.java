import java.util.*;

class HollowPyramid{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the Height:");
        int n=sc.nextInt();
        
        //For the First Star..
        for(int i=0;i<n-1;i++){
            System.out.print(" ");
        }
        System.out.println("*");
        
        //For the 2nd row to Second last row..

        for(int i=1;i<n-1;i++){
            for(int j=0;j<(n-1)-i;j++){
                System.out.print(" ");
            }
            System.out.print("*");

            for(int j=0;j<2*i-1;j++){
                System.out.print(" ");
            }
            System.out.println("*");
        }

        //For the Last Row..
        for(int i=0;i<n;i++){
            System.out.print("* ");
        }
        System.out.println();
    }
}