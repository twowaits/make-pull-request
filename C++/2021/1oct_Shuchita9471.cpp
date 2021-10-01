#include <bits/stdc++.h>

using namespace std;
int P(int NM)
{
    if (NM <= 1)
        return 0;
    for (int i = 2; i < NM; i++)
        if (NM % i == 0)
            return 1;
    return 0;
}
int main()
{
    int i, num, N1 = 0, N2 = 1;
    int N3 = N1 + N2;
    cin >> num;
    cout << N2 << " ";
    for (i = 3; i <= num + 1; ++i)       //if multiple of 5
    {
        if (N3 % 5 == 0)
        {
            cout << 0 << " ";
        }
        else if (P(N3) == 0)            //if prime
        {
            cout << "0" << " ";
        }
        else
        {
            cout << N3 << " ";
        }
        N1 = N2;
        N2 = N3;
        N3 = N2 + N1;
    }
}