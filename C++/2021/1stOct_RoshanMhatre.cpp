#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define MOD 1000000007
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

bool isPrime(ll num)
{
    if (num <= 1)
        return false;

    for (ll i = 2; i <= sqrt(num); ++i)
    {
        if ((num % i) == 0)
        {
            return false;
        }
    }

    return true;
}
bool isMultipleOfFive(ll num)
{
    return num % 5 == 0;
}
int main()
{
    ll noOfTerms;
    cin >> noOfTerms;
    int first = 1, second = 1;
    for (ll i = 1; i <= noOfTerms; ++i)
    {
        if (isPrime(first) || isMultipleOfFive(first))
        {
            cout << 0 << " ";
        }
        else
        {
            cout << first << " ";
        }

        int third = first + second;
        first = second;
        second = third;
    }
    return 0;
}