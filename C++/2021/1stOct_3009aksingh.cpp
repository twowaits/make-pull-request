/*
Program to print the fibonacci series with some modifications
Author name : Ankitkumar Singh
Programming Language: C++
*/
#include <iostream>
using namespace std;

int fibo_series(int n)
{
    int result = 0;
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    result = fibo_series(n - 1) + fibo_series(n - 2);
    return result;
}

int main()
{
    int n, result = 0, count = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        count = 0;
        result = fibo_series(i);
        if ((result == 0) || (result == 2))
        {
            cout << "0 ";
            continue;
        }
        else if ((result == 1))
        {
            cout << "1 ";
            continue;
        }
        else
        {
            for (int j = 2; j <= (result - 1); j++)
            {
                if ((result % j == 0))
                {
                    if (result % 5 == 0)
                    {
                        cout << "0 ";
                        count = 1;
                        break;
                    }
                    cout << result << " ";
                    count = 1;
                    break;
                }
            }
            if (count == 0)
                cout << "0 ";
        }
    }
    return 0;
}