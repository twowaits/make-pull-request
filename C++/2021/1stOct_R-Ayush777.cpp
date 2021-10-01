// Take input the value of 'n', upto which you will print.
// -Print the Fibonacci Series upto n while replacing prime numbers, all multiples of 5 by 0.

//  Sample Input :
//  12 27

//  Sample Output :
//  1 1 0 0 0 8 0 21 34 0 0 144
//  1 1 0 0 0 8 0 21 34 0 0 144 0 377 0 987 0 2584 4181 0 10946 17711 0 46368 0 121393 196418

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

// This function check whether the given nuber is prime or not
bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void fibonacciExceptPrime(int n)
{
    int fsT1 = 1, fsT2 = 1;
    int fsT3 = fsT1 + fsT2;
    for (int i = 0; i < n; i++)
    {
        if (fsT1 % 5 == 0 || isPrime(fsT1))
            cout << 0 << " ";
        else
            cout << fsT1 << " ";

        fsT3 = fsT1 + fsT2;
        fsT1 = fsT2;
        fsT2 = fsT3;
    }
}

int main()
{
    ios_base ::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);

    int n;
    cout << "Enter the number of terms (N): ";
    cin >> n;
    fibonacciExceptPrime(n);

    return 0;
}