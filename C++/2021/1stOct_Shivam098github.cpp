#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
bool isPrime(int n)
{
    int i,j;
    for(i=2;i<=(sqrt(n));i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}
void solve()
{
    int i,j,a,b,k,m,n,temp;
    cin>>n;
    a=1;
    b=1;
    if(n==1)
    {
        cout<<"1"<<endl;
        return;
    }
    if(n==2)
    {
        cout<<"1"<<" "<<"1"<<endl;
        return;
    }
    cout<<"1 1 ";
    for(i=2;i<n;i++)
    {
        temp=a+b;
        a=b;
        b=temp;
        if(temp%5==0)
        cout<<"0 ";
        else if(isPrime(temp))
        cout<<"0 ";
        else
        cout<<temp<<" ";
    }
}
int main()
{
    // int t;
    // cin>>t;
    // while(t--)
    {
        solve();
    }
}