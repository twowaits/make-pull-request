// a code to find the greatest common divisor of the two numbers entered:
#include <iostream>
using namespace std;

int gcd(int x, int y)
{
    // Everything number is divisible by 0 
    if (x == 0)
       return b;
    if (y == 0)
       return a;
  
    //check for base case
    if (x == y)
        return y;
  
    //if x is greater
    if (x > y)
        return gcd(x-y, y);
    return gcd(x, y-x);
}
  

int main()
{
    int a = 100, b = 56;
    cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd(a, b);
    return 0;
}
