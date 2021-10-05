#include <bits/stdc++.h>
using namespace std;
int main() {

    int Rows= 0;
    int Cols=0;
    cout<<"Enter Rows"<<endl;
    cin>>Rows;
    cout<<"Enter Columns"<<endl;
    cin>>Cols;

    cout<<endl;
    const int mo = ((Rows-1)  * 2);

    for (int i = 0; i < Rows; ++i)
{
    for (int j = 0; j < Cols; ++j)
    {
        int modCol = (j % mo);
        if (modCol >= Rows)
        {
            modCol -= Rows;
            modCol = ((Rows - 1) - (modCol + 1));
        }

        if (modCol == i)
        {
            cout<<j+1;
        }
        else
        {
            cout<<" ";
        }
    }
    cout<<endl;
}

    cout<<"rnrathod16"<<endl;
    return 0;
}

// enter rows 7 and Columns 16
