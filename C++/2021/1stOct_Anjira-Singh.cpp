#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long


bool prime[1000000];  //array for checking prime numbers 

void seiveoferatosthenes();  

int main()
{
int input;
cin>>input;  
seiveoferatosthenes();
int start=1,end=1;
if(input==1)
{
    cout<<start<<endl;
}
else if(input==2)
{
    cout<<start<<" "<<end<<endl;
    
}
else
   { 
       cout<<start<<" ";
       cout<<end<<" ";
     for(int i=2;i<input;i++)
      {
        int temp=start+end;
        if(prime[temp]||temp%5==0)
         {
             cout<<0<<" ";
         }
         else
         {
             cout<<temp<<" ";
         }
         start=end;
         end=temp;
    
       }
   
       
   }
   return 0;
    
}


void seiveoferatosthenes()  
{   
  
  for(int i=0;i<1000000;i++)
  {
      prime[i]=true;
  }
  
  for (int j=2; j*j<=1000000;j++)
    {
        if (prime[j])
        {
          for(int i=j*j;i<=1000000;i+=j)
                prime[i] = false;
        }
    }
 }