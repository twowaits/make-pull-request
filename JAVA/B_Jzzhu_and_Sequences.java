import java.util.*;
import java.math.*;

// B_Jzzhu_and_Sequences
public class B_Jzzhu_and_Sequences{

    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
         long x=sc.nextInt();
         long y=sc.nextInt();
         int n=sc.nextInt();
         long mod=1000000007;
         ArrayList<Long> arr=new ArrayList<>();
        // Queue<Integr> q=new LinkedList<>();
         arr.add(x);
         arr.add(y);
        // y-x
         arr.add(y-x);
        // -x
        arr.add(-x);
        // -y
        arr.add(-y);

        // x-y
        arr.add(x-y);
        
         int index=(n-1)%6;
         long sol=arr.get(index);
         long rem=sol%mod;
         long ans=rem;
         if(rem<0){
            ans=Math.abs(mod+rem);
         }
         System.out.println(ans);
         
        

         
    }
    }
    