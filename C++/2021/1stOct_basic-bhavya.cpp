// Code for solution to n terms of fibonacci with a twist
// by basic-bhavya
#include <iostream>
using namespace std;

bool is_prime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int i, num, first = 0, sec = 1, next = first + sec;
    cin >> num;
    cout << sec << " ";
    for (i = 3; i <= num + 1; ++i)
    {
        if (next % 5 == 0 || is_prime(next))
        {
            cout << 0 << " ";
        }
        else
        {
            cout << next << " ";
        }
        
        first = sec;
        sec = next;
        next = first + sec;
    }
}
