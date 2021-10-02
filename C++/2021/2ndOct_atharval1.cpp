#include <bits/stdc++.h>
using namespace std;
int main(){
    int row ,col;
    cin>>row>>col;
    vector<vector<int>> arr (row,vector<int> (col,-1) );
    int i =0,j=0,count=1;
    bool check = true;
    while(j!=col){

        arr[i][j] = count;

        if(i==0){
            check = true;
        }
        if(i==row-1){
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
    for(int  i =0;i<row;i++){
        if(i%2!=0){
            // cout<< " ";
        }
        for(int j =0;j<col;j++){
            if(arr[i][j]!=-1){
                cout<<arr[i][j]<< " ";
            }
            else{
                cout<<"  ";

            }
        }
        cout<<endl;
    }


} 