#include <iostream>
//#include<bits/stdc++.h>
using namespace std;

bool ifprime(int n);
bool mul(int n);

//main functiion
int main() 
{
    int n, t1 = 0, t2 = 1, nextTerm = 0;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";
    for (int i = 1; i <= (n+1); ++i) {
        // Prints the first two terms.
        if(i == 1) {
            cout << t1 << ", ";
            continue;
        }
        if(i == 2) {
            cout << t2 << ", ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        if(ifprime(nextTerm) || mul(nextTerm)) cout<<"0"<< ", ";
        else cout << nextTerm << ", ";

    }
    return 0;
}

bool ifprime(int n){
  int i;
    bool isPrime = true;
   if (n == 0 || n == 1) {
        isPrime = false;
    }
    else {
        for (i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    return isPrime;
}

bool mul(int n){
  if(n % 5 == 0) return true;
  else return false;
}
