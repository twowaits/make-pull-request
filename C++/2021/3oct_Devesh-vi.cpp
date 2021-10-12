#include <bits/stdc++.h>
using namespace std;

int main()
{
    //taking inputs
    int row, col;
    cin >> row >> col;
  
    vector<vector<int>> mat(row, vector<int>(col, 0));
    int i = 0, j = 0;

    //directions 
    bool dir = true;
    for (int j = 1; j <= col; j++)
    {
        mat[i][j - 1] = j;
        if (i == 0) dir = false;
        if (i == (row - 1)) dir = true;
        if (dir) i--;
        else i++;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (mat[i][j] != 0) \
                cout << mat[i][j] << " ";
            else
               cout << "  ";
        }
        cout << endl;
    }
} 
