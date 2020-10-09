import java.util.Scanner;
class nineoct
{
    public static void main()
    {   
        int f1=1,f2=1,i,j,x,y,r;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter first number : ");
        x = sc.nextInt();
         System.out.println("Enter second number : ");
        y = sc.nextInt();
        for(i=1;i<=x;i++)
        {
            f1*=i;
            
        }
        for(j=1;j<=y;j++)
        {
            f2*=j;
        }
        nineoct obj = new nineoct();
        r = obj.gcd(f1,f2);
        System.out.println("Gcd of factorials of " + x + " and " + y + " is " + r);
    }
    int gcd(int a,int b)
    {    // Everything divides 0 
        if (a == 0)
          return b;
        if (b == 0)
          return a;
      
        // base case
        if (a == b)
            return a;
      
        // a is greater
        if (a > b)
            return gcd(a-b, b);
        return gcd(a, b-a);
    }
}