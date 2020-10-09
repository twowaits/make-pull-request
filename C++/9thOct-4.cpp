#include <iostream>
using namespace std;
typedef long long int lli;

//function to calculate factorial of a number
lli fact(int n)
{
  if(n==0)
   return 1;
  else
   return n*fact(n-1);
}

int main()
{
   int a,b;
   cout<<"enter the two numbers\n";
   cin>>a>>b;

 //GCD of factorial of two numbers is basically equal to the factorial of the smaller number.

   if(a>b)
   cout<<fact(b)<<"\n";
   else
    cout<<fact(a)<<"\n";

    return 0;
}
