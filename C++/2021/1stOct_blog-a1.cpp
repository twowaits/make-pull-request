#include <iostream>
using namespace std;

int main()
{
    int n, a = 0, b = 1, c;
    cin >> n;
    cout << b << " ";
    for(int i = 2; i <= n; i++)
    {
        c = a + b;
        int d = c/2;
        int cnt = 0;
        for(int j = 2; j <= d; j++)
        {
            if(c % j == 0)
            {
                cnt = 1;
                break;
            }
        }
        if((c != 1) && (cnt == 0 || c % 5 == 0))
            cout << 0 << " ";
        else
            cout << c << " ";
        a = b;
        b = c;
    }
    return 0;
}
