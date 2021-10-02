#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//Fchecking for prime
bool prime(int n){
    if(n==1)
    return false;
    for(int i=2;i<n;i++){
        if(n%i==0)
        return false;
    }
    return true;
}

//fibonacci function
vector<int> Fibonacci(int n){
    vector<int>ans;               
    if(n==1)
    {
        ans.push_back(1);
        return ans;
    }
    ans.push_back(1);
    int a=0;
    int b=1;
    for(int i=2;i<=n;i++){
        int number=a+b;
        a=b;
        b=number;
        if(prime(number)||number%5==0) //checking for prime or multiple of 5
        ans.push_back(0);
        else
        ans.push_back(number);
    }
    return ans;
}
int main() {
	int n;
	cin>>n;
	vector<int>ans=Fibonacci(n);
	for(auto i:ans)
	cout<<i<<" ";
	return 0;
}