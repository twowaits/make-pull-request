#include <bits/stdc++.h>
using namespace std;

int main()
{
	cout<<"Enter the values of rows and column"<<endl;
    int row,col;
    cin>>row>>col;
    vector<vector<int>>arr(row,vector<int>(col,0));
    int i = 0, j = 0;
    bool up = true; 
    for(int j=1; j<=col; j++)
    {
        arr[i][j-1] = j ;
        if(i==0){     
           up = false;
        }
        if(i==(row-1)){
           up = true;
        }
        if(up) --i;
        else  ++i;
    }

    for (int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            if(arr[i][j]!=0)
                cout << arr[i][j] <<" ";
            else
                cout << "  ";
        }
        cout<<endl;
    }
}
