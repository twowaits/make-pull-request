#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n <= 3)
        return true;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}

bool multipleOf5And10(int n)
{
    if (n % 5 == 0)
        return true;
    return false;
}

bool isPrintable(int n)
{
    if (isPrime(n) || multipleOf5And10(n))
        return false;
    return true;
}

void getFibonacciWithNoPrimeAndSomeMultiples(int n)
{
    static int n1 = 0, n2 = 1, count = 0;
    int n3;
    if (n > 0)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        if (isPrintable(n3))
        {
            cout << n3 << " ";
            n -= 1;
        }
        getFibonacciWithNoPrimeAndSomeMultiples(n);
    }
}

int main(){
    int n;
    cout << "Enter number of terms: ";
    cin >> n;
    getFibonacciWithNoPrimeAndSomeMultiples(n);
    return 0;
}
