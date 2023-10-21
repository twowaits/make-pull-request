#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void sieve(bool prime[], ll n)
{
    for (ll i = 2; i * i <= n; i++)
        if (prime[i])
            for (ll j = i * i; j <= n; j += i)
                prime[j] = 0;
}

int main()
{
    ll n;
    cin >> n;
    if (n == 0)
        return 0;
    if (n == 1)
    {
        cout << "1";
        return 0;
    }
    ll a = 1, b = 1;
    cout << "1 1 ";

    // finding nth fibonacci number
    double temp = (1 + sqrt(5)) / 2;
    ll n_fib = round(pow(temp, n) / sqrt(5));

    // finding all the prime numbers
    bool prime[n_fib + 1];
    memset(prime, 1, sizeof(prime));
    sieve(prime, n_fib);

    n -= 2;
    while (n--)
    {
        b += a;
        a = b - a;
        if (prime[b] || b % 5 == 0)
            cout << "0 ";
        else
            cout << b << " ";
    }
    return 0;
}