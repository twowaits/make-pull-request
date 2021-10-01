#include <bits/stdc++.h>
#define ll long long
#define nl "\n"
using namespace std;

int main() {
    int n;
    cin>>n;

    if(n <= 0)
        return 0;

    if(n == 1) {
        cout << 1;
        return 0;
    }

    int a = 1,b = 1;
    cout<<a<<" "<<b<<" ";
    for(int i=0; i<n-2; i++) {
        int c = a + b;
        bool flag = true;

        for(int j=2; j*j<=c; j++) {
            if(c%j==0) {
                flag = false;
                break;
            }
        }
        a = b;
        b = c;

        if(flag || c % 5 == 0)
            cout<<0<<" ";
        else
            cout<<c<<" ";

    }
}
