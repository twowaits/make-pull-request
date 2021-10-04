#include<bits/stdc++.h>
#include <iostream>
using namespace std;

bool isPrime(long long int n)
{
    
    if(n == 1)  
        return false;
    for(long long int i=2; i<=sqrt(n); i++)
    {
        if(n%i == 0)
            return false;
    }
    return true;
}


int main()
{
    int N;
    cin>>N;
    
    long long int fibonacci[N];
    
    fibonacci[0] = 1;
    fibonacci[1] = 1;
    
    for(int i=2; i<N; i++)
        fibonacci[i] = fibonacci[i-1]+fibonacci[i-2];
        
    for(int i=0; i<N; i++)    
    {
        if(fibonacci[i]%5 == 0)
            fibonacci[i] = 0;
        if(isPrime(fibonacci[i]))
            fibonacci[i] = 0;
    }
    
    for(int i=0; i<N; i++)
        cout<<fibonacci[i]<<" ";
    
    return 0;
}
