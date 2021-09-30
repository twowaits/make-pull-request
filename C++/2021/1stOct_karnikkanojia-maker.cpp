#include <iostream>
#include <vector>
#include <set>
#define LENGTH (int)1e5
using namespace std;

set<long long> sieve;
vector<int> isprime(LENGTH, 1);

void buildSeive(long long n)
{
    // Function generates prime numbers upto n in O(nlog(log(n))).
    for (long long i = 2; i * i <= n; i++)
    {
        if (isprime[i] == 1)
        {
            for (long long j = i * i; j <= n; j += i)
            {
                isprime[j] = 0;
            }
        }
    }
    for (long long i = 2; i <= n; i++)
    {
        if (isprime[i])
        {
            sieve.insert(i);
        }
    }
}

int main(int argc, char const *argv[])
{
    // Build seive by calling function.
    buildSeive(LENGTH);
    long long n;
    // Take inputs
    cout << "Enter the value of n: ";
    cin >> n;
    // Generate Fibonacci numbers.
    long long first = 0, second = 1, i;
    if (n < 1)
    {
        cout << "Enter a value greater than one.\n";
        return 1;
    }
    for (i = 1; i <= n; i++)
    {
        if (sieve.find(second) != sieve.end() || second % 5 == 0)
        {
            cout << 0 << ' ';
        }
        else
            cout << second << ' ';
        long long next = first + second;
        first = second;
        second = next;
    }
    return 0;
}
