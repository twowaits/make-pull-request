// harmanpreet7916 <- github
#include <iostream>
using namespace std;

int primeNo(int n)
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
    cout<<"enter the number upto which you want fibonacci series to be printed"<<endl;
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
        int t1 = 1;
        int t2 = 1;
        int t3 = 0;
        n = n - 2;
        cout << 1 << " " << 1 << " ";
        while (n--)
        {
            t3 = t1 + t2;
            t1 = t2;
            t2 = t3;
            if (primeNo(t3) || t3 % 5 == 0)
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