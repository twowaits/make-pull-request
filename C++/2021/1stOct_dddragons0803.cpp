#include <bits/stdc++.h>
 
 using namespace std ;
 
 
 bool is_prime(int n)
 {
  if (n <= 1)
        return false;
  
    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
  
    return true;
 }
 
 int main() 
 {
   int n,c ;
   cin >> n ;
   int a = 0;
   int b=1 ;
   for(int i=0 ;i< n ;i++)
   {
   if(a%5==0) cout << 0 << " " ;
   else if(is_prime(a)) cout << 0 << " " ;
   else 
      cout << a << " " ;
      c=a;
   a =b ;
   b=c+b ;
   }
 
 return 0 ;
 }
