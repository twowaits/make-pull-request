#include <bits/stdc++.h>
using namespace std;

bool isprime(int n){
    
    if(n==1) return false;
    else{
    for(int i=2;i<n;i++){
        if(n%i==0) return false;
    }
    return true;
    }
}
int fib(int n){
    if(n==1 || n==2) return n-1;
    else return fib(n-1) + fib(n-2);
}
int main(){
    long long n;
    cin>>n;
    for(int i=1;i<=n;i++){
         if(isprime(fib(i)) || fib(i)%5==0) cout<<0<<" ";
         else cout<<fib(i)<<" ";
    }
}
