#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define mod 1000000007
#define pi 3.14159265358979323846264338327950
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define maxi 100000000000000000
int is_prime(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i * i < n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}
void solve(int n)
{
  int a = 1, b = 1, c;
    cout << a << " " << b << " ";
    for (int i = 2; i < n; i++)
    {
        c = a + b;
        if (c % 5 == 0)
            cout << 0 << " ";
        else if (is_prime(c) == 1)
            cout << 0 << " ";
        else
            cout << c << " ";
        a = b;
        b = c;
    }
}
int main()
{
    int n;
    cin >> n;
    solve(n);
    return 0;
}
