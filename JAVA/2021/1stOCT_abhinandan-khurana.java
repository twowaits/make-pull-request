import java.util.*;
public class Main
{
    static boolean prime (int a)
    {
        for(int i=2;i<=(int)Math.sqrt(a);i++)
        {
            if(a%i==0)
            return false;
        }
        return true;
    }
	public static void main(String[] args) {
		  int n1=1,n2=1,n3,i,count;
		  Scanner sc=new Scanner(System.in);
		  count = sc.nextInt();
          System.out.print(n1+" "+n2);       
    
          for(i=2;i<count;++i)        
            {    
                n3=n1+n2;
                if(prime(n3) || n3%5==0)
                System.out.print(" 0");
                else
                System.out.print(" "+n3);    
                n1=n2;    
                n2=n3;    
	       }
	}    
}
