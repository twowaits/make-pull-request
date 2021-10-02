/*Given a value N, find the number of ways to make change for N cents, if we have infinite supply of each of S = { S1, S2, .. , SM } valued coins.


Expected Time Complexity: O(m*n).
Expected Auxiliary Space: O(n).


Constraints:
1 <= n,m <= 103
 
  
Code:
*/

#include<bits/stdc++.h>
using namespace std;

class Solution
{
  long long int count(int S[], int m, int n) {
       std::vector<long long> dp(n+1);
       dp[0] = 1;
       for (int i=0; i<m; ++i) {
           for(int j=S[i]; j<=n; ++j) {
               dp[j] += dp[j - S[i]];
               
           }
       }
       return dp[n];
   }
};

int main()
{
    int t;
    cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int arr[m];
		for(int i=0;i<m;i++)
		    cin>>arr[i];
	    Solution ob;
		cout<<ob.count(arr,m,n)<<endl;
	}
    
    
    return 0;
} 
