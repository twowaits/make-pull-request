#include <iostream>
using namespace std;

int factorial(int num){
   int fact = 1, i;
   for(i=1; i<=num; i++)
   fact = fact * i;
   return fact;
}
int gcd(int x, int y) {
   if (y == 0){
       return x;
   }
   return gcd(y, x % y);
}
int main() {
   int a,b;
   cin>>a>>b;
   int x=factorial(a);
   int y=factorial(b);
   cout<<gcd(x,y);
   return 0;
}