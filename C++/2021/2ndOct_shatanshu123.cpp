#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rows,cols,i = 0, j = 0, up = 1;
    
    //Taking input for number of rows.
    cin >> rows;
    //Taking input for number of columns.
    cin >> cols;
    //Initializing a single row.
    vector<int> col(cols,0);
    //Initializing 2D vector.
    vector<vector<int> > zigzag(rows,col);

    for(int i=1; i<=cols; i++)
    {
        zigzag[j][i-1] = i;
        if(j==0)
		{     
           up = 0;
        }
        if(j == (rows-1))
		{
           up = 1;
        }
        if(up) 
		 j--;
        else 
		 j++;
    }

    for (int i=0; i<rows; i++)
    {
        for (int j=0;j<cols;j++)
        {
            if(zigzag[i][j] != 0)
                cout << zigzag[i][j] <<" ";
            else
                cout << "  ";
        }
        cout<<endl;
    }
    
    return 0;
}
