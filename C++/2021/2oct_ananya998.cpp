#include <iostream>
#include<vector>
using namespace std;

int main(){
    int a,b,i = 0, j = 0;
    cout<<"enter number of rows ";
    cin>>a;
    cout<<"enter number of columns ";
    cin>>b;
    vector<vector<int> >arr(r,vector<int>(b,0));
    bool check = true; 
    for( j=1; j<=b; j++){
        arr[i][j-1] = j ;
        if(i==0){     
           check = false;
        }
        if(i==(a-1)){
           check = true;
        }
        if(check) --i;
        else  ++i;
    }

    for ( i=0;i<a;i++){
        for ( j=0;j<b;j++){
            if(arr[i][j]!=0)
                cout << arr[i][j] <<" ";
            else
                cout << "  ";
        }
        cout<<endl;
    }
}   
