#include <bits/stdc++.h>
using namespace std;
long long int factorial(long long a)     //function to calculate factorial of a number
{
 long long int i,f=1;
 for(i=1;i<=a;i++)
 f=f*i;
 return f;
}
int main() 
 {  
   long long a,b;
   cin>>a>>b;
   if(a<=b)
   cout<<factorial(a)<<endl;          //if a<=b then factorial of a will divide factorial of b which is greatest common divisor
                                      
   else if(b<a)                       //else b will be smaller and its factorial will be the GCD of factorial of two numbers
   cout<<factorial(b)<<endl;          
   
      
	return 0;
}
