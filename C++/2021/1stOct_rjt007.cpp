#include<bits/stdc++.h>
using namespace std;

void fibonnaci(int n)
{
    int dp[n + 2];
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    for (int i = 1; i <=n; i++)
    {
        
        if(dp[i]%5==0) //if dp[i] is a multiple of 5.
        {
            dp[i]=0;
            cout<<dp[i]<<" ";
            continue;
        }
        bool isprime = true;
        for (int j = 2; j < dp[i]; j++)
        {
            if(dp[i]%j==0) //check if dp[i] is not prime.
            {
                isprime = false;
                break;
            }
        }
        if(isprime && dp[i]!=1)
        {
            dp[i] = 0;
        }
        cout<<dp[i]<<" ";
    }   
}
int main()
{
    int n;
    cin >> n;
    int t = 1;
    while (t--)
    {
        fibonnaci(n);
    }
    return 0;
}
