//Solution to issue #1875
//GCD of two factorials
import java.util.Scanner;
public class Solution{
  public static void main(String []args){
    Scanner sc= new Scanner(System.in);
        int num1=sc.nextInt();
        int num2=sc.nextInt();
        int res=Math.min(num1,num2);
        int fact=1;
        for(int i=1;i<=res;i++){
            fact=fact*i;
        }
        System.out.println(fact);//Result is the factorial of the smallest number
    }
}
