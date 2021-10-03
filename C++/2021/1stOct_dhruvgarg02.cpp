#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

bool isPrime(ll n) {
    for (ll i = 2; i*i <= n; i++) {
        if (n%i == 0) return false;
    }
    return true;
}

void fibonacci(ll n) {
    if (n <= 2) {
        for (ll i = 0; i < n; i++)
            cout << 1 << " ";
        return;
    }

    ll a = 1, b = 1;
    cout << a << " " << b << " ";

    for (ll i = 2;  i < n; i++) {
        ll temp = a + b;
        if (isPrime(temp) || temp%5 == 0) cout << 0 << " ";
        else cout << temp << " ";
        a = b;
        b = temp;
    }

    return;
}

int main() {
    ll n;
    cin >> n;
    fibonacci(n);
    return 0;
}
