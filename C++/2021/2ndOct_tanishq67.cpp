#include<bits/stdc++.h>
using namespace std ;
#define ll long long
#define rep(i,a) for(i = 0 ; i < a ; i++)
#define whln(t) while(t--)
#define whlp(t) while(t++)


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif

	int rows,columns,i,j;
    cin>>rows; cin>>columns;
    vector<vector<int> >arr(rows,vector<int>(columns,0));
    bool check = true; 
    for( j=1; j<=columns; j++){
        arr[i][j-1] = j ;
        if(i==0){     
           check = false;
        }
        if(i==(rows-1)){
           check = true;
        }
        if(check) --i;
        else  ++i;
    }

    rep(i,rows){		
        rep(j,columns){
            if(arr[i][j]!=0)
                cout << arr[i][j] <<" ";
            else
                cout << "  ";
        }
        cout<<"\n";
    }
	
    return 0;
}

//   *****  *******   !
//   *		     *    !
//   ***       *      !
//   *       *        !
//   *****  *******   !

