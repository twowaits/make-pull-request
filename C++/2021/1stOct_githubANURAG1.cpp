#include<bits/stdc++.h>
using namespace std;

int isPrime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
        
    }
    return 1;
}

int isdivisibleby5(int n)
{
    if(n%5==0)
    {
        return 1;
    }
    return 0;
}

void fabo(int n)
{

    int n1=1,n2=1,temp;

    if(n<1)
    {
        cout<<"enter n greater than 0";
        return ;
    }

    if(n==1)
    {
       cout<<n1<<" ";
       return ;
    }  

    cout<<n1<<" "<<n2<<" ";
    n=n-2;

    while(n--)
    {
        temp=n1+n2;
        n1=n2;
        n2=temp;

        if(isdivisibleby5(n2) || isPrime(n2))
        {
            cout<<"0"<<" ";
        }
        else
        {
            cout<<n2<<" ";
        }
        
    }
}



int main()
{
    int t;
    cout<<"enter no of test cases :";
    cin>>t;

    while(t--)
    {
        int n;
        cout<<endl<<"Enter n :";
        cin>>n;

        fabo(n);

    }
    return 0;
}
