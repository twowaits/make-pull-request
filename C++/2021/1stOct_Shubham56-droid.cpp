#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    
    for (int i = 2; i <= sqrt(n); i++)
    {
         if (n % i == 0)
         {
              return false;
         }
    }
       
    return true;
}

int main()
{
  int i, n;

  int t1 = 0, t2 = 1;

  int nextTerm = t1 + t2;
  
  cout<<"Enter the number till you want to print fibonacci:\n";
  cin>>n;
  
  cout<<"fibonacci series"<<t2<<" ";
  
  for (i = 3; i <= n+1; ++i) 
  {
   if(isPrime(nextTerm)==true || (nextTerm%5==0))
   {
       int tmp = 0;
       cout<<tmp<<" ";
   }
   else
   {
        cout<<nextTerm<<" ";
   }
   
    
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
    
  }
  
  return 0;
}


// contributed by Shubham Bawankar(Shubham56-droid) for Hacktoberfest2021
