#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rows,col;
    printf("Enter the number of row you want to print: ");
    scanf("%d",&rows);
    printf("Enter the number of columns you want to print: ");
    scanf("%d",&col);
    vector<vector<int>>mat(rows,vector<int>(col,0));

    int i = 0, j = 0;
    bool up = true; 

    for(int j=1; j<=col; j++)
    {
        mat[i][j-1] = j ;
        if(i==0){     
           up = false;
        }
        if(i==(rows-1)){
           up = true;
        }
        if(up) --i;
        else  ++i;
    }

    for (int i=0;i<rows;i++)
    {
        for (int j=0;j<col;j++)
        {
            if(mat[i][j]!=0)
                printf("%d ",mat[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }
}
