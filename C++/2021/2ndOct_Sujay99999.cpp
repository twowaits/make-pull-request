#include<iostream>
using namespace std;

int main()
{
    int row, column;
    cout<<"Enter number of rows & columns:"<<endl;
    cin>>row>>column;

    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=column; j++)
        {
            if(i==j && i<row)
                cout<<j;
            else if(((i+j) % (row*2) == 0) && j<(row*2-1))
                cout<<j;
            else if((j-i) % (row*2-2) == 0)
                cout<<j;
            else
                cout<<"  ";
        }
        cout<<"\n";
    }
return 0;
}    