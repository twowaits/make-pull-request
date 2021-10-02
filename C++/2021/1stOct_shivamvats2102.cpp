/*------------------Shivam Sharma----------------*/
 
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds;
#define FIO ios::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define int long long
#define vll vector<int>
#define vllb vector<bool>
#define uset unordered_set<int>
#define pb push_back
#define ff first
#define ss second
#define mod 1000000007
using namespace std;

typedef tree<
int,
null_type,
less<int>,
rb_tree_tag,
tree_order_statistics_node_update>
ordered_set;

bool isPrime(int n)
{
    
    if (n <= 1)
        return false;

    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;

    return true;
}

int fibonacci(int n)
{
    int a = 1, b = 1, c, i;
    
    if( n == 0)
        return 0;
    else if ( n == 1 )
    {
        cout << "1 ";
        return 0;
    }
   
    cout << "1 1 ";
    for(i = 3; i <= n; i++)
    {
        c = a + b;
        
        if ( c % 5 != 0 && !isPrime( c ))
        cout << c << " ";
        else
        cout << "0 ";
       
        a = b;
        b = c;
    }
    return b;
}

// Driver code
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    fibonacci(n);
    return 0;
}
