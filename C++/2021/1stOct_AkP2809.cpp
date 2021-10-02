#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if(n <= 1)
        return false;
    
    bool checkPrime = true;
    
    for(int i = 2 ; i <= sqrt(n) ; ++i) {
        if( n % i == 0 ) {
            checkPrime = false;
            break;
        }    
    }
    
    return checkPrime;
}

bool isMultipleOf5(int n) {
    if(n % 5 == 0)
        return true;
    else
        return false;
}

int main ()
{
	int n;
	cin>>n;
	
	int a = 0, b = 1;
	cout<<b<<" ";
	
	for(int i = 1 ; i < n ; ++i) {
	    int c = a + b;
	    
	    if( isPrime(c) || isMultipleOf5(c) )
	        cout<<"0 ";
	    else
	        cout<<c<<" ";
	        
	    a = b;
	    b = c;
	}
	
	return 0;
}
