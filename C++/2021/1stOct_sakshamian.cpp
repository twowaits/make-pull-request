// IDE used - VS Code

#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;


 bool prime(int x)
 {
    if(x <= 1)
        return false;

    for(int i=2; i<x; i++){
        if(x%i == 0){
            return false;
        }
  }
    return true;
 }

void solve(int n){
    int a=1, b=1;
    int c= a+b;
    for(int i=1;i<=n;i++){
        if(a%5 == 0 || prime(a)){
            cout<<0<<" ";
        }
        else{
            cout<<a<<" ";
        }
        a=b;
        b=c;
        c=a+b;
    }
}

int main(){
    fast;
    int n; cin>>n;
    solve(n);
    return 0;
}
