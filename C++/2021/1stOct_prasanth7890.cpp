#include<iostream>
using namespace std;

bool isPrime(int x)
{
    for(int i=2;i<=x/2;i++)
    {
        if(x%i == 0) return false;
    }
    return true;
}

void fibonacci(int input)
{
    int a = 0, b = 1, c = 1;
    for (int i = 0; i < input; i++)
    {
        a = b;
        b = c;
        c = a + b;
        if(a != 1)
        {
            if(isPrime(a) || a%5==0) cout<<0<<" ";
            else cout<< a <<" ";
        }
        else {
            cout<< a <<" ";
        }
    }
    
}

int main()
{
    int input;
    cin>> input;
    
    fibonacci(input);
}