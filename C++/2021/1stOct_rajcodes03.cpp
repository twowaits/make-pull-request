#include <iostream>

using namespace std;

bool isPrime(int n)
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
    int n;
    if (n < 0)
        exit(0);
    cout << "Enter number n please ";
    cin >> n;

    int a = 1, b = 0, c;
    
    for (int i = 1; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
        
        if (c%5==0 || isPrime(c))
        {
            cout << "0 ";
        }
        else
        {
            cout << c << " ";
        }
    }
    return 0;
}
