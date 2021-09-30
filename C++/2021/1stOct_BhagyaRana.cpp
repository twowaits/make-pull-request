#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;

#define FOR(i, l, r) for (ll i = l; i <= (r); i++)

#define pb push_back

bool prime[1000010];
// This will Generate the Prime Seive till 10^6
void sieve(ll n);

vll get_fib(ll lmt);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    sieve(1000000);

    // Maxm n can be 1e6
    ll n;
    cin >> n;
    vll fib = get_fib(n);
    for (auto &x : fib)
    {
        if (prime[x] || x % 5 == 0)
            cout << "0 ";
        else
            cout << x << " ";
    }

    return 0;
}

void sieve(ll n)
{
    for (ll i = 0; i <= n; i++)
        prime[i] = 1;
    for (ll p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (ll i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    prime[1] = prime[0] = 0;
}

vll get_fib(ll lmt)
{
    vll ans;

    if (lmt <= 0)
        return ans;

    if (lmt == 1)
    {
        ans.pb(1);
        return ans;
    }

    if (lmt == 2)
    {
        ans.pb(1);
        ans.pb(1);
        return ans;
    }

    ans.pb(1);
    ans.pb(1);

    ll term1 = 1, term2 = 1, sum = 0;

    FOR(i, 1, lmt - 2)
    {
        sum = term1 + term2;
        ans.pb(sum);
        term1 = term2;
        term2 = sum;
    }

    return ans;
}