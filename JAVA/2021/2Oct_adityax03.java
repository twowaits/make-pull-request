import java.util.*;
class ZigZag
{
    public static void main(String args[])
    {
        int i,j,c=1,rw,cl;
        Scanner sc=new Scanner(System.in);
        rw=sc.nextInt();
        cl=sc.nextInt();
        for(i=0;i<rw;i++)
        {
            for(j=0;j<cl;j++)
            {
                if ((i+j)%(2*(rw-1))==0)
                {
                    if (c%cl!=0)
                        System.out.print(c%cl+"  ");
                    else
                        System.out.print(cl+"  ");
                }
                else if (i==(j%(2*(rw-1))))
                {
                    if (c%cl!=0)
                        System.out.print(c%cl+"  ");
                    else
                        System.out.print(cl+"  ");
                }
                else
                    System.out.print("  ");
                c++;
            }
            System.out.println();
        }
    }
}
