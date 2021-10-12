/** Contributed by: ADIT SHAH
    Algorithm: Searching of elements in a row-wise and column-wise sorted matrix
**/

#include<iostream>
using namespace std;
int main()
{
    int row,col,x;
    cout<<"Enter the dimensions of the matrix: ";
    cin>>row>>col;
    cout<<"\nEnter the matrix:"<<endl;
    int arr[row][col];
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
            cin>>arr[i][j];
    char ch='y';
    while(ch=='y' || ch=='Y')
    {
        cout<<"\nEnter the element you want to search for: ";
        cin>>x;
        bool isFound=false;
        if(row>0 && col>0)
        {
            int s=arr[0][0];
            int l=arr[row-1][col-1];
            if(x>=s && x<=l)
            {
                int i=row-1,j=0;
                while(i>=0 && j<col)
                {
                    if(x==arr[i][j])
                    {
                        isFound=true;
                        break;
                    }
                    else if(x<arr[i][j])
                        i--;
                    else
                        j++;
                }
            }
        }
        if(isFound)
            cout<<"TRUE\n";
        else
            cout<<"FALSE\n";
        cout<<"Want to search more elements ?:(y or n) ";
        cin>>ch;
    }
    return 0;
}
