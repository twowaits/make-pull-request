#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;    cin>>r>>c;
    int n=1;
    vector<vector<int>> v(r, vector<int>(c, -1));
    bool flag=true;
    int j=0;
    for(int i=0;i<c;i++){
        v[j][i]=n;
        n++;
        if(j==r-1){
            flag=false;
        }
        else if(j==0)
            flag=true;
        if(!flag)
            j--;
        else
            j++;
    }
    for(int i=0;i<r;i++){
        for(auto j=0;j<c;j++){
            if(v[i][j]!=-1)
                cout<<v[i][j];
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
