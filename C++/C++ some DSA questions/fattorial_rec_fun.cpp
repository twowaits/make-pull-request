#include <iostream>
using namespace std;
int fact(int n)
{
                                         // base case
    // if(n==1)
    //     return n;
                                         // // recursive assumption
    // int subprob = fact(n-1);
                                         // // self work
    // return n*subprob;

    return (n <= 1) ? n : n * fact(n - 1);  // one liner
}
int main()
{
    int a;
    cin >> a;
    cout << fact(a);

    return 0;
}