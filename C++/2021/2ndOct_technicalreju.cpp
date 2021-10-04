#include <iostream>
using namespace std;
int main() {

    int numRows= 0;
    int numCols=0;
    cout<<"Enter number of rows"<<endl;
    cin>>numRows;
    cout<<"Enter number of column"<<endl;
    cin>>numCols;
    cout<<endl;
    const int modulus = ((numRows-1)  * 2);

    for (int i = 0; i < numRows; ++i)
{
    for (int j = 0; j < numCols; ++j)
    {
        int modCol = (j % modulus);
        if (modCol >= numRows)
        {
            modCol -= numRows;
            modCol = ((numRows - 1) - (modCol + 1));
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
    printf("\n");
}
    return 0;
}
