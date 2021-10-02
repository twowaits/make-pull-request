#include <bits/stdc++.h>
using namespace std;
int main()
{

    int row = 0, col = 0;
    cout << "Enter Number of row and Columns : " << endl;
    cin >> row >> col;
    int mod = ((row - 1) * 2);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            int col_mod = (j % mod);
            if (col_mod >= row)
            {
                col_mod = col_mod - row;
                col_mod = ((row - 1) - (col_mod + 1));
            }
            if (col_mod == i)
            {
                cout << j + 1;
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}