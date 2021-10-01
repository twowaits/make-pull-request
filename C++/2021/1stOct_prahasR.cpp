#include<bits/stdc++.h>
#define Int long long int
using namespace std;
bool is_prime(Int x){
    if(x<=1) return false;
    else{
        for(Int i=2;i<x;i++){
            if((x%i)==0) return false;
        }
        return true;
    }
}
int main(){
    Int n;
    cin>>n;
    Int f1=1,f2=1;
    if(n>=2) cout<<f1<<" "<<f2<<" ";
    if(n>=1 && n<2) cout<<f1<<" ";  
    for(Int i=3;i<=n;i++){
        Int temp=f1+f2;
        if(temp%5==0 || is_prime(temp)){
            cout<<0<<" ";
        }
        else{
            cout<<temp<<" ";
        }
        f1=f2;
        f2=temp;
    }
    return 0;
}