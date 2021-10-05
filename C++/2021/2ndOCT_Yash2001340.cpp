/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int row,column;
    cin>>row>>column;
    int sum=(row+column+1)/2;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=column;j++)
        {
            if(i==j)
            {
                cout<<i;
            }
            else if(j==(sum+1-i+1)|| j==(sum+1+i-1))
            {
                cout<<j;
            }
            else{
                 cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}
