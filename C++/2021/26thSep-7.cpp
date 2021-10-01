//program by Amit giri
#include <bits/stdc++.h>
using namespace std;

void int_to_binary(int n)
{
    queue<string> q;
    q.push("1");
    while (n--)
    {
        string s1 = q.front();
        q.pop();
        cout << s1 << " , ";
        string s2 = s1;
        q.push(s1.append("0"));
        q.push(s2.append("1"));
    }
}

int main()
{
    int n;
    cout<<"enter number upto which you want binary numbers : ";
    cin>>n;
    int_to_binary(n);
    return 0;
}
