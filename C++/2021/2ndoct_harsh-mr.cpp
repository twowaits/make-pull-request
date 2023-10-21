#include <bits/stdc++.h>
using namespace std;


int main(){
    // no of rows ans col;
    int r ,c;
    cin>>r>>c;
    // vector<char> col(c) ;
    vector<vector<int>> matrix (r,vector<int> (c,-1) );
    int i =0,j=0,count=1;
    bool check = true;
    while(j!=c){

        matrix[i][j] = count;

        if(i==0){
            check = true;
        }
        // to check if it hits the lower boundary limeit than we reverse the dirction
        if(i==r-1){
            check = false;
        }
        if(check){
            i++;
        }
        else{
            i--;
        }
        count++;
        j++;

    }
    // printing the pattern
    for(int  i =0;i<r;i++){
        if(i%2!=0){
            // cout<< " ";
        }
        for(int j =0;j<c;j++){
            if(matrix[i][j]!=-1){
                cout<<matrix[i][j]<< " ";
            }
            else{
                cout<<"  ";

            }
        }
        cout<<endl;
    }


}