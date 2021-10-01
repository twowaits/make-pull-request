#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

typedef long long int ll;

// Function to check if n is prime or not
ll isPrime(ll n) {
    if (n <= 1) return 0;
    if (n <= 3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;
    for(ll i = 5; i <= sqrt(n) + 1; i += 6) {
        if (n % i == 0 or (n % (i + 2)) == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    ll n;
    cin >> n;  // Taking input for the n
    vector<ll> fibo = {1, 1};  // Initialising first two terms
    for(ll i = 2; i < n; i++) {
        fibo.push_back(fibo[i - 1] + fibo[i - 2]);  // fibo[i] = fibo[i - 1] + fibo[i - 2]
    }
    // Checking the condition for being prime or multiple of 5 ->
    for(ll &i : fibo) {
        if (isPrime(i) || (i % 5 == 0)) {
            i = 0;
        }
    }
    for(ll i = 0; i < n; i++) {
        cout << fibo[i] << " \n"[i + 1 == n];
    }
    return 0;
}
