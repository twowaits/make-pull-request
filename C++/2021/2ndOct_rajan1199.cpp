/* Question: ZigZag Problem
Add following functionalities to it :
Take input of number of rows and columns.
Print the following zigzag pattern.
Sample Input :
7 16
Sample Output :
1                       13 
  2                  12  14
    3              11        15
      4          10             16
        5      9
          6  8
            7
*/

// Solution Code: 
#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the number of rows and columns in the pattern: ";
    int r, c;
    cin >> r >> c;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            int nCol = (j % ((r - 1) * 2));
            if (nCol >= r)
            {
                nCol = nCol - r;
                nCol = ((r - 1) - (nCol + 1));
            }

            if (nCol == i)
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
