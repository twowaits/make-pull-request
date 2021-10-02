#include <iostream>
#include <math.h>
using namespace std;
int main()
{ 
       int n;
       cin>> n;
       int a=1;
       int b=1;
       int c=0;
       if(n==2||n>2)
       cout<< a<<" "<<b<<" ";
       if(n==1)
       cout<< a+" ";
   for(int j=1;j<=n-2;++j)
       {
           c=0;
           int sum= a+b;
           a=b;
           b=sum;
          for(int i=2;i<sqrt(sum);++i)
          {
              if(sum%i==0)
              c++;
            }
           if(sum%5==0||c==0)
          cout<<0 <<" ";
              else
            cout<< sum<<" ";
         
        }
    }
