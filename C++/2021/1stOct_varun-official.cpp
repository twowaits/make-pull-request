/******
* AUTHOR: Varun  *
* INSTITUTION: SCEM *
 https://snippet-generator.app/ 
******/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define rev(i,n) for(int i=n-1;i>=0;i--)
#define rep(i, n) for(int i = 0; i < n; i++)
#define REP(i,a,b) for(int i=a;i<b;i++)
#define rep1(i,b) for(int i=1;i<=b;i++)
#define rev1(i,b) for(int i=b;i>=1;i--)
#define pb push_back
#define mp make_pair
#define clr(x) x.clear()
#define sz(x) ((int)(x).size())
#define F first
#define S second

int prime(int n) //Returns 1 if number is prime else 0
{
    int m = sqrt(n);
    for(int i=2;i<=m;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

int main() 
{

int n;
cin>>n;
vector<int> v(n+1);
v[0]=0;
v[1]=1;

for(int k=2;k<=n;k++)
{
 v[k]=v[k-1]+v[k-2];

}

for(int k=3;k<=n;k++)
{
  int a=v[k];
  
if(prime(a) or a%5==0)
  v[k]=0;
else
 v[k]=a;
}



for(int i=1;i<=n;i++)
  cout<<v[i]<<" ";


return 0;
}


