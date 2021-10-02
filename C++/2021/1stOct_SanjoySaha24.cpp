// Done by Sanjoy Saha
// Github user link - https://github.com/SanjoySaha24
// Fibonacci Series with a Twist


#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
  if(n<=1)
    return false;

  for(int i=2; i*i<=n; i++){
    if(!(n%i))
      return false;
  }

  return true;
}

void Fibonacci(int n)
{
  int f1=1;
  int f2=1;

  int f3 = f1+f2;

  for(int i=0; i<n; i++)
  {
    if(f1%5==0 || isPrime(f1))
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
  cout<<"Enter number of terms:- ";
  cin>>n;
  Fibonacci(n);
  return 0;
}