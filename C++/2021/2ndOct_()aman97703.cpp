#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c;
    cout << "enter no of rows and columns : ";
    cin >> r >> c;
    vector<vector<int>> mat(r, vector<int>(c, 0));
    int i = 0, j = 0;
    bool down = true;

    for (int j = 1; j <= c; j++)
    {
        mat[i][j - 1] = j;
        if (i == 0)
        {
            down = false;
        }
        if (i == (r - 1))
        {
            down = true;
        }
        if (down)
            --i;
        else
            ++i;
    }
    cout << "My answer is : \n";

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (mat[i][j] != 0)
                cout << mat[i][j] << " ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    cout<<endl<<endl<<"Contribute by AMAN GUPTA";
    return 0;
}
