//HimangsKalita 01/10/2021

#include <iostream>
using namespace std;

int prime(int n)
{

    if (n <= 1)
        return 0;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return 1;
    return 0;
}

int main()
{

    int i, num;
    int Term_1 = 0, Term_2 = 1;
    int Term_3 = Term_1 + Term_2;
    cin >> num;
    cout << Term_2 << " ";
    for (i = 3; i <= num + 1; ++i)
    {
        if (Term_3 % 5 == 0)
        {
            cout << 0 << " ";
        }
        else if (prime(Term_3) == 0)
        {
            cout << 0 << " ";
        }
        else
        {
            cout << Term_3 << " ";
        }
        Term_1 = Term_2;
        Term_2 = Term_3;
        Term_3 = Term_2 + Term_1;
    }
}
