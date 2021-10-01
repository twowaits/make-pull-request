#include <iostream>
#include <cmath>
using namespace std;
int checkprime(int x){
    int flag=1;
    for(int i=2;i<=sqrt(x);++i){
     if(x%i==0){
        flag=0;
        break;
     }
    }
    if(x==1)return 1;
    if(flag==0)return x;
    else if(flag==1)return 0;
  else return 0;  
}

void fibonacci(int n)
{
    // dp[] for storing values of Fibonacci numbers
    int dp[n+1];
    // initialize zeroth and first element
    dp[0]=0;
    dp[1]=1;
    cout<<dp[1]<<" ";
    for(int i=2;i<=n;i++)
    {
        // add previous two numbers to get the next term in series
        dp[i]=dp[i-1]+dp[i-2];
        if(dp[i]%5==0||checkprime(dp[i])==0)cout<<0<<" ";
        
        else
            cout<<dp[i]<<" ";
    }

    
}

int main(){

    int n;
    cin>>n;
    
    fibonacci(n);
}