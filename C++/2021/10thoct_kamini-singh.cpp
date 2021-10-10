#include <bits/stdc++.h>
using namespace std;

long long gcd(int a, int b)
{ 
     int min=0;
     long long fac=1;
     if(b<=a)
    { 
        min=b; 
    
    }
   else
    { 
        min=a;
    
    }
     for(int i=2; i<=min; i++)
     {
         fac=fac*2;
     }
       return fac;
}
  
int main()
{
    int a, b;
    cin>>a>>b;
    cout<<gcd(a,b);
    return 0;
}
