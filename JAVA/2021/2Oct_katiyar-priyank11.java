public class FibonacciExample1{  
public static void main(String args[])  
{    
 int n1=1,n2=1,n3,i,count=10;    
 System.out.print(n1+" "+n2+" ");
    
 for(i=2;i<count;++i)   
 {    
  n3=n1+n2; 
  if(n3%5==0||n3%2==1||n3==2) 
 System.out.print("0"+" ");
  else
  System.out.print(n3+" ");
  n1=n2;    
  n2=n3;    
 }    
  
}}
