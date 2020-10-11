package JAVA;
import java.util.*;
import java.lang.*;
import java.io.*;
class fibi{
    public static void main(String str[])
    {
        Scanner sc=new Scanner(System.in);
        long x=sc.nextLong();
      long a=0,b=0,c=1;
    
        for(long i=1;i<=x;i++)
        {
            System.out.print(c+" ");
            a=b;
            b=c;
            c=a+b;
        }
        System.out.println();
           
    }
   
}
