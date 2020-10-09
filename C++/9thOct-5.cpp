#include<bits/stdc++.h>
using namespace std;



unsigned long long int factorial(int n) 
{ 
    unsigned long long int res = 1;
    for (int i = 2; i <= n; i++) 
        res *= i; 
    return res; 
} 

unsigned long long int gcd(int m, int n) 
{ 
    return factorial(min(m, n)); 
} 
  
int main() 
{ 
    int m, n; 
    cin>>m>>n;
    cout<<gcd(m, n); 
    return 0; 
} 