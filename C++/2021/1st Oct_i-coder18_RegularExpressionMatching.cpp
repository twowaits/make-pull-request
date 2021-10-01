#include <bits/stdc++.h>

using namespace std;

bool isMatch(string s, string p) {
   int n=s.size(), m=p.size();
  vector<vector<bool>> dp(n+1,vector<bool>(m+1,0));
  dp[0][0]=true;
  for(int i=1;i<=n;i++)
      dp[i][0]=false;
  for(int j=1;j<=m;j++)
  {
      if(p[j-1]=='*') dp[0][j]=dp[0][j-2];
      else dp[0][j]=0;
  }
  for(int i=1;i<=n;i++)
  {
      for(int j=1;j<=m;j++)
      {
          if(s[i-1]==p[j-1] || p[j-1]=='.')  dp[i][j] = dp[i-1][j-1];
          else if(p[j-1]=='*')
          {
              dp[i][j] = dp[i][j-2];
              if(p[j-2]=='.' || p[j-2]==s[i-1])
                  dp[i][j] = dp[i][j]||dp[i-1][j];
          }
          else dp[i][j]=0;
      }
  }
  return dp[n][m];
}

 
 int main()
{
  string s,p;
  cin>>s>>p;
  if(isMatch(s,p)) cout<<"true";
  else cout<<"false";
  return 0;
}
