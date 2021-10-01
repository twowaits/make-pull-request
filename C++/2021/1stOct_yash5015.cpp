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

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;

    return true;
}

int fibonacci(int n)
{
    int a = 1, b = 1, c, i;
    if (n == 0)
        return 0;
    else if (n == 1)
    {
        cout << "1 ";
        return 0;
    }
    cout << "1 1 ";
    for (i = 3; i <= n; i++)
    {
        c = a + b;
        if (c % 5 != 0 && !isPrime(c))
            cout << c << " ";
        else
            cout << "0 ";
        a = b;
        b = c;
    }
    return b;
}

int main()
{
    FAST;
    int n = 0;
    cout << " Please enter the value of n : ";
    cin >> n;
    fibonacci(n);
    return 0;
}
