// Contributed by Kapil Kungwani on 1/10/2021
#include <bits/stdc++.h>
using namespace std;

// Check if number is prime
bool isprime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (!(n % i))
            return false;
    }
    return true;
}

void fibonacci(int n)
{
    int i = 1, j = 1;
    int k = i + j;
    for (int i = 0; i < n; i++)
    {
        if (i % 5 == 0 || isprime(i))
            cout << 0 << " ";
        else
            cout << i << " ";
        k = i + j;
        i = j;
        j = k;
    }
}

int main()
{
    int n;
    cout << "Enter number of terms" << endl;
    cin >> n;
    fibonacci(n);
    return 0;
}