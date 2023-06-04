#include<bits/stdc++.h>
using namespace std;
bool prime[1000000];

void seive()      // function to make Sieve Of Eratosthenes to get all the prime numbers
{
   
    
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= 1000000; p++)
    {
        
        if (prime[p] == true)
        {
          
            for (int i = p * p; i <=1000000; i += p)
                prime[i] = false;
        }
    }
 
   

}
bool check(int n) // function to check if a number is prime or not
{
    return prime[n];
}

int main()
{
    int number;
    cin>>number;  // taking the input
    seive(); //making the seive

   int a=1;
   int b=1;
  
   
   
if(number==1)
cout<<a<<endl;

else
   { 
       cout<<a<<" "<<b<<" ";
     for(int i=2;i<number;i++)
{
      int temp=a+b;
      a=b;
      b=temp;
      if(check(temp)||temp%5==0)
         cout<<0<<" ";
      else
         cout<<temp<<" ";
    
}
   
       
   }
   cout<<endl;
    return 0;
}

