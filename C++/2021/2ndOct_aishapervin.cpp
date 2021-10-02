#include<bits/stdc++.h>
#define ps(x, y) fixed << setprecision(y) << x
#define BOOST  ios_base::sync_with_stdio(false);    cin.tie(NULL);
#define vi  vector<int>
#define pb push_back
#define pob pop_back
#define f first
#define s second
#define all(x) (x).begin(),(x).end()
#define mp make_pair
#define rall(v) v.rbegin(), v.rend()
#define next next_permutation
#define perv prev_permutation
#define lb lower_bound
#define ub upper_bound
#define bs binary_search
#define setbit(x) __builtin_popcount(x)
#define w(t) while (t--)
#define pq priority_queue

#define FOR(i,a,b) for ( i = (a); i < (b); ++i)
#define FORN(i,a) FOR(i,0,a)
#define ROF(i,a,b) for ( i = (b)-1; i >= (a); --i)
#define ROFN(i,a) ROF(i,0,a)
#define trav(a,x) for (auto& a: x)

using namespace std;
#define int long long
int inf = 1000000005;
int mod = 1000000007;
int r, c;
int32_t main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("outputt.txt", "w", stdout);
#endif

    cin >> r >> c;
    int arr[100][100] = {0};

    int k = 1;  int i = 0, j = 0;
    while (k <= c) {
        for (int count = 0; count < r; count++) {
            if (k <= c)
                arr[i++][j++] = k++;
        }
          i-=2; 
        for (int count = 0; count < r-1; count++) {
            if (k <= c)
                arr[i--][j++] = k++;
        }
       i=1;
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (arr[i][j])
                cout << arr[i][j] << " ";
            else
                cout << " ";
        }
        cout << endl;
    }


    return 0;
}
