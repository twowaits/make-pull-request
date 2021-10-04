#include <bits/stdc++.h>
#define int long long
using namespace std;

bool isPrime(int n)
{

    if (n == 1)
        return false;
    else
    {

        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
                return false;
        }
        return true;
    }
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int prev = 0, next = 1;
    int num = prev + next;
    for (int i = 1; i <= n; i++)
    {
        if (num % 5 == 0 || isPrime(num))
            cout << 0 << " ";
        else
            cout << num << " ";
        num = prev + next;
        prev = next;
        next = num;
    }
}
