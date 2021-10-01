// //Add following functionalities to it :

// Take input the value of 'n', upto which you will print.
// -Print the Fibonacci Series upto n while replacing prime numbers, all multiples of 5 by 0.
// Sample Input :
// 12
// 27

// Sample Output :
// 1 1 0 0 0 8 0 21 34 0 0 144
// 1 1 0 0 0 8 0 21 34 0 0 144 0 377 0 987 0 2584 4181 0 10946 17711 0 46368 0 121393 196418

#include <iostream>
using namespace std;

 bool check_prime(int n)
 {
  if (n <= 1){
        return false;
  }
    for (int i = 2; i < n; i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
 }
 
 int main() 
 {
   int n ;
   cin >> n ;
   int a = 1;
   int b=1 ;
   int c=a+b;
   for(int i=0 ;i< n ;i++)
   {
   if(a%5==0) {
       cout << 0 << " " ;
   }
   else if(check_prime(a)) 
   {
       cout << 0 << " " ;
   }
   else {
    cout << a << " " ;
   }
   a=b ;
   b=c ;
   c=a+b;
   }
   }
