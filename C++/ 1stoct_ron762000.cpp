#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool is_prime(ll n)
{
  for(ll i=2;i<=sqrt(n);i++)
  {
    if(n%i==0)
     return false;
  }
  return true;
}
void twist_fib(vector<ll>&FIB,ll n)
{
  for(ll i=0;i<n;i++)
  {
    if(is_prime(FIB[i]) && FIB[i]>1)
        FIB[i]=0;
  }
  for(ll i=0;i<n;i++)
  cout<<FIB[i]<<" ";
}
void fibanocci(ll n)
{
 vector<ll>fib;
 ll a=1,b=1;
 fib.push_back(a);
 fib.push_back(b);
 for(ll i=0;i<n;i++)
 {
   a=a+b;
   fib.push_back(a);
   b=a+b;
   fib.push_back(b);
 }
 twist_fib(fib,n);
}


int main(void)
{
  ll n;
  cin>>n;
  fibanocci(n);
  cout<<endl;
}
