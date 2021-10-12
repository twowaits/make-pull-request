#include <bits/stdc++.h>
#define int long long
#define ld long double
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define pll pair<long long ,long long >
const int INF = 1e9+5;

using namespace std;

int32_t main()
{
    int k,n; cin>>k>>n;
    vector<vector<int>> res(k, vector<int>(1000, -1));
    int p = 0, q = 0;
    int rowDiff = 1;
    for (int i = 1; i <= n; i++)
    {
        res[p][q] = i;
        p += rowDiff; q ++;
        if(p == k){
            rowDiff = -rowDiff;
            p += 2*rowDiff;
        }
        if(p == -1){
            rowDiff = -rowDiff;
            p += 2*rowDiff;
        }
    }
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < 1000; j++)
        {
            if(res[i][j] == -1) cout<<' ';
            else cout<<res[i][j];
            if(res[i][j]/10 == 0) cout<<' ';
        }
        cout<<"\n";
    }
    
    return 0;
}