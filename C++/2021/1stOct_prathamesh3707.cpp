#include<bits/stdc++.h>

using namespace std;
//A function that I made to check if the number is prime.
bool isItprime(int n)
{
  if(n<=1)
    return false;

  for(int i=2; i*i<=n/2; i++)
  {
    if(!(n%i))
      return false;
  }
  return true;
}
//A function which will conditionally print numbers in the series
void fibonacci(int n)
{
  int a=1;
  int b=1;
  int c = a+b;
  for(int i=0; i<n; i++)
  {
    if(a%5==0 || isItprime(a))
      cout<<0<<" ";    
    else
      cout<<a<<" ";
    c = a + b;
    a = b;
    b = c;
  }
}
//main function
int main()
{
  int n;
  cout<<"Enter number of terms for fibonacci modified series: ";
  cin>>n;
  fibonacci(n);
  return 0;
}