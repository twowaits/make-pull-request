#include<bits/stdc++.h>
using namespace std;

void printAns(vector<string>&ans) {
    for (string &x : ans) {
        for (char ch : x) {
            if (ch == ' ') {
                cout << ch;
            } else {
                cout << ch - '0';
            }
        } cout << endl;
    }
}

void solve() {
    cout << "Enter no of rows and cols separated by a space:" << endl;
    int n, m; cin >> n >> m;

    vector<string>ans(n, string (m, ' '));

    int i, j, dir, cnt = 1;

    if (n == 1) {
        for (int i = 1; i <= m; i++) {
            cout << i << " ";
        } cout << endl;
        return;
    }

    if (m == 1) {
        for (int i = 1; i <= n; i++) {
            cout << i << endl;
        }
        return;
    }

    if ( n <= m ) {
        i = 0; j = 0; dir = 1;

        while (j < m) {
            ans[i][j] = '0' + cnt;
            cnt++;
            i += dir;
            if (i >= n) {
                dir = -1;
                i -= 2;
            } else if (i < 0) {
                dir = 1;
                i += 2;
            }
            j++;
        }
        printAns(ans);
        return;
    }

    i = 0; j = 0; dir = 1;
    while (i < n) {
        ans[i][j] = '0' + cnt;
        cnt++;
        j += dir;
        if (j >= m) {
            dir = -1;
            j = m - 2;
        } else if (j < 0) {
            dir = 1;
            j = 1;
        }
        i++;
    }
    printAns(ans);
}


int main()
{
    solve();
    return 0;
}



