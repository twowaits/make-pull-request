#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n == 1)
        return false;
    int i = 2;
    while (i * i <= n) {
        if (n % i == 0)
            return false;

        i += 1;
    }
    return true;
}
void printFibonacci(int n) {
    int f1 = 1;
    int f2 = 1;
    int f3;
    cout << f1 << " " << f2 << " ";
    while (n - 2 > 0) {
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
        if (isPrime(f3) || f3 % 5 == 0) {
            f3 = 0;
        }
        cout << f3 << " ";
        n--;
    }
}
int main() {
    int n;
    cout << "enter the number of terms you want to print" << endl;
    cin >> n;
    printFibonacci(n);
    return 0;
}