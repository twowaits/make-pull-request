

#include<bits/stdc++.h>

using namespace std;

bool is_prime(int n)
{
  if(n<=1)
    return false;

  for(int i=2; i*i<=n; i++)
  
    if((n%i)==0)
      return false;
  
  return true;
}

void fib(int n)
{
  int a =1;
  int b =1;
  int c = a+b;
  for(int i=0; i<n; i++)
  { 
    // checking number is prime or not 
    // checking number is divisible by 5 or not 
    if(a%5==0 || is_prime(a))
      cout<<0<<" ";    
    else
      cout<<a<<" ";
    c = a+b;
    a = b;
    b = c;
  }
}

int main()
{
  int n;
  cin>>n;
  fib(n);
  return 0;
}
