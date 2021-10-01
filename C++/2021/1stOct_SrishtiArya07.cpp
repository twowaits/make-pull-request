//1st Oct : Write a Function in C++ to achieve below functionality - Fibonacci Series with a Twist
//Srishti Arya

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
    {
    	if (n % i == 0)
            return false;
	}
    return true;
}
 
int main()
{
	int n;
	cin>>n;
    int a=0,b=1,c=0;
    cout<<b<<" ";
    c=a+b;
    for (int i = 1; i < n; i++) 
	{
    	if(c%5==0)
    		cout<<0<<" ";
    	else if(isPrime(c))
    		cout<<0<<" ";
    	else
        	cout << c << " ";
        	
        a=b;
        b=c;
        c = a+b;
    }
    return 0;
}
