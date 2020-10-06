#include<iostream>
#include<vector>
using namespace std;

long long maxPrime = 100000000;
vector<bool> PrimeNumbers(maxPrime+1,true);

//Populate array with prime numbers takes n(log n) but here our n = maxPrime which is constant therefore takes constant time
void SieveOfEratosthenes()
{
    PrimeNumbers[0]=false;
    PrimeNumbers[1]=false;
    for(long long i=2; i*i<=maxPrime; i++) 
    { 
        if (PrimeNumbers[i]) 
        { 
            for (long long j=i*i; j<=maxPrime; j += i) 
                PrimeNumbers[j] = false; 
        } 
    }
}

int main()
{
    cout<<"Generating prime numbers. Please Wait...";
    SieveOfEratosthenes();
    int testCases;
    cout<<"\nEnter number of test cases: ";
    cin>>testCases;
    while (testCases--)
    {
        cout<<"\nEnter number of terms of Fibonacci Series less than 40: ";
        long long n;
        cin>>n;
        if(n<1 || n>=40)
        {
            cout<<"\n Invalid input!!";
            continue;
        }
        cout<<"Twisted Fibonacci series: 1 ";
        if(n==1)
        {
            continue;
        }
        cout<<"1 ";
        if(n==2)
        {
            continue;
        }
        vector<long long> fibSeries;
        fibSeries.push_back(1);
        fibSeries.push_back(1);
        long long ctr=2;
        while (ctr<n)
        {
            long long res = fibSeries[ctr-1]+fibSeries[ctr-2];
            if(PrimeNumbers[res])
            {
                cout<<"0 ";
            }
            else if(res%5==0)
            {
                cout<<"0 ";
            }
            else
            {
                cout<<res<<" ";
            }
            fibSeries.push_back(res);
            ctr++;
        }
    }
    return 0;
}
