//Add code here by Arpit mangal
#include <bits/stdc++.h> 
using namespace std; 
  
int factorial(int x) 
{ 
    if (x <= 1) 
        return 1; 
    return x * factorial(x-1);
} 
  
int gcdOfFactorial(int m, int n) 
{ 
    return factorial(min(m, n)); 
} 
  
int main() 
{ 
    int m = 5, n = 120; 
    cout << gcdOfFactorial(m, n); 
    return 0; 
} 
