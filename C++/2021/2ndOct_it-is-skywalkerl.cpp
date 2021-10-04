#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rows, columns;
    cin>>rows>>columns;
    vector <vector <int>> matrix(rows, vector <int> (columns, 0));

    int i=0, j=0;
    bool godown = true;
    while(columns > j)
    { 
        matrix[i][j] = j + 1;
        if(i == 0) godown = true;
        else if(i == (rows - 1)) godown = false;
        if(godown) i++;
        else i--;
        j++;
    }

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            if(matrix[i][j] != 0) cout<<matrix[i][j]<<" ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}
