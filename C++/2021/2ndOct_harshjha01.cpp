#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rows,col;
    cout<<"enter the no. of rows ";
    cin>>rows;
    cout<<"enter the no. of columns ";
    cin>>col;
    vector<vector<int>>myarray(rows,vector<int>(col,0));
    
    int row = 0, columns = 0;
    bool up = true; 
    
    for(int columns=1; columns<=col; columns++)
    {
        myarray[row][columns-1] = columns ;
        if(row==0){     
           up = false;
        }
        if(row==(rows-1)){
           up = true;
        }
        if(up) --row;
        else  ++row;
    }

    for (int row=0;row<rows;row++)
    {
        for (int columns=0;columns<col;columns++)
        {
            if(myarray[row][columns]!=0)
                cout << myarray[row][columns] <<" ";
            else
                cout << "  ";
        }
        cout<<"\n";
    }
}
