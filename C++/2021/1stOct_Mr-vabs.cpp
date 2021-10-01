//input number 
//It will print Fibonacci and change prime or multiple of 5 into 0

#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}

void vbfib(int n)
{
    static int a = 1, b = 1, sum = 0;
    if (n != 0) {
    	if(a%5==0 || isPrime(a))
    		cout<<"0 ";
        else
        	cout<<a<<" ";
        sum = a + b;
        a = b;
        b = sum;
        return vbfib(n-1);
    }
}

int main()
{
    int ip_n;
    //cout<<"Enter number of terms : ";
    cin>>ip_n;
    vbfib(ip_n);
    return 0;
}
