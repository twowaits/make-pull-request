#include<bits/stdc++.h>
using namespace std;

//ZigZag Problem Logic
void drawZigZag(int m, int n)
{
    int mat[m][n];
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==j && i<m)
                cout<<j;
            else if(((i+j) % (m*2) == 0) && j<(m*2-1))
                cout<<j;
            else if((j-i) % (m*2-2) == 0)
                cout<<j;
            else
                cout<<"  ";
        
        }
        cout<<endl;
    }
}

//Driver Code
int main()
{
    int row, column;
    cout<<"Enter Row and Column: ";
    cin>>row>>column;

    drawZigZag(row,column);

    return 0;
}