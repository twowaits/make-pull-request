/* program to print the given pattern 
Sample Input :
7 16
Sample Output :
1                       13 
  2                  12  14
    3              11        15
      4          10             16
        5      9
          6  8
            7
            
*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, m;
    cin>>n>>m;

    vector<vector<int>> grid(n+1, vector<int>(m+1, 0));

    for(int col=1; col<=m; col++){
        int rem=col%n;
        int q=col/n;

        int row=rem+q;
         if((q%2)!=0) row=n-rem;
        grid[row][col]=col;

    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(grid[i][j]==0) cout<<"  ";
            else cout<<grid[i][j]<<" ";
        }
        cout<<"\n";
    }
} 
