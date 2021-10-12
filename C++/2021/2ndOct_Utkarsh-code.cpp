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

    int H, W;
    cin>>H>>W;

    vector<vector<int>> grid(H+1, vector<int>(W+1, 0));

    for(int col=1; col<=W; col++){
        int rem=col%H;
        int q=col/H;

        int row=rem+q;
         if((q%2)!=0) row=H-rem;
        grid[row][col]=col;
       
    }

    for(int i=1; i<=H; i++){
        for(int j=1; j<=W; j++){
            if(grid[i][j]==0) cout<<"  ";
            else cout<<grid[i][j]<<" ";
        }
        cout<<"\n";
    }
}