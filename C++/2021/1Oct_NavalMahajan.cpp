#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==1)
    {
       cout<<"1";
       return 0;
    }
    if(n==2)
    {
        cout<<"1 1 ";
        return 0;
    }
    int a=1;
    int b=1;
    int c=0;
    cout<<a<<" "<<b<<" ";

    for(int i=0;i<n-2;i++)
    {
        c=a+b;
        int flag=0;
        if(c%5==0)
        {
            flag=0;

        }
        else
        {
        for(int i=2;i*i<c;i++)
        {
            if(c%i==0)
            {
                flag=1;
                break;
            }

        }
        }
        if(c==2||c==3)
        {
            flag=0;
        }
        if(flag==0)
        {
            cout<<0<<" ";



        }
        else{
            cout<<c<<" ";
        }
            a=b;
            b=c;
    }


}