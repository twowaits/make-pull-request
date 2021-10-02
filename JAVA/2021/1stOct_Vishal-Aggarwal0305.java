import java.io.*;
class Main
        {
            public static void main(String []args)
            {
                Scanner q = new Scanner(System.in);
                int p=q.nextInt();
                int a=1,b=1;
                System.out.print(a+" "+b+" ");
                for(int i=2;i<p;i++)
                {
                    int sum=a+b;
                    if(sum%5==0)
                        System.out.print(0+" ");
                    else if(prime(sum))
                        System.out.print(0+" ");
                    else
                        System.out.print(sum+" ");

                    a=b;
                    b=sum;

                }


            }
            public static boolean prime(int c)
            {
                if(c<=1)
                    return false;

                for(int i=2;i<c;i++)
                    if(c%i==0)
                        return false;
                return true;

            }

        }
