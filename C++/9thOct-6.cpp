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
  
<<<<<<< HEAD
int gcdOfFactorial(int a, int b) 
{ 
    return factorial(min(a, b)); 
=======
int gcdOfFactorial(int m, int n) 
{ 
    return factorial(min(m, n)); 
>>>>>>> 9985e4352124918cf4413b2962dd760f2aefb93d
} 
  
int main() 
{ 
<<<<<<< HEAD
    int a,b; 
    cout<<"ENTER THE FIRST NUMBER : ";
    cin>>a;
    cout<<"ENTER THE SECOND NUMBER : ";
    cin>>b;
    cout << gcdOfFactorial(a, b); 
=======
    int m,n; 
    cout<<"ENTER THE FIRST NUMBER : ";
    cin>>m;
    cout<<"ENTER THE SECOND NUMBER : ";
    cin>>n;
    cout << gcdOfFactorial(m, n); 
>>>>>>> 9985e4352124918cf4413b2962dd760f2aefb93d
    return 0; 
} 
