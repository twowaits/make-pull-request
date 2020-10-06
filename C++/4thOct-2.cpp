#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int r,c,start,cur_col;

    //input of row and column
    cin>>r>>c;

    int no_cylce = (c)/(2*r-1);

    // 2-D array to store the pattern
    int dp[r+1][c+1];
    memset(dp, -1, sizeof dp);

    cur_col = 1;
    start = 1;

      
    if(no_cylce>0){
    for(int i=1;i<=no_cylce;i++){

        //downward - slope
        for(int k=start;k<=r;k++){
            dp[k][cur_col] = cur_col;
            cur_col ++;
        }

        //upward - slope
        for(int k=r-1;k>=1;k--){
            dp[k][cur_col] = cur_col;
            cur_col ++;
        }
        start = 2;
    }
    }else {
        start = 1;
    }

    //printing remaing portion
        //downward - slope
        for(int k=start;k<=r;k++){
            if(cur_col>c){break;}
            dp[k][cur_col] = cur_col;
            cur_col++;
        }

        //upward - slope
        for(int k=r-1;k>=1;k--){
            if(cur_col>c){break;}
            dp[k][cur_col] = cur_col;
            cur_col++;
        }


        //printing answer
        if(r==1){

            //special case when row is 1
            for(int i=1;i<=c;i++)cout<<i<<" ";

        }else {

        for(int i=1;i<=r;i++){
            for(int j=1;j<=c;j++){
                if(dp[i][j]==-1)cout<<" ";
                else cout<<dp[i][j];
            }
            cout<<endl;
        }
    } 
    return 0;
}
