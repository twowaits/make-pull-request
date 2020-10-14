package JAVA;
import java.util.*;

 class maxgap {
     public static void main(String str[])
{
    int a1[]={1, 7, 0, 9, 12};
    int a2[]={9, 7, 0, 2, 12, 1, 17};

    findmax(a1,1);
    findmax(a2,2);

} 
public static void  findmax(int a[],int j)
{
    int n=a.length;
   // System.out.println("lenght"+n);
 //sorting
 for(int i=0;i<n-1;i++)
 {
     if(a[i]>a[i+1])
     {
         int temp=a[i+1];
         a[i+1]=a[i];
         a[i]=temp;
         i=-1;
     }
 }
 //for(int i:a) System.out.println(i);
 int max=0;
 for(int i=0;i<n-1;i++)
 {
     max=Math.max(max,a[i+1]-a[i]);
 }
 System.out.println(max);
}
 } 
