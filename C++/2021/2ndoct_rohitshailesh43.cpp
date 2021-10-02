#include <iostream>
using namespace std;

int main()
{
    int row, column, i, j, x;
    cin >> row >> column;
    int loc[column];
    for (i = 0; i < column; i++)
    {
        if (i / (row - 1) % 2 == 0)
        {
            loc[i] = i % (row - 1);
        }
        else
        {
            loc[i] = row - 1 - (i % (row - 1));
        }
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            if (loc[j] == i)
            {
                cout << (j + 1);
            }
            else
            {
                for (x = j + 1; x != 0; x /= 10)
                {
                    cout << " ";
                }
            }
            cout << " ";
        }
        cout << "\n";
    }
}