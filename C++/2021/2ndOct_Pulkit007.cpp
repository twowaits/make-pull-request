#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter the number of rows and columns: ";
    int r, c;
    cin >> r >> c;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            int newCol = (j % ((r - 1) * 2));
            if (newCol >= r)
            {
                newCol = newCol - r;
                newCol = ((r - 1) - (newCol + 1));
            }

            if (newCol == i)
            {
                cout << " " << j + 1;
            }
            else
            {
                cout << "  ";
            }
        }
        cout << "\n";
    }
    return 0;
}