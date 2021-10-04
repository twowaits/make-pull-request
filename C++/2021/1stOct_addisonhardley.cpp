#include <iostream>
#include <vector>
using namespace std;

bool isPrime(long long x) {
    if(x == 1) return false;
    for(long long i=2; i*i <= x; i++) {
        if(x%i == 0) return false;
    }
    return true;
}

void fibonacciWithTwist(int n) {
    vector<long long> fib(n, 1);
    cout<<fib[0]<<" "<<fib[1]<<" ";
    for(int i=2; i<n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
        if(isPrime(fib[i]) || fib[i]%5 == 0) cout<<0<<" ";
        else cout<<fib[i]<<" ";
    }
    cout<<"\n";
}

int main() {
    cout << "Enter number of terms:\n";
    int n; cin >> n;

    fibonacciWithTwist(n);
    // Sieve of Eratosthenes could be used for optimization but the upper limit of n is not given.

    return 0;
}