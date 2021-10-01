#include<iostream>
using namespace std;
int main()
{
int a=1,b=1,count=1,n;
cin>>n;
if(n==1)
{
    cout<<a;
    return 0;
}
if(n==2)
{
    cout<<a<<" "<<b;
    return 0;
}
cout<<a<<" "<<b<<" ";
int d=0;
while(count<=n-2)
{
    d=a+b;
    int k=0,kk=0;
    if(d%5==0)
    {
        k=1;
    }
    for(int i=2;i*i<d;i++)
    {
        if(d%i==0)
        {
            kk=1;
            break;
        }
    }
    if(k==1||kk==0)
    {
        cout<<"0"<<" ";
    }
    else 
    cout<<d<<" ";
    a=b;
    b=d;
    count++;
}
return 0;
}