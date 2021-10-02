import java.util.*;
class Fibonacci
{
    public static int prime(int n){
        for(int i =2; i < n/2; i++)
            if(n%i == 0)
                return n;
        return 0;        
    }
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), l = 1, h = 1;
        System.out.print(l + " " + h + " ");
        for (int i = 2; i < n; i++) {
            int add = l+h;
            if (add%5 != 0)
                System.out.print(prime(add) + " ");
            else
                System.out.print("0 ");
            l = h;
            h = add;
        }
    }
}
