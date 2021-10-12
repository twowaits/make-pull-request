#include <iostream>
using namespace std;
int main()
{

    int rows;
    int cols;
    cout << "enter number of rows" << endl;
    cin >> rows;
    cout << "enter number of column" << endl;
    cin >> cols;
    cout << endl;
    const int mod = ((rows - 1) * 2);

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            int modCol = (j % mod);
            if (modCol >= rows)
            {
                modCol -= rows;
                modCol = ((rows - 1) - (modCol + 1));
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
        printf("\n");
    }
    return 0;
}