#include <stdio.h>
#include<iostream>
using namespace std;

int main()
{
    unsigned long long int n1,n2,f1=1,i,p;
    cout<<"enter the first number"<<endl;//enter the value b/w 1 to 16
    cin>>n1;
    cout<<"enter the second number"<<endl;
    cin>>n2;
    if(n1>n2)
    {
        p=n2;
    }
    else
    {
        p=n1;
    }
    for(i=1;i<=p;i++)
    {
        f1=f1*i;
    }
    
    cout<<"the GCD of two number"<<" "<<n1<<" "<<n2<<" is!!"<<endl;
    cout<<f1;

    return 0;
}
