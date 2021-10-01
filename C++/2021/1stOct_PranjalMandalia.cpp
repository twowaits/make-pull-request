#include <bits/stdc++.h>
using namespace std;

// Function to check number is prime or divisible by 5
bool twist(int n)
{
    //check if number is divisible by 5
    if(n%5==0) return true;

    // Corner case
    if (n <= 1)
        return false;
  
    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
  
    return true;
}

// Function to print first n Fibonacci Numbers
void printFibonacciNumbers(int n)
{
    int f1 = 0, f2 = 1, i;
 
    if (n < 1)
        return;
    for (i = 1; i < n; i++) {
        if(twist(f2)){
            cout << 0 << " ";
        }
        else cout << f2 << " ";
        int next = f1 + f2;
        f1 = f2;
        f2 = next;
    }
}
 
// Driver Code
int main()
{
    int n;
    cin >> n;
    printFibonacciNumbers(n+1);
    return 0;
}