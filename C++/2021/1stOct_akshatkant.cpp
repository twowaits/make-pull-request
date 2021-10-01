#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool isprime(int x)
{
  if(x<=1)
    return false;

  for(int i=2; i*i<=x; i++)
  {
    if(!(x%i))
      return false;
  }
  return true;
}

void fibonacci(int y)
{
  int a=1;
  int b=1;
  int c = a+b;
  for(int i=0; i<y; i++)
  {
    if(a%5==0 || isprime(a))
      cout<<0<<" ";    
    else
      cout<<a<<" ";
    c = a + b;
    a = b;
    b = c;
  }
}

int main()
{
  int n;
  cout<<"Enter: ";
  cin>>n;
  fibonacci(n);
  return 0;
}