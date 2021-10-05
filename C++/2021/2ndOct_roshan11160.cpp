//Solutuon

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rows, cols;

    cin >> rows >> cols;

    
    vector<vector<int>> mat(rows, vector<int>(cols, 0));
    int i = 0, j = 0;

    
    bool in = true;

    
    for (int j = 1; j <= cols; j++)
    {
        mat[i][j - 1] = j;

        if (i == 0)
        {
            in = false;
        }
        if (i == (rows - 1))
        {
            in = true;
        }
        if (in)
            --i;
        else
            ++i;
    }

    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (mat[i][j] != 0) 
                cout << mat[i][j] << " ";

            else 
                cout << "  ";
        }
        cout << endl;
    }
} 
