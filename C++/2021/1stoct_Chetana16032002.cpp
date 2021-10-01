// Take input the value of 'n', upto which you will print.
// Print the Fibonacci Series upto n while replacing prime numbers, all multiples of 5 by 0.

#include <iostream>  
using namespace std;  
int main() {  
  int a=1,b=1,c,i,n;    
 cout<<"Enter the number of elements: ";    
 cin>>n;    
 cout<<a<<" "<<b<<" "; 
 for(i=2;i<n;++i)   
 {    
  c=a+b; 
  if(c%2==1||c==2||c%5 == 0)
  cout<<"0"<<" "; 
  else
  cout<<c<<" ";    
  a=b;    
  b=c;    
 }    
   return 0;  
   }  

