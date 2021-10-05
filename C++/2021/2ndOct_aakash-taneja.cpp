#include <bits/stdc++.h>
using namespace std;
typedef long int li;
typedef long long int lli;
typedef long double ld;
#define endl "\n"
#define MOD 1000000007
#define fr(i, a, b) for (long long i = a; i < b; i++)
#define pii pair<int, int>
#define vi vector<int>
#define vvi vector<vector<int>>
#define w(x)         \
    long long int x; \
    cin >> x;        \
    while (x--)
#define tezi_se                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
int main()
{
    tezi_se;

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int r, col, i = 0, j = 0, count = 1;
    bool flag = true;
    cin >> r >> col;
    vector<vector<int>> vec(r, vector<int>(col, -1));
    while (j != col)
    {
        vec[i][j] = count;
        if (i == 0)
            flag = true;
        if (i == r - 1)
            flag = false;
        if (flag)
            i++;
        else
            i--;
        count++;
        j++;
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (vec[i][j] != -1)
                cout << vec[i][j] << " ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}
