#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x){
    if(x==2 || x==3){
        return true;
    }
    for(int i=2;i<x/2;i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}
void solve(int n){
    int x[n];
    x[0]=1;
    x[1]=1;
    int y[n];
    y[0]=1;
    y[1]=1;
    for(int i=2;i<n;i++){
        int z = x[i-1]+x[i-2];
        x[i] = z;
        if(z%5==0 || isPrime(z)){
            y[i]=0;
        }
        else{
            y[i]=z;
        }
    }
    for(int i=0;i<n;i++){
        cout<<y[i]<<" ";
    }
    cout<<"\n";
    
}

int main(){
    int n;
    cin>>n;
    solve(n);
    return 0;
}