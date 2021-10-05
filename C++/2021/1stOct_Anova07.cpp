//by Anova Pandey 
//This is for the task assigned for C++ for 1st Oct - Fibonnaci
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
  
    // Check from 2 to sqrt(n)
    for (int i = 2; i < sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}

void Fibonacci(int n)
{
    int i=1; int j=1; 
    if(n>=1)
    cout<<i<<" ";
    if(n>=2)
    cout<<j<<" ";
    for(int v=3; v<=n; v++)
    {
        int k=i+j;
        if(k%5==0 || isPrime(k))
        cout<<"0 ";
        else
        cout<<k<<" ";
        i=j;
        j=k;
    }
}

int main()
{
    int n;
    cin>>n;
    Fibonacci(n);
    return 0;
}
