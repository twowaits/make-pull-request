#include <iostream>
using namespace std;

int GreatestCommonDivisor(int n1, int n2)
{

    int result;

    if (n1 == 0)
        return n2;
    if (n2 == 0)
        return n1;

    // base case
    if (n1 == n2)
        return n1;

    // a is greater
    if (n1 > n2)
        return GreatestCommonDivisor(n1 - n2, n2);

    return GreatestCommonDivisor(n2, n2 - n1);
}

void main()
{
    int n1, n2;

    cin >> n1 >> n2;

    int result = GreatestCommonDivisor(n1, n2);

    cout << result << endl;
}