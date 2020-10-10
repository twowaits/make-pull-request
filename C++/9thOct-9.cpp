#include <iostream>
using namespace std;
int f(int a)
{
  int ans=0;
  for(int i=1;i<=a;i++)
    ans *= i;
  return ans;
}
int hcf(int k,int l)
{
  return __gcd(k,l);
}

int main()
{
  int a,b;
  cin>>a>>b;
  int k=f(a);
  int l=f(b);
  cout<<hcf(k,l);
}
