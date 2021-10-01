#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:
    int LCIS(int arr1[], int m, int arr2[], int n) {
        int dp[n]={0};
        
        for(int i=0;i<m;i++)
        {
            int cur=0;
            for(int j=0;j<n;j++)
            {
                if(arr1[i]==arr2[j])
                    dp[j]=max(cur+1,dp[j]);
                
                if(arr1[i]>arr2[j])
                    cur=max(cur,dp[j]);
                
            }
        }
        return *max_element(dp,dp+n);
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, n;
        cin >> m;
        int arr1[m];
        for (int i = 0; i < m; i++) {
            cin >> arr1[i];
        }
        cin >> n;
        int arr2[n];
        for (int i = 0; i < n; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        cout << ob.LCIS(arr1, m, arr2, n) << "\n";
    }
    return 0;
} 
