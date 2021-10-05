#include <bits/stdc++.h>
using namespace std;

int main()
{
    // code by Blankita21
    // Date: 02/10/2021

    int m, n; //declaring rows and columns
    cin >> m >> n;

    int c = 1; 
    int i = 0;
    int j = 0;

    int t[m][n];

    memset(t, 0, sizeof(t)); //setting all elements in the matrix = 0

    int dir = 1;

    while (j < n)
    {
        t[i][j] = c;
        c++;

        if (i == 0)
            dir = 1;

        if (i == (m - 1))
            dir = 0;

        if (dir)
            i++;

        else
            i--;

        j++;
    }

    // printing the final result

    for (int x = 0; x < m; x++)
    {
        for (int y = 0; y < n; y++)
        {
            if (t[x][y])
            {
                cout << t[x][y] << " ";
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
