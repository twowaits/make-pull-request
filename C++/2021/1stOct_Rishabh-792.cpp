#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

#define ll long long
#define ld long double
#define INF 1e18
#define eps 0.00001

const ll MAX = 3e5 + 5;
const ll M = 1e6 + 5;
const int MOD = 1e9 + 7;
const double pi = 3.141592653589793238;

//Function
bool isPrime(ll n)
{
    if (n <= 1)
        return false;

    for (ll i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;

    return true;
}

//driver code
int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    cout << "Enter number of terms n : ";

    ll n;
    cin >> n;

    ll dp[n + 1];
    dp[0] = 1;
    dp[1] = 1;

    cout << dp[0] << " " << dp[1] << " ";

    for (ll i = 2; i < n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
        if (isPrime(dp[i]) || (dp[i] % 5 == 0))
        {
            cout << 0 << " ";
        }
        else
        {
            cout << dp[i] << " ";
        }
    }

    return 0;
}
