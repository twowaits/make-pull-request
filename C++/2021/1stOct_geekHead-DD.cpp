#include<iostream>
using namespace std;

int main()
{
  int n;
  cin>>n;

  if(n==1)
    cout<<1;  // edge case 1

   if(n<=0)
    return 0; // edge case 2

  else
  {
      int first=1,second=1;
      cout<<first<<" "<<second<<" ";  
      for(int i=1;i<n-1;i++)
      {
            int temp=first+second;
            int flag=0;            


            for(int j=2 ; j*j <=temp ; j++)
            {
                  if(temp%j==0)
                  {
                    flag=1;//update to 1 if not prime
                    break;
                  }
            }

            if(flag==0 || temp%5 == 0)//if prime or a multiple of 5
            {
                cout<<0<<" ";
            }
            else
            {
                cout<<temp<<" ";
            }

            first=second;
            second=temp;

      }
  }

}
