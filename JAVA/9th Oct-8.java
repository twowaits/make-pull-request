import java.util.*;
class GCD
{
    public long minimum(long i,long j)
    {
        return fact((i>j)?j:i);
    }
    public long fact(long n)
    {
        if(n==1)
        return 1;
        return n*fact(n-1);
    }
    public static void main (String[] args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter two numbers");
        long a=sc.nextLong();
        long b=sc.nextLong();
        GCD obj=new GCD();
        System.out.println("GCD="+ obj.minimum(a,b));
    }
}
