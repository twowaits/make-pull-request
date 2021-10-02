#include <bits/stdc++.h>
using namespace std;

// Function to check that The number is prime number
bool isPrimeNumber(int num)
{
    // 1 is not prime
    if (num == 1)
    {
        return false;
    }

    int j = 2;
    while (j * j <= num)
    {
        if (num % j == 0)
        {
            return false;
        }
        j += 1;
    }
    return true;
}

void printTheFibonacciSeries(int num)
{
    int one = 1;
    int two = 1;
    int three;
    cout << one << " " << two << " ";
    while (num - 2 > 0)
    {
        three = one + two;
        one = two;
        two = three;
        //two check if the number is prime or divisible to 5
        if (isPrimeNumber(three) || three % 5 == 0)
        {
            three = 0;
        }
        //printing numbers of fibonacci series
        cout << three << " ";
        num--;
    }
}

int main()
{
    int num;
    //taking the the final number length we want to print the series
    cin >> num;
    //calling function
    printTheFibonacciSeries(num);
    return 0;
}