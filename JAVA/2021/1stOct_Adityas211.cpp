#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
	if(n==2||n==3)return true;
	for(int i=2;i<=n/2;i++){
		if(n%i==0)return false;
	}
	return true;
}
int main(){
	int n;
	cout<<"Enter Number Of terms :"<<endl;
	cin>>n;
	int fib1=1,fib2=1;
	if(n<0)
	cout<<"Invalid Input";
	if(n==1)
	cout<<1;
	else if(n==2)
	cout<<1<<" "<<1;
	else{
			cout<<1<<" "<<1<<" ";
			for(int i=3;i<=n;i++){
				int fib3=fib1+fib2;
				if(fib3%5==0 or isPrime(fib3)) cout<<0<<" ";
				else cout<<fib3<<" ";
				fib1=fib2;fib2=fib3;
			}
	}
}
