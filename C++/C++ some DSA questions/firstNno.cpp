#include <iostream>
using namespace std;
void printinc(int n)
{
    // base case
    if (n == 0)
        return;
        cout << n << endl;
    // recursive assumption
    printinc(n - 1);
    // self worl
    cout << n << endl;
}
int main()
{
    int a;
    cin >> a;
    printinc(a);

    return 0;
}