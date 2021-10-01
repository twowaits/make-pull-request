#include<iostream>
#include<vector>
#include<cmath>
#define check_odd(n) !(n&1)
#define ll long long
#define rep(i,n) for(ll i=0;i<n;i++)
#define rrep(i,n) for(ll i=n-1;i>=0;i--)
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

bool isPrime(int n){
    if (n == 0 || n == 1) 
        return 0;

        for (int i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                return 0;
            }
        }
        return 1;
}

int fib(int n)
{
    int next,first=0,second=1;
    
    for(int i=1; i<=n; i++)
    {
        if(i<=1) next=i;
        else 
        {
            next=first + second;
            first=second;
            second=next;
        }
        if(next % 5 == 0 || isPrime(next))
        cout<<0<<" ";
        else
        cout<<next<<" ";
    }
}
void solve()
{
    int n;
    cin>>n;
    fib(n);
}

int main()
{
    IOS;
    solve();
    return 0;
}