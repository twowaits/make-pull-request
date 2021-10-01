
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#define ll long long int
#define loop(a, n) for (int i = a; i <= n; i++)
using namespace std;

bool isPrime(int n)
{
  if (n == 1)
    return false;
  if (n == 2)
    return true;
  for (int i = 2; i * i <= n; i++)
  {
    if (n % i == 0)
      return false;
  }
  return true;
}

bool mul(int n)
{
  if (n % 5 == 0)
    return true;
  else
    return false;
}

void solve()
{
  int n, n1=0,n2=1,n3;
  cin >> n;
  cout<<n1<<" "<<n2<<" ";     
 for(int i=2;i<n+1;++i)    
 {    
  n3=n1+n2;       
  n1=n2;    
  n2=n3;  
   if (isPrime(n3) || mul(n3))
      cout << "0"<< " ";
    else
      cout << n3 << " ";  
 }    

}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
  return 0;
}
