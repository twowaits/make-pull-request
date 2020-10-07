//C++ program to print the Fibonacci with a twist

#include<bits/stdc++.h>
using namespace std;
//Maximum size of the array
#define size 10000000
//Set to store the prime upto maximum size
set<int>primes;

//Function sieve to store the prime number upto 10^6 in a set
void sieve(){
	bool p[size+1];
	//Mark all number a prime
	memset(p,true,sizeof(p));
	//Mark zero or one as not prime
	p[0] = p[1] = false;
	//Mark all non prime false
	for(int i=2;i*i<=size;i++){
		if(p[i]==true){
			//Insert the prime number in the set
			primes.insert(i);
			for(int j=i*i;j<=size;j+=i)
			p[j] = false;
		}
	}
}

int main()
{
	//Call the function sieve to store the prime number upto 10^6 in a set
	sieve();
	
	int n;
	//Enter the any number(between 1 to 3000) upto which you want to print the Fibonacci Series
	cin>>n;
	//Initialization of num1, num2 and num3
	int num1 = 1,num2 = 1,num3 = 0;
	//Loop till the number user wanted to print the Fibonacci Series
	for(int i=1;i<=n;i++){
		if(i==1 || i==2)
		cout<<1<<" ";
		else{
			//Assign updated value in num3
			num3 = num1+num2;
			//Update the value of num1
			num1 = num2;
			//Update the value of num2
			num2 = num3;
			//Check if the number is prime or not or is divisible by 5 or not if so print zero
			if(primes.find(num3)!=primes.end() || num3%5==0)
			cout<<0<<" ";
			//If not print the number
			else
			cout<<num3<<" ";
		}
	}
	cout<<endl;
	return 0;
}
