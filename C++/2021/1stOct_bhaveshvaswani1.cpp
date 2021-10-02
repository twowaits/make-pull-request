#include <bits/stdc++.h>
using namespace std;

int isPrime(int n)
{
    if(n==2)return 1;

    if(n%2==0||n==1)return 0;

    for(int i=3;i*i<=n;i++)
    {
        if(n%i==0)return 0;
    }

    return 1;
}

int main()
{

   int n;
   cin>>n;

   int a=1,b=1,c=0;

   while(1)
   {
    
    if(isPrime(a) || a%5==0)
    {
        cout<<0<<" ";
    }
    else 
    {
        cout<<a<<" ";
    }

    int b1 = b;
    b = a + b;
    a = b1;
    
    c++;
    if(c==n)break;
   }


}
