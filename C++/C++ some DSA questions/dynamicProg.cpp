#include<bits/stdc++.h>
using namespace std;

int fab(int v, vector<int> &dp)
{
    if(v==1) return 0;
    if(v==2) return 1;
    if(dp[v]!= -1) return dp[v];
    int ans = fab(v-1, dp) + fab(v-2, dp);
    dp[v] = ans;
    return ans; 
}
int main()
{
    vector<int> dp(100, -1);
    cout<<fab(20,dp);
    return 0;
}