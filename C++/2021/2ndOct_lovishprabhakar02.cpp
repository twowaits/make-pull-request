#include <iostream>
using namespace std;
int main() {

    int row= 0;
    int col=0;
    cout<<"Enter number of rows:"<<endl;
    cin>>row;
    cout<<"Enter number of columns:"<<endl;
    cin>>col;
    cout<<endl;
    const int mod = ((row-1)  * 2);

    for (int i = 0; i < row; ++i)
{
    for (int j = 0; j < col; ++j)
    {
        int newcol = (j % mod);
        if (newcol >= row)
        {
            newcol -= row;
            newcol = ((row - 1) - (newcol + 1));
        }

        if (newcol == i)
        {
            cout<<j+1;
        }
        else
        {
            cout<<" ";
        }
    }
    printf("\n");
}
    return 0;
}
