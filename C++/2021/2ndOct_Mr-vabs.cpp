#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cin>>m>>n;
    int pattern[m][n];
    memset(pattern, 0, sizeof(pattern));
    int p = 0, q = 0, r = 1;
    bool updown = true;
    while (q < n)
    {
    	pattern[p][q] = r++;
        (updown) ? p++ : p--;
        if (p == m)
        {
            p = m - 2;
            updown = 0;
        }
        else if (p == -1)
        {
            p = 1;
            updown = 1;
        }
        q++;
    }
    for (int p = 0; p < m; p++)
    {
        for (int q = 0; q < n; q++)
        {
            (pattern[p][q]) ? cout<<pattern[p][q]<< " " : cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
