#include <iostream>
#include <cmath>
using namespace std;
int range=0;
void printarr(int spiral[][100])
{
    for (int i=0;i<range;i++)
    {
        for(int j=0;j<range;j++)
        {
            cout<<*(*(spiral+i)+j)<<'\t';
        }
        cout<<endl;
    }
}
void setpattern(int spiral[][100],int n)
{
    int counter=1;
    int top=0, bottom=range;
    int left=0, right=range;
    while(top<bottom && left<right)
    {
        for(int i=left;i<right;i++)
        {
            if(counter<=n)
            {
                spiral[top][i]= counter++;
            }

        }
        top++;
        for (int j=top;j<bottom;j++)
        {
            if(counter<=n)
            {
                spiral[j][right-1]=counter++;
            }

        }
        right--;
        for (int i=right-1;i>=left;i--)
        {
            if(counter<=n)
            {
                spiral[bottom-1][i]=counter++;
            }
        }
        bottom--;
        for(int j=bottom-1;j>=top;j--)
        {
            if(counter<=n)
            {
                spiral[j][left]=counter++;
            }

        }
        left++;
    }



}

int main()
{
    cout<<"Enter n: ";
    int n;
    cin>>n;
    range=ceil(sqrt(n));
    int spiral[100][100];
    for (int i=0;i<range;i++)
    {
        for (int j=0;j<range;j++)
            spiral[i][j]=0;
    }
    setpattern(spiral,n);
    printarr(spiral);
    /* char arr[3][3]={'s','w','a','p','n','i','l','t','i'};

    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<'\t';
        }
        cout<<endl;
    } */
}
