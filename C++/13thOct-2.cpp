#include <iostream>
using namespace std;

void spiral(int n,int arr[],int mat[10][10])
{
    int t=0,l=0,b=n-1,s=n-1,j=0,r=n,c=n;
    while(1)
    {
        if(l>s)
          break;
        for(int i=l;i<=s;i++)
          mat[t][i]=arr[j++];
        t++;
        if(t>b)
          break;
        for(int i=t;i<=b;i++)
          mat[i][s]=arr[j++];
        s--;
        if(l>s)
          break;
        for(int i=s;i>=l;i--)
          mat[b][i]=arr[j++];
        b--;
        if(t>b)
          break;
        for(int i=b;i>=t;i--)
          mat[i][l]=arr[j++];
        l++;
    }
}
int main()
{

    int n,arr[150],i,j=1,mat[10][10];
    cin >> n;
    for(i=0;i<n*n;i++)
    {
        arr[i]=j;
        j++;
    }
    spiral(n,arr,mat);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
          cout << mat[i][j] << " ";
        cout << '\n';  
    }
    return 0;
}
