#include <bits/stdc++.h>
using namespace std;

 int prime(int n)
 {
     if (n <= 1)
     { return 0; }

     for (int i = 2; i < n; i++)
     {
         if(n % i == 0)
         {  return 1; }
     }
     return 0;
 }

 int main()
 {
    int i, n;
    int First = 0, Second = 1;
    int Third = First + Second;
    cin >> n;
    cout <<Second<< " ";
    for(i = 3; i <= n+1; i++)
    {
     if(Third % 5 == 0)
     {
         cout << 0 << " ";
     }
     else if(prime(Third) == 0)
     {
         cout << 0 << " ";
     }
     else
     {
         cout << Third << " ";
     }
     First = Second;
     Second = Third;
     Third = Second + First;
    }
    return 0;
  }
