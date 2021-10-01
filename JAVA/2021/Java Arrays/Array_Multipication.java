import java.util.Scanner;
public class Array_Multipication {
    public static void main(String[] args) {
        Scanner cc=new Scanner(System.in);
                System.out.println("number of column is:");
                int s1=cc.nextInt();
                System.out.println("number of row is:");
                int s2=cc.nextInt();
                int[][]a1=new int[s1][s2];
                int[][]b1=new int[s1][s2];
                int[][]c=new int[s1][s2];
                System.out.println("the first array elements are:");
                for(int i=0;i<s1;i++)
                {
                    for(int j=0;j<s2;j++)
                    {
                        a1[i][j]= cc.nextInt();
                    }
                }
                System.out.println("the second array elements are:");
                for(int i=0;i<s1;i++)
                {
                    for(int j=0;j<s2;j++)
                    {
                        b1[i][j]= cc.nextInt();
                    }
                }
                for(int i=0;i<s1;i++)
                {
                    for(int j=0;j<s2;j++)
                    {
                        c[i][j]=a1[i][j]*b1[i][j];
                    }
                }
                System.out.println("The multiplication of the two array is:");
                for(int i=0;i<s1;i++)
                {
                    for(int j=0;j<s2;j++)
                    {
                        System.out.print(c[i][j]+"\t");
                    }
                    System.out.print("\n");
                }
            }
        }
