// Print Zigzag pattern in c++

#include <iostream>
using namespace std;
int main()
{
    int rows,cols=0;
    cout<<"Enter number of Rows and Columns"<<"\n";
    cin>>rows>>cols;
    cout<<"\n *****ZigZag Pattern*****\n\n";

    const int mod = ((rows-1)  * 2);
    for (int i = 0; i < rows; i++)
    {
     for (int j = 0; j < cols; j++)
      {
        int modc = (j % mod);
        if (modc >= rows){
            modc = modc - rows;
            modc = ((rows - 1) - (modc + 1));
        }
        if (modc == i){
            cout<<j+1;
        }
        else{
            cout<<" ";
        }
    }
    printf("\n");

}
    return 0;
}
