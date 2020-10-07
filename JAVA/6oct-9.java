import java.util.Scanner;
class 
{
public static void main(String args[])
{  
 int n1=1,n2=1,n3,i,k,k1,limit1,f1,p1,count1=0; 
Scanner sc = new Scanner(System.in);
limit1 = sc.nextInt();
  int arr1[]=new int[limit1];
  arr1[0]=1;arr1[1]=1;
 for(i=2;i<limit1;i++)//creating fibonacci series
 {  
  n3=n1+n2;  
  arr1[i]= n3; 
  n1=n2;  
  n2=n3; 
  
 }  
 for(k=2;k<limit1;k++)//checking for prime 
{
for(k1=2;k1<(limit1/2);k1++)
{ 
if((arr1[k])%k1==0)
 {count1++;}
}
if((arr1[k]==2)||(arr1[k]==3))
{arr1[k]=0;}
else if( count1==0)
{ arr1[k] =0;}
if( (arr1[k]%5 )== 0)
{arr1[k] =0;}
count1 =0;
}
for(p1=0;p1<limit1;p1++)
{ System.out.print(arr1[p1] + " ");}
System.out.println("");
}
}

