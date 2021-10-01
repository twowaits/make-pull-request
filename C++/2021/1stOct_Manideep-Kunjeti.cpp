#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
    int i;
     for(i=2 ; i<=n/2 ; i++)
     {
        if(n%i==0)
         return 0;
     }
    return 1;
}

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int n1=1,n2=1,n3,i;

    if(n<0){
     cout<<"Invalid number";
     exit(1);
    }
    else if(n == 1)
     cout<<n1;
    else if(n == 2)
     cout<<n1<<" "<<n2;
    else if(n >= 3)
    {
        cout<<n1<<" "<<n2<<" ";
        for(i=3 ; i<=n ; i++)
        {
            n3 = n1 + n2;
            if((n3%5 == 0)|| (prime(n3)))
             cout<<0<<" ";
            else
             cout<<n3<<" ";
            n1 = n2;
            n2 = n3;
        }
    }
    
    
    return 0;
}