#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int p(int n){
    if(n<=1) return 0;
    for(int i=2;i<n;i++){
        if(n%i==0) return 1;
    }return 0;
}

int main() {
	int i,n,n1=0,n2=1;
	int n3=n1+n2;
	cin>> n;
	cout << n2<<" ";
	for(i=3;i<=n+1;++i){
	    if(n3%5==0) cout<< 0 << " ";
	    else if(p(n3)==0) cout << 0 <<" ";
	    else cout << n3 << " ";
	    
	    n1=n2;
	    n2=n3;
	    n3=n1+n2;
	}
	return 0;
}