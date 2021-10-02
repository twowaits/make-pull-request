#include <bits/stdc++.h>
using namespace std;

// sieve erastothenes method to find the prime numbers efficiently
vector<int> SieveOfEratosthenes(vector<int> r)
{
    int n = r[r.size()-1];
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    prime[0] = false;
    prime[1] = false;
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    // Print all prime numbers
    for(int i=0; i<r.size(); i++)
        if(prime[r[i]]==true || r[i]%5==0)
            r[i] = 0;
    return r;
}


//Function to print the fibonacci number
vector<int> printFibonacciNumbers(int n)
{
    vector<int> r;
    int first_1 = 0, first_2 = 1, i;

    if (n < 1)
        return r;
    for (i = 1; i < n; i++) 
    {
        r.push_back(first_2);
        int next = first_1 + first_2;
        first_1 = first_2;
        first_2 = next;
    }
    return r;
}

// Driver Code
int main()
{
    int count;

    cout<<"Enter number of Value of count:";

    cin>>count;

    vector<int> r = printFibonacciNumbers(count+1);

    r = SieveOfEratosthenes(r);

    for(int i=0; i<r.size(); i++)
        cout<<r[i]<<" ";

    return 0;
}
