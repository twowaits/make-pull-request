//Solution for Fibonacci series with a twist.
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

//helper function to determine, if a number is prime or not,takes O(log(num) )time
bool is_prime(unsigned long long num)
{
	unsigned long long i;
	for(i=2;i*i<=num;i++)
	{
		if(num%i==0)return false;
	}
	return true;
}
//we could have used a sieve to list out all primes, but that would take O(Nlog(log(N)) ) time.
// where N is the maximum limit to which primes need to be generated
// so through that method we can only generate primes upto 10^9(max_limit) or 10^8
//but 100 th fibonacci number already exceeeds 10^18, so sieve method won't be able to generate
//instead this function can be used to check whether a number is prime or not in O(log(num) )
int main()
{
	unsigned long long term_1,term_2,term_3,n,cnt=0;
	//taking unsigned long long because it has range upto 2^64
	term_1=term_2=1; //since the series starts with 1
	term_3=term_1+term_2; //fib(n)=fib(n-1)+fib(n-2) is the recurrence relation
	cin>>n;
	if(n>=1)cout<<1<<" ";
	if(n>=2)cout<<1<<" ";
	cnt=2;
	while(cnt<n)
	{
		if( is_prime(term_3) or (term_3%5==0) )
		{
			cout<<0<<" ";
		}
		else cout<<term_3<<" ";
		
		term_1=term_2;  //these assignment operations follow from the recurrence relations
		term_2=term_3;
		term_3=term_1+term_2;
		cnt++;
	}
}
