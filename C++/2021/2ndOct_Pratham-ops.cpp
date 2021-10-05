#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int r, c;
    cout << "enter the rows and columns\n";
    cin >> r >> c;
    vector<vector<int>> mat(r, vector<int>(c, 0));
    int i = 0, j = 0;
    bool up = true;

    for (int j = 1; j <= c; j++)
    {
        mat[i][j - 1] = j;
        if (i == 0)
        {
            up = false;
        }
        if (i == (r - 1))
        {
            up = true;
        }
        if (up)
            --i;
        else
            ++i;
    }
    cout << "The answer is\n";

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
    return 0;
}
