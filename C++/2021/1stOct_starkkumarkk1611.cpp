#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i, a, b) for (ll i = a; i < b; i++)

bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;
    ll t2ndlast = 1;
    ll tlast = 1;
    cout << t2ndlast << " " << tlast << " ";

    FOR(i, 0, n - 2)
    {
        ll t = tlast + t2ndlast;
        if (isPrime(t) || t % 5 == 0)
            cout << 0;
        else
            cout << t;
        t2ndlast = tlast;
        tlast = t;
        cout << " ";
    }

    return 0;
}