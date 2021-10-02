import java.util.*;
class Main {
  public static void main(String[] args) 
  {
    
    Scanner input = new Scanner(System.in); 
     
    int n;
    n = input.nextInt();

   

    int a=1;
    int b=1;
    for(int i=0;i<n;i++)
    {
        if(i==0||i==1)
        {
            System.out.print(1+" ");
            continue;

        }
         
        
        int val = a+b;
        if(isfactor(val))
          System.out.print(0 + " ");
         else if(isprime(val))
         System.out.print(0 + " ");
         else
          System.out.print(val + " ");
        a=b;
        b=val;

    }
        
    }


//function to check prime
public static boolean isprime(int n){
   if(n==1)
   return false;
   else
   {
       for(int i=2;i*i<=n;i++)
       {
           if(n%i==0)
           return false;
       }
   }

   return true;
}

//function to check divisibility by five
public static boolean isfactor(int n){
   if(n%5==0)
   return true;
   else
   return false;
}

}