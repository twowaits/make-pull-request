#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cin >> rows >> cols;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            int newCol = (j % ((rows - 1) * 2));
            if (newCol >= rows)
            {
                newCol = newCol - rows;
                newCol = ((rows - 1) - (newCol + 1));
            }

            if (newCol == i)
            {
                cout << " " << j + 1;
            }
            else
            {
                cout << "  ";
            }
        }
        cout<<"\n";
    }
    return 0;
}
