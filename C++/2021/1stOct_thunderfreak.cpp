#include<bits/stdc++.h>
using namespace std;

bool checkPrime (int n) 
{
    if (n<2)
        return false;

    for (int i=2;i<n;i++)
        if(n%i==0)
            return false;

    return true;
}

void fibonnaci (int n)
{
    int t1=1,t2=1,t3=0;
    for(int i=1;i<=n;i++)
    {
        if(i==1) {
            cout<<t1<<" ";
            continue;
        }
            
        else if(i==2) {
            cout<<t2<<" ";
            continue;
        }
        
        t3=t1+t2;
        t1=t2;
        t2=t3;

        if(t3%5==0 || checkPrime(t3))
            cout<<0<<" ";
        else 
            cout<<t3<<" ";
    }
}

int main()
{
    int n;
    cout<<"Enter no of terms of fibonnaci series: ";
    cin>>n;

    fibonnaci(n);

    return 0;
}