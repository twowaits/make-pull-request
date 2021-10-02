#include <string.h>
#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m] = {{0}};
    memset(a, 0, sizeof(a[0][0]) * (n) * (m)); //set all to zeros
    bool down_flag = true, up_flag=false;
    int i=0,j=0;
    //set values 
    for(i=0,j=0;i<m;i++){
        a[j][i] = i+1;
        cout << a[j][i] << " " << j << " " << i << endl;
        if(down_flag) j++;
        if(up_flag) j--;
        if(j==n){
            down_flag = false;
            up_flag = true;
            j = j-2;
        } 
        else if(j==-1){
            down_flag = true;
            up_flag=false;
            j=j+2;
        }
    }
    cout << endl;
    //print values
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i][j]==0) cout << " ";
            else cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
