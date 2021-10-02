#include<iostream>
#include<vector>
using namespace std;

void print_pattern(int r,int c){
    vector<vector<int>> arr(r,vector<int>(c,0));
    int i=0,j=1;
    arr[0][0]=1;
    while(j<c){
        if(i<r){
            for(i=1;i<r && j<c;i++) arr[i][j++]=j;
        }
        else{
            for(i=r-2;i>=0 && j<c;i--) arr[i][j++]=j;
        }
    }
    for(int a=0;a<r;a++){
        for(int b=0;b<c;b++){
            if(arr[a][b]!=0) cout<<arr[a][b]<<" ";
            else cout<<"  ";
        }
        cout<<"\n";
    }
}


int main(){
    int r,c;
    cout<<"Enter number of rows and columns: ";
    cin>>r>>c;
    print_pattern(r,c);
    return 0;
}