// ZigZag Problem
// Take input of number of rows and columns
// Print the output
// Sample Input : 7 16
// 1                       13
//   2                  12   14
//     3              11        15
//       4          10             16
//         5      9
//           6  8
//             7
// Muskan4010 , 2nd Oct
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int row, col;
    int mod;
    void set_value(int x, int y)
    {
        row = x;
        col = y;
        mod = ((x - 1) * 2);
    }
    void printCheck(int i, int j)
    {
        int modCol = (j % mod);
        if (modCol >= row)
        {
            modCol -= row;
            modCol = ((row - 1) - (modCol + 1));
        }

        if (modCol == i)
        {
            cout << j + 1;
        }
        else
        {
            cout << " ";
        }
    }

    void zigzag(int row, int col)
    {
        set_value(row, col);
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                printCheck(i, j);
            }

            cout << endl;
        }
    }
};

int main()
{
    int row;
    cout << "Enter Row: ";
    cin >> row;
    int col;
    cout << "Enter Row: ";
    cin >> col;
    Solution ob;
    cout << "Pattern\n";
    ob.zigzag(row, col);
    return 0;
}