#include <bits/stdc++.h>
using namespace std;

int isprime(int n)
{
    int flag=0;
    for(int i=2;i<n/2;i++)
    {
        if(n%i==0)
        flag=1;
    }
    if(flag)
    return 0;
    else
    return 1;
}
void fib(int n)
{
    static int a=1, b=1, c;
    if(n>0)
    {
        c=a+b;
        if(isprime(c) || c%5==0)
        cout<<" 0";
        else
        cout<<" "<<c;
        a=b;
        b=c;
        fib(n-1);
    }    
}

int main()
{
    int n;
    cin>>n;
    if(n==1)
    cout<<"1";
    else if(n==2)
    cout<<"1 1";
    else
    {
    	cout<<"1 1";
    	fib(n-2);
    }
    return 0;
}