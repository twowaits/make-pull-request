#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 1, i, c, j, n;
    int flag;
    cout << "Enter the limit " << endl;
    cin >> n;
    cout << a;
    cout << " ";
    cout << b;
    cout << " ";
    for (int i = 2; i < n; i++)
    {
        flag = 0;
        c = a + b;
        if (c % 5 == 0)
            cout << "0 ";
        else
        {
            for (int j = 2; j < c / 2; j++)
            {
                if (c % j == 0)
                {
                    cout << c << " ";
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
                cout << "0 ";
        }
        a = b;
        b = c;
    }
}
