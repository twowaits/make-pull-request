//Created by HARDIK MITTAL
#include <bits/stdc++.h>
//#include <iostream>
//#include <vector>

#define ll long long
#define vl vector <ll>
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define FL(i,a,b) for (int i = a; i < b; i++)
#define F first
#define S second
#define PB push_back
#define MP make_pair

//typedef long long ll;
using namespace std;
#define MOD 1000000007

//sort(vect.begin(), vect.end(), sortbysec); use this line to sort pair vector
/*bool sortbysec(const pair<ll,ll> &a,
              const pair<ll,ll> &b)
{
    return (a.second < b.second);
}

freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);

__int128_t

static long BinaryExp(long x,long y)
{
    long res=1;
    x=x%MOD;
    if(x==0) return 0;
    while(y>0){
        if((y&1)==1)
            res=(res*x)%MOD;
        y=y>>1;
        x=(x*x)%MOD;
    }
    return res;
}

static long add(long x,long y)
{
    long res=x+y;
    return (res>=MOD ? res-MOD:res);
}

static long mul(long x,long y)
{
    long res=x*y;
    return (res>=MOD ? res%MOD:res);
}

static long sub(long x,long y){
    long res=x-y;
    return (res<0 ? res+MOD:res);
}

static long mod_inv(long x)
{
    return(BinaryExp(x,MOD-2));
}*/

bool prime(ll n)
{
    ll i;

    if(n==2)
    {
        return true;
    }
    else if(n%2==0)
    {
        return false;
    }

    for(i=3;i<=sqrt(n);i+=2)    //We only need to check till square root of the number
    {
        if(n%i==0)
        {
            return false;
        }
    }

    return true;
}

void solve()
{
    ll i,n;
    cin>>n;

    ll first=1,second=1,temp;

    for(i=1;i<=min(n,2ll);i++)
    {
        cout<<"1 ";
    }

    for(i=3;i<=n;i++)
    {
        temp = first+second;
        if(temp%5==0||prime(temp))
        {
            cout<<"0 ";
        }
        else
        {
            cout<<temp<<" ";
        }
        first = second;
        second = temp;
    }

    cout<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test_cases=1;
    while(test_cases--)
    {
        solve();
    }
    return 0;
}
