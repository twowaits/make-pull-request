#include<bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    int i;
    if(n==2)
    return true;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
int main()
{
        int n,i;
        cin>>n;
        if(n==0)
        cout<<0;
        else if(n==1)
        cout<<1;
        else
        {
            int a=1,b=1,c;
            cout<<a<<" "<<b<<" ";
            for(i=3;i<=n;i++)
            {
                c=a+b;
                if(prime(c) || c%5==0)
                {
                    cout<<"0"<<" ";
                }
                else
                {
                    cout<<c<<" ";
                }
                a=b;
                b=c;
            }
        }
    cout<<endl;
}
