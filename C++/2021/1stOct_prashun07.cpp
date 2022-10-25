// Add following functionalities to it :

// Take input the value of 'n', upto which you will print.
// -Print the Fibonacci Series upto n while replacing prime numbers, all multiples of 5 by 0.
// Sample Input :
// 12
// 27

// Sample Output :
// 1 1 0 0 0 8 0 21 34 0 0 144
// 1 1 0 0 0 8 0 21 34 0 0 144 0 377 0 987 0 2584 4181 0 10946 17711 0 46368 0 121393 196418

// ------Here is the code to add the above functionality.

#include<bits/stdc++.h>
using namespace std;
//is_prime function whil check either number x is prime or not
bool is_prime(int x)
{
    for (int i = 2; i <= x / 2;i++)
    {if(x%i==0)
            return false;
    }
    return true;
}
//replace_prime function
void replace_prime(vector<int>&dp,int n)
{
    for (int i = 2; i <= n;i++)
    { if(is_prime(dp[i]))
        {dp[i] = 0;
        }
     if(dp[i]%5==0)
         dp[i] = 0;
    }
}
int main()
{
    int n;//taking input n to print fibonacci number upto it
    cin >> n;
    //vector array to store fibonacci numbers;
    vector<int> dp(n + 1);
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i <= n;i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2]; //calculating fibonacci number
    }

    replace_prime(dp,n);
    for (int i = 0; i < n;i++)
{
    cout << dp[i] << " "; //printing fibonacci number
}
        return 0;
}