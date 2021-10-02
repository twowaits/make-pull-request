#include<bits/stdc++.h>
using namespace std;

//checking prime
int prime(int n) {
    if (n <= 1)
        return 0;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return 1;
    return 0;
}
//main code
int main() {
    int i, number;
    int n1 = 0, n2 = 1;
    int n3 = n1 + n2;
    cin >> number;
    cout << n2 << " ";
    for (i = 3; i <= number + 1; ++i) {
        if (n3 % 5 == 0) {    //checking multiple of 5
            cout << 0 << " ";
        }
        else if (prime(n3) == 0) {  //checking prime
            cout << 0 << " ";
        }
        else {
            cout << n3 << " ";
        }
        n1 = n2;
        n2 = n3;
        n3 = n2 + n1;
    }
}
