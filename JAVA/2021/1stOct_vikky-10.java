import java.util.*;
import java.io.*;
public class Main
{
public static void main(String args[])throws Exception{             
 BufferedReader br =new BufferedReader(new InputStreamReader(System.in));
       int  sum, first = 1, sec = 1;
       int n = Integer.parseInt(br.readLine());
       if(n<=0) System.out.println("0 ");
       
        System.out.print(first+" "+sec);
        for (int i = 2; i < n; i++) {
           int  count = 0;
            sum = first+sec;
            if (sum%5==0){
                System.out.print("0 ");
            } 
            else {
                for (int j = 2; j < sum/2; j++) {
                    if (sum % j == 0) {
                        System.out.print(sum+" ");
                        count = 1;
                        break;
                    }
                }
                if (count == 0) System.out.print("0 ");
            }
            first = sec;
            sec = sum;
        }
    }
 
}
