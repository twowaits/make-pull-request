#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rows,col;
    cout<<"Enter the no. of rows : ";
    cin>>rows;
    cout<<"Enter the no. of columns :";
    cin>>col;
    vector<vector<int>>mat(rows,vector<int>(col,0));

    int i = 0, j = 0;
    bool up = true; 

    for(int j=1; j<=col; j++)
    {
        mat[i][j-1] = j ;
        if(i==0){     
           up = false;
        }
        if(i==(rows-1)){
           up = true;
        }
        if(up) --i;
        else  ++i;
    }

    for (int i=0;i<rows;i++)
    {
        for (int j=0;j<col;j++)
        {
            if(mat[i][j]!=0)
                cout << mat[i][j] <<" ";
            else
                cout << "  ";
        }
        cout<<endl;
    }
} 
