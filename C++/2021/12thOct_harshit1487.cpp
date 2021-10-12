#include <bits/stdc++.h> 
using namespace std; 
int fact(int a) 
{ 
    if (a <= 1) 
        return 1; 
    return (a * fact(a-1));
} 

int gcd_factorial(int x, int y) 
{ 
    return fact(min(x, y)); 
} 
  
int main() 
{ 
    int n1,n2;
    cout << "Enter two number:";
    cin >> n1 >> n2;
     
    cout << gcd_factorial(n1, n2); 
    return 0; 
} 
