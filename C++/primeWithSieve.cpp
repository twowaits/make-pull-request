// Sieve of Eratosthenes

/* Constraints:
1 <= test<= 100
1 <= num <= 10000 */

#include <iostream>
#include <vector>
using namespace std;

//size of prime sieve
#define MAX 10000

//function to create prime sieve
void printPrime(int n)
{
    int prime[MAX] = {0}; //all indexes are marked as non-primes

    for (int i = 3; i < MAX; i += 2)
    {
        prime[i] = 1; //all odd indexes are marked as prime
    }

    for (int i = 3; i < MAX; i += 2)
    {
        for (int j = i * i; j < MAX; j += i)
            prime[j] = 0; //all indexed which are multiple of i are marked as non-primes
    }

    prime[2] = 1; //index 2 is marked as prime

    for (int i = 2; i <= n; i++)
    {
        if (prime[i])
            cout << i << " ";
    }
}

//main function
int main()
{
    int test, num;
    cin >> test;
    while (test--)
    {
        cin >> num;
        printPrime(num);
        cout << endl;
    }
    return 0;
}