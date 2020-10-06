#include<iostream>
using namespace std;

int main () {
    int n, sum, a = 1, b = 1, flag;
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for (int i = 2; i < n; i++) {
        flag = 0;
        sum = a+b;
        if (sum%5==0) cout<<"0 ";
        else {
            for (int j = 2; j < sum/2; j++) {
                if (sum % j == 0) {
                    cout<<sum<<" ";
                    flag = 1;
                    break;
                }
            }
            if (flag == 0) cout<<"0 ";
        }
        a = b;
        b = sum;
    }
    return 0;
}
