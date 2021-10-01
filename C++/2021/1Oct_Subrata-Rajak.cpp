#include <bits/stdc++.h>
using namespace std;

// checks whether the fibonacci number is prime or not
bool checkPrime(int n)
{
    bool result = true;
    for (int i = 2; i < sqrt(n); i++)
        if (n % i == 0)
            result = false;
    if (n == 1)
        result = false;
    return result;
}

// checks whether the fibonacci number is a multiple of five or not
bool checkMultipleFive(int n)
{
    return n % 5 == 0;
}

// function to generate fibonacci numbers 
void fib(int n)
{
    int array[3] = {1, 1, 2}, x, i = 0, c = 1;
    for (x = array[0]; c <= n; c++)
    {
        if (checkPrime(x) || checkMultipleFive(x))
            x = 0;
        cout << x << " ";
        if (i < 2)
            i++;
        else
        {
            array[0] = array[1];
            array[1] = array[2];
            array[2] = array[0] + array[1];
        }
        x = array[i];
    }
    cout << endl;
}

// main function
int main()
{
    int n;
    cin >> n;
    fib(n);
}