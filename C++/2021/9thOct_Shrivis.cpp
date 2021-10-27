#include <iostream>

using namespace std;

int fact(int n) {
    if (0 <= n && n < 2) return 1;
    return n*fact(n-1);
}

int GCD(int a, int b) {
    if (b == 0) return a;
    return GCD(b, a%b);
}

int main() {
    int a, b;
    cin>>a>>b;
    cout<<GCD(fact(a), fact(b));
    return 0;
}
