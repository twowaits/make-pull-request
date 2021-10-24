
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r,c;
    cin>>r>>c;
    vector<vector<int>>v(r,vector<int>(c));
    for(int i=0;i<r;i++)
    {
         int j=0;
       while(j<c)
       {
           v[i][j]=0;
           j++;
       }
    }
   
   int i=0,flag=1,j=1;
    while(j<=c)
    {
       if(i==0)
       flag=0;
       if(i==r-1)
       flag=1;
       v[i][j-1]=j;
       if(flag==1)
       i--;
       else
       i++;
       j++;
    }

     i=0,j=0;
    while(i<r)
    {
        j=0;
        while(j<c)
        {
            if(v[i][j]==0)
            {
                cout<<" ";
            }
            else
            {
                cout<<v[i][j];
            }
            cout<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
} 