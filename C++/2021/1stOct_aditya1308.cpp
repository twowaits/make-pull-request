#include <bits/stdc++.h>
using namespace std ;
bool pimeSieve(int n)
 {
    if (n <= 1)
    return false;
  
    for (int i = 2; i < n; i++)
    if (n % i == 0)
    return false;
  
    return true;
 }
 
 int main() 
 {
     int n ;
     cin >> n ;
     int a = 1;
     int b=1 ;
     for(int i=0 ;i< n ;i++)
     {
       if(a%5==0)
       cout << 0 << " " ;
       else if(primeSieve(a)) 
       cout << 0 << " " ;
       else 
       cout << a << " " ;
       a=b ;
       b=c ;
     }
  }
