#include <iostream>
#include <algorithm>
using namespace std;

void permutations(string str, int n, string res)
{
    if (n == 1)
    {
        cout << res + str << endl;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        permutations(str.substr(1), n - 1, res + str[0]);
        rotate(str.begin(), str.begin() + 1, str.end());
    }
}

int main()
{
    string str = "ABSG";
    string res;  

    permutations(str, str.size(), res);

    return 0;
}
