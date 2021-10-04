#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
	for(int i=2; i<n; i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

void fibonacci(int n){
	int a=1;
	int b=1;
	
	cout<<a<<" ";
	cout<<b<<" ";
	
	for(int i=2; i<n; i++){
		int c = a+b;
		a = b;
		b = c;
		if(isPrime(c) || c%5==0){
			c=0;
		}
		if(i==n-1){
			cout<<c<<endl;
		}
		else{
			cout<<c<<" ";
		}
	}
	return;
}

int main(){
	int n;
	cin>>n;
	
	fibonacci(n);
	return 0;
}
