#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
  ll n;
  cin>>n;

  if(n<=0) {return 0;}

  if(n==1) {cout<<1;}

  else
  {
      int f=1,s=1;
      cout<<f<<" "<<s<<" ";  
      for(int i=1;i<n-1;i++)
      {
            int temp=f+s;
            int flag=0;

           
            for(int j=2 ; j*j <=temp ; j++)
            {
                  if(temp%j==0)
                  {
                    flag=1;
                    break;
                  }
            }

            if(flag==0 || temp%5 == 0)
            {
                cout<<0<<" ";
            }
            else
            {
                cout<<temp<<" ";
            }

            f=s;
            s=temp;
            
      }
  }
 
}
