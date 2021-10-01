// written the code that posses the desired functionality

#include<iostream>
using namespace std;

int main()
{
  int n;
  cin>>n;

  if(n<=0)
    return 0; // when there is no answer

  if(n==1)
    cout<<1;  // explicitly handling a corner case

  else
  {
      int first=1,second=1;
      cout<<first<<" "<<second<<" ";  
      for(int i=1;i<n-1;i++)
      {
            int temp=first+second;
            int flag=0;            // to check the no. is prime or not

           
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

            first=second;
            second=temp;
            
      }
  }
 
}
