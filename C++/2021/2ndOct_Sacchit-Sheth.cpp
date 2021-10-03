#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rows, cols;

    cin >> rows >> cols;

    //Store the result in a 2-d matrix
    vector<vector<int>> mat(rows, vector<int>(cols, 0));
    int i = 0, j = 0;

    //Indicated the direction of movement
    bool increase = true;

    //Used to store the numbers according to the required pattern
    for (int j = 1; j <= cols; j++)
    {
        mat[i][j - 1] = j;

        if (i == 0)
        {
            increase = false;
        }
        if (i == (rows - 1))
        {
            increase = true;
        }
        if (increase)
            --i;
        else
            ++i;
    }

    //Printing the pattern
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (mat[i][j] != 0) //If the matrix element is non-zero, we print the element
                cout << mat[i][j] << " ";

            else //If the matrix element is still initialized by 0, we print it as a space
                cout << "  ";
        }
        cout << endl;
    }
}