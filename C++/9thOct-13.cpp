//pr from akshatrb
#include <stdio.h>
#include <bits/stdc++.h> 
using namespace std; 
  
int factorial(int x) { 
    if (x <= 1) return 1; 
    int res = 2; 
    for (int i = 3; i <= x; i++) res = res * i; 
    return res; 
} 
  
int gcdOfFact(int m, int n) { 
    return factorial(min(m, n)); 
} 
  
int main() { 
    int m,n;
    cin >>m>>n;
    cout << gcdOfFact(m, n); 
    return 0; 
} 