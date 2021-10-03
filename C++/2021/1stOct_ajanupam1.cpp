#include <bits/stdc++.h>
using namespace std ;


bool isMultiple(int n){
    if(n%5==0) return true ;
    else return false ;
}

bool isPrime(int n){
    if(n==1) return false ;
    int cnt = 0 ;
    for(int i =2 ; i<n ; i++){
        if(n%i==0) cnt++ ;
    }
    if(cnt<2) return true ;
    else return false ;
}

int fibo(int n){
    if(n==1)
        return 1 ;   
    if(n==0)
        return 0 ;
        int a = fibo(n-1);
        int b = fibo(n-2) ;
    return a+b ;
}


int main(){
    int n ; 
    cin>>n ;
    for(int i = 1 ; i<=n; i++){
        int a = fibo(i) ;
        if(isMultiple(a)==1 || isPrime(a)==1)
        cout<<"0"<<" "; 
        else 
        cout<<a<<" " ;
    }
}