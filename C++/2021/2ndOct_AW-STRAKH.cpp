#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int rows,column;
    cin>>rows>>column;
    int ans[rows][column];
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<column;j++)
        ans[i][j]=0;
    }
   
   int i_row=0;
   bool movetop=true;;
    for(int j_col=0; j_col<column;)
    {
        ans[i_row][j_col] = j_col+1;
        if(i_row==rows-1)    
           movetop = true;
        if(i_row==0)
           movetop = false;
       
       if(movetop==true)
       {
           i_row=i_row-1;
       }
       else
       {
           i_row=i_row+1;
       }
        j_col++;
    }

    for (int i=0;i<rows;i++)
    {
        for (int j=0;j<column;j++)
        {
            if(ans[i][j]!=0)
            {
                cout << ans[i][j];
            }
            else
            {
                cout << " ";
            }
            cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
} 