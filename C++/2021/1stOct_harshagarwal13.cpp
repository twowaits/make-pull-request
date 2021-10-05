//twist fibonacci series which print prime number and number divisible by 5 as
//0 in the series
#include<iostream>
using namespace std;
int isPrime(int n){
	if(n==2){
		return 0;
	}
	else if(n%5==0)
		return 0;
	else if(n%2 == 0)
		return n;
	else if(n%2 != 0){
		for(int i=2;i<n;i++){
			if(n%i == 0)
				return n;
		}
	}
	return 0;
}
int main(){
	int n;
	cin>>n;
	int a=1;
	int b=1;
	int c=0;
	if(n==0){
		cout<<"0"<<endl;
	}
	else if(n==1){
		cout<<"1"<<endl;
	}
	else if(n==2){
		cout<<"1 1"<<endl;
	}
	else{
		int i=3;
		cout<<a<<" ";
		cout<<b<<" ";
		while(i<=n){
			c=a+b;
			cout<<isPrime(c)<<" ";
			a=b;
			b=c;
			i++;
		}
	}
}
