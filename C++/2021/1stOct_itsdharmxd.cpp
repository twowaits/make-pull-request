#include <bits/stdc++.h>
using namespace std;
/*
  Marking the primes using Sieve
*/
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

    /*
       checking for prime or multiple of 5
    */
    for(int i=0; i<r.size(); i++)
        if(prime[r[i]]==true || r[i]%5==0)
            r[i] = 0;
    return r;
}

vector<int> FibonacciNumbers(int n)
{
    vector<int> r;
    int f1 = 0, f2 = 1, i;

    if (n < 1)
        return r;
    for (i = 1; i < n; i++) {
      
        r.push_back(f2);
        int next = f1 + f2;
        f1 = f2;
        f2 = next;
    }
    return r;
}

/*
   Main function
 */
int main()
{
    int n;
    cin>>n;
    vector<int> r = FibonacciNumbers(n+1);
    r = SieveOfEratosthenes(r);
    /*
      Printing my  answers
    */
    for(int i=0; i<r.size(); i++)
        cout<<r[i]<<" ";
    return 0;
} 