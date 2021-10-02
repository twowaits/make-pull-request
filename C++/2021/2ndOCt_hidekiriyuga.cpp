#include <iostream>
using namespace std;
int main() {

    int Rows;
    int Cols;
    cout<<"enter number of rows"<<endl;
    cin>>Rows;
    cout<<"enter number of column"<<endl;
    cin>>Cols;
    cout<<endl;
    const int mod = ((Rows-1)  * 2);

    for (int i = 0; i < Rows; ++i)
{
    for (int j = 0; j < Cols; ++j)
    {
        int modCol = (j % mod);
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
    printf("\n");
}
    return 0;
}
