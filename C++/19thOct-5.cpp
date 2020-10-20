#include<bits/stdc++.h>
using namespace std;
#define M 100

bool isPresent(vector<vector<int>> arr,int n,int m,int key)
{
    int i=0;
    int j=m-1;
    while(i<n && j>=0)
    {
        if(arr[i][j]==key)
        {
            return true;
        }
        else if(arr[i][j]<key)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return false;

}


int main()
{
    int n;
    int m;
    cin>>n>>m;
    vector <vector <int>> arr;
    for(int i=0;i<n;i++)
    {
        vector <int> v;
        for(int j=0;j<m;j++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        arr.push_back(v);
    }

    int key;
    cin>>key;
    if(isPresent(arr,n,m,key))
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }
}