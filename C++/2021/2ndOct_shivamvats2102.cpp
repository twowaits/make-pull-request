/*------------------Shivam Sharma----------------*/
 
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds;
#define FIO ios::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define int long long
#define vll vector<int>
#define vllb vector<bool>
#define uset unordered_set<int>
#define pb push_back
#define ff first
#define ss second
#define mod 1000000007
using namespace std;

typedef tree<
int,
null_type,
less<int>,
rb_tree_tag,
tree_order_statistics_node_update>
ordered_set;

int power(int x,int y)
{
    int res = 1;     
    
    x = x % mod; 
    if (x == 0) return 0; 
 
    while (y > 0)
    {
        if (y & 1)
            res = ((res%mod)*(x%mod))%mod;
        y = y>>1;
        x = ((x%mod)*(x%mod))%mod;
    }
    return res%mod;
}

int32_t main() {
    FIO
    int n, m;
    cin >> n >> m;
    int a[n][m];
    memset(a, -1, sizeof(a));
    bool dn = true;
    int r = 0;
    for (int c = 0; c < m; c++) {
        if (r == 0) {
            dn = true;
        }
        else if (r == n - 1) {
            dn = false;
        }
        a[r][c] = c + 1;
        if (dn) {
            r++;
        }
        else {
            r--;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] != -1) {
                cout << a[i][j] << " ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
   

}
