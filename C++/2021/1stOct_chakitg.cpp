#include <bits/stdc++.h>
using namespace std;

bool isPrime(int t)
{
    bool res=true;
    for(int i=2;i<sqrt(t);i++)
        if(t%i==0)
            res = false;
    if(t==1)
        res = false;
    return res;
}

int main()
{
    int n;
    cin>>n;
    int V[3] = {1,1,2},x,i=0,c=1;
    for(x=V[0];c<=n;c++)
    {
        if(isPrime(x)||x%5==0)
            x=0;
        cout<<x<<" ";
        if(i<2)
            i++;
        else
        {
            V[0]=V[1];
            V[1]=V[2];
            V[2]=V[0]+V[1];
        }
        x=V[i];
    }
    cout<<"\n";
}