// Add following functionalities to it :

// Take input the value of 'n', upto which you will print.
// -Print the Fibonacci Series upto n while replacing prime numbers, all multiples of 5 by 0.
// Sample Input :
// 12
// 27

// Sample Output :
// 1 1 0 0 0 8 0 21 34 0 0 144
// 1 1 0 0 0 8 0 21 34 0 0 144 0 377 0 987 0 2584 4181 0 10946 17711 0 46368 0 121393 196418

// ------Here is the code to add the above functionality.
  
#include <iostream>
using namespace std;
// checking for prime number
bool isPrime(long long n){
    if(n<=1)return false;
    if(n<=3)return true;
    if(n%2==0||n%3==0)return false;
    for(int i=5;i*i<=n;i=i+6)
        if(n%i==0||n%(i+2)==0)
            return false;
    return true;
}

// checking for multiple of file
bool multipleOf5(long long n) {
    if(n % 5 == 0) {
        return true;
    }
    return false;
}

int main() {
	int n;
	cin >> n;
	long long a = 1;
	long long b = 1;
	cout << "1 1 ";
//   iterative way for finding fibonacci series
	for(int i=2; i<n; i++) {
	    long long c = a + b;
	    if(isPrime(c) or multipleOf5(c)) {
	        cout << "0 "; 
	    }
	    else {
	        cout << c << " ";
	    }
	    a = b;
	    b = c;
	}
	return 0;
}
