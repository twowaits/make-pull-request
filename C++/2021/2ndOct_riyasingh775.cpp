//Take input of number of rows and columns.
//Print the following zigzag pattern.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, column;
    cin >> row >> column;
    int matrix[row][column];
	  memset(matrix, 0, sizeof(matrix));

    int i = 0, j = 0;
    bool upward = true;

    for(int j=0; j<column; j++)
    {
        matrix[i][j] = j + 1;
        if(i==0){     //if we reach first row then we have to start printing in downward direction from next iteration onwards.
           upward = false;
        }
      
        if(i==(row-1)){  //if we reach last row then we have to start printing in upward direction from next iteration onwards.
           upward = true;
        }

        if(upward)
        {
            i--;
        }
        else
        {
            i++;
        }
    }

    for (int i = 0; i < row;i++)
    {
        for (int j = 0; j < column;j++)
        {
            if(matrix[i][j]!=0)
            {
                cout << matrix[i][j] <<" ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << "\n";
    }
}
