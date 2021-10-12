#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef double ld;
#define pb push_back

int main()
{
    FAST;
    int r, c, i, j, k, digits;
    cin >> r >> c;
    int pos[c];
    for (i = 0; i < c; i++)
    {
        if (i / (r - 1) % 2 == 0)
        {
            pos[i] = i % (r - 1);
        }
        else
        {
            pos[i] = r - 1 - (i % (r - 1));
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (pos[j] == i)
            {
                cout << (j + 1);
            }
            else
            {
                for (k = j + 1; k != 0; k /= 10)
                {
                    cout << " ";
                }
            }
            cout << " ";
        }
        cout << "\n";
    }

    return 0;
}