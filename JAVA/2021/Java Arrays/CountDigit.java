import java.io.OutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.PrintWriter;
import java.util.StringTokenizer;
import java.io.IOException;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.InputStream;
import java.util.*;

public class CountDigit {
   public static void main(String[] args) throws java.lang.Exception{
    try {
        Scanner sc =new Scanner(System.in);
        int n=sc.nextInt();
        int k=sc.nextInt();
        int count=0;
        for(int i=0;i<n;i++){
            int t=sc.nextInt();
          if(t%k==0) {
              count++;
          }
        }
       System.out.println(count); 
       sc.close();
     } catch(Exception e) {
      return;}	  
   } 
}
