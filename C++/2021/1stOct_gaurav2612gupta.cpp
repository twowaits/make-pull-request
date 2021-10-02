#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

void fib(int n)
{
    int f1 = 1, f2 = 1, i;

    if (n < 1)
        return;
    cout << f1 << " ";
    for (i = 1; i <n; i++)
    {
        if(!isPrime(f2) and f2%5!=0)
            cout << f2 << " ";
        else 
            cout<<0<<" ";
        int next = f1 + f2;
        f1 = f2;
        f2 = next;
    }
}
int main()
{
    int n;
    cin >> n;

    fib(n);
    return 0;
}
