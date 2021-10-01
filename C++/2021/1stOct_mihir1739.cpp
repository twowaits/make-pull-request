#include<iostream>
#include<cmath>
using namespace std;
bool is_prime(long n)
{
    if (n == 1)
    {
        return true;
    }
    bool prime = true;
    int r = sqrt(n)+1;
    for (int i = 2; i <r; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return prime;
}

void fibbonacci(int n)
{
    long long a = 1;
    long long b = 1;
    int curr = 2;
    cout << a << ' ' << b <<' ';
    while(curr < n)
    {
        long long c = a + b;
        if (is_prime(c) || c % 5 == 0)
        {
            cout << '0' << ' ';
        }
        else
        {
            cout << c << ' ';
        }
        a = b;
        b = c;
        curr++;
    }
}
int main(){
    int n;
    cin >> n;
    fibbonacci(n);
    return 0;
}