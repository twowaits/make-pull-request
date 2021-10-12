// Suyog Patil

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vsort(v) sort(v.begin(), v.end())
#define test_cases \
    int T;         \
    cin >> T;      \
    while (T--)

void code()
{
    int r, c;
    cin >> r >> c;

    int cap[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cap[i][j] = 0;
        }
    }

    int i = 0, j = 0;
    bool flag = 0;
    int count = 1;

    while (count <= c)
    {
        for (; i < r; i++, j++)
        {
            if (j >= c)
            {
                flag = 1;
                break;
            }
            cap[i][j] = count;
            count++;
        }
        if (flag)
        {
            break;
        }
        for (i = r - 2; i >= 0; i--, j++)
        {
            if (j >= c)
            {
                flag = 1;
                break;
            }
            cap[i][j] = count;
            count++;
        }
        i = 1;
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (cap[i][j] > 0)
            {
                cout << cap[i][j];
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

signed main()
{
    code();
}