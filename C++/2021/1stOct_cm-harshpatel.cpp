//recursive way to find n'th fibonacci number
#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{

    int N;
    cin >> N;

    cout << fibonacci(N) << endl;
    return 0;
}