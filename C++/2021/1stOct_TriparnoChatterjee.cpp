// Contributed By : Triparno Chatterjee
// Date : 1st October 2021
// Issue : Fibonacci Series with a Twist
#include <bits/stdc++.h>
using namespace std;
bool isAMultipleOfFive(int n)
{
    if (n % 5 == 0)
        return true;
    else
        return false;
}
bool checkPrimeNumber(int n)
{
    bool isPrime = true;
    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1)
    {
        isPrime = false;
    }
    else
    {
        for (int i = 2; i <= n / 2; ++i)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }
    return isPrime;
}
vector<int> FibonacciSeries(int n)
{

    vector<int> fib(n + 1);
    if (n <= 1)
        return {n};
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= n + 1; i++)
    {

        fib[i] = fib[i - 2] + fib[i - 1];
    }
    return fib;
}
//Driver Code
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<int> series = FibonacciSeries(n);
    series.erase(series.begin());
    for (const auto el : series)
    {
        if (checkPrimeNumber(el) || isAMultipleOfFive(el))
        {
            cout << "0 ";
        }
        else
        {
            cout <<el<<" ";
        }
    }
    return 0;
}
