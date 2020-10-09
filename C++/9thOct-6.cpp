#include <bits/stdc++.h> //Genrally i used this header file to utilise my time in copetative coding. This file includes all standard library.
using namespace std; 
  
int factorial(int x) 
{ 
    if (x <= 1) 
        return 1; 
    int res = 2; 
    for (int i = 3; i <= x; i++) 
        res = res * i; 
    return res; 
} 
  
int gcdOfFactorial(int a, int b) 
{ 
    return factorial(min(a, b)); 
} 
  
int main() 
{ 
    int a,b; 
    cout<<"ENTER THE FIRST NUMBER : ";
    cin>>a;
    cout<<"ENTER THE SECOND NUMBER : ";
    cin>>b;
    cout << gcdOfFactorial(a, b); 
    return 0; 
} 
