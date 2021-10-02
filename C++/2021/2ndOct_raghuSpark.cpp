// ZIG-ZAG PROBLEM

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rows, columns;
    cin >> rows >> columns;
    if (rows == 1)
    {
        for (int c = 1; c <= columns; c++)
            cout << c << " ";
        cout << "\n";
    }
    else
    {
        for (int r = 1; r <= rows; r++)
        {
            for (int c = 1; c <= columns; c++)
            {
                if (c % (2 * rows - 2) == r or ((2 * rows - c) % (2 * rows - 2) == r % (2 * rows - 2)))
                    cout << c;
                else
                {
                    int temp = c;
                    while (temp != 0)
                    {
                        cout << " ";
                        temp /= 10;
                    }
                }
            }
            cout << "\n";
        }
    }
    return 0;
}
// TIME COMPLEXITY: O(rows * columns)
// SPACE COMPLEXITY: O(1)