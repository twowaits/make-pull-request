#include <iostream>
#include<vector>
using namespace std;

int main(){
    int r,c,i = 0, j = 0;
    cout<<"enter number of rows ";
    cin>>r;
    cout<<"enter number of columns ";
    cin>>c;
    vector<vector<int> >arr(r,vector<int>(c,0));
    bool check = true; 
    for( j=1; j<=c; j++){
        arr[i][j-1] = j ;
        if(i==0){     
           check = false;
        }
        if(i==(r-1)){
           check = true;
        }
        if(check) --i;
        else  ++i;
    }

    for ( i=0;i<r;i++){
        for ( j=0;j<c;j++){
            if(arr[i][j]!=0)
                cout << arr[i][j] <<" ";
            else
                cout << "  ";
        }
        cout<<endl;
    }
} 