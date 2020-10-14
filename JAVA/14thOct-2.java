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
  int max=Integer.MIN_VALUE;
  int min=Integer.MAX_VALUE;
  for(int i=0;i<n;i++)
  {
      max=Math.max(max,a[i]); //max element in array
      min=Math.min(min,a[i]); //min element in array
  }
  float gap=(float)(max-min)/(float)(n-1);
 // System.out.println(gap+"jjd");
  int max1[]=new int[n];
  int min1[]=new int[n];
  Arrays.fill(max1,Integer.MIN_VALUE);
  Arrays.fill(min1,Integer.MAX_VALUE);
  for (int i = 0; i < n; i++) { 
    if (a[i] == max || a[i] == min) { 
        continue; 
    } 

    // Finding index  to be filled with maxval and minval
    int indx = (int) (Math.round((a[i] - min) /gap )); 
  //  System.out.println(indx);

    //filling max1 array with maxvalue(max)
    if (max1[indx] == Integer.MIN_VALUE) { 
        max1[indx] = a[i]; 
    } else { 
        max1[indx] = Math.max(max1[indx], a[i]); 
    } 

//filling min1 array with minvalue(min)   
    if (min1[indx] == Integer.MAX_VALUE) { 
        min1[indx] = a[i]; 
    } else { 
        min1[indx] = Math.min(min1[indx], a[i]); 
    } 
}
int prev = min; 
int maxgp = 0; 
for (int i = 0; i < n - 1; i++) { 
    if (min1[i] == Integer.MAX_VALUE) { 
        continue; 
    } 
    maxgp = Math.max(maxgp, min1[i] - prev); 
    prev = max1[i]; 
}
System.out.println("The maximum gap b/w elements in "+j+"array is= "+Math.max(maxgp,max-prev)) ;
}
}
