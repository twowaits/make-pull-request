#include <iostream>
using namespace std;

int main()
{
   int n,a=1,b=1,t=0;
   cin >> n;
   for(int i=1;i<=n;i++)
   {
       if(i==1)
       {
           cout << a << " ";
           continue;
       }
       if(i==2)
       {
           cout << b << " ";
           continue;
       }
       t=a+b;
       a=b;
       b=t;
       cout << t << " ";
       
   }

    return 0;
}
