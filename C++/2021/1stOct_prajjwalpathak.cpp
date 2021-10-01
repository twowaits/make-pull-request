/*
Program to print the fibonacci series with some modifications
Author: Prajjwal Pathak
Programming Language: C++
*/

#include <iostream>

using namespace std;


//Function to check if a number is prime or not
int checkPrime(int n)
{
    int i = 2;
    while (i <= n / 2)
    {
        if (n % i == 0)
        {
            return 0;
        }
        else
        {
            i++;
        }
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << 1 << " ";
    }
    else if (n == 2)
    {
        cout << 1 << " " << 1 << " ";
    }
    else
    {
        int t1 = 1, t2 = 1, t3 = 0;
        n = n - 2;
        cout << 1 << " " << 1 << " ";
        while (n--)
        {
            t3 = t1 + t2;
            t1 = t2;
            t2 = t3;
            if (checkPrime(t3) || t3 % 5 == 0)  //Function call
            {
                cout << 0 << " ";
            }
            else
            {
                cout << t3 << " ";
            }
        }
    }
    return 0;
}