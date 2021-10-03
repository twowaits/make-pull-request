#include <iostream>
using namespace std;
int main()
{
    int Rows = 0;
    int Cols = 0;
    cout << "enter the number of rows" << endl;
    cin >> Rows;
    cout << "enter the number of columns" << endl;
    cin >> Cols;
    cout << endl;
    const int modulus = ((Rows - 1) * 2);
    for (int i = 0; i < Rows; ++i)
    {
        for (int j = 0; j < Cols; ++j)
        {
            int modCol = (j % modulus);
            if (modCol >= Rows)
            {
                modCol -= Rows;
                modCol = ((Rows - 1) - (modCol + 1));
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
        cout << endl;
    }
    return 0;
}
