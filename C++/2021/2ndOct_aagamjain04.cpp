#include <bits/stdc++.h>
using namespace std;

int_t main()
{
    


    int r,c;
    cin >> r >> c;
    int arr[r][c];
    memset(arr,0,sizeof(arr));
    int i = 0, j = 0;
    int k = 1;
    bool flag = 1;
    while(j<c)
    {
        arr[i][j] = k++;
        if(flag)
        i++;
        else
        i--;

        if(i==r)
        {
            i=r-2;
            flag=0;
        }
        else if(i==-1)
        {
            i=1;
            flag=1;
        }
        j++;
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(arr[i][j]==0)
            cout << "  " ;
            else cout << arr[i][j]<< " ";
        }
        cout << "\n";
    }

    return 0;
}
