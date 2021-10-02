#include<bits/stdc++.h>

using namespace std;

bool isprime(int n)
{
  if(n<=1)
    return false;

  for(int i=2; i*i<=n; i++)
  {
    if(!(n%i))
      return false;
  }
  return true;
}

void fibo(int n)
{
  int f1=1;
  int f2=1;
  int f3 = f1+f2;
  for(int i=0; i<n; i++)
  {
    if(f1%5==0 || isprime(f1))
      cout<<0<<" ";    
    else
      cout<<f1<<" ";
    f3 = f1 + f2;
    f1 = f2;
    f2 = f3;
  }
}

int main()
{
  int n;
  cout<<"Enter n, number of terms:- ";
  cin>>n;
  fibo(n);
  return 0;
} 
