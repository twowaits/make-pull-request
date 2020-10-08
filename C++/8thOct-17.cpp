#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int count = 1;

  for (int i = 1; i <= n; i++)
  {
    if (i != n)
    {
      for (int j = n - i; j > 0; j--)
      {
        cout << " ";
      }
      cout << "*";
      if (i > 1)
      {

        for (int k = 1; k <= count; k++)
        {
          cout << " ";
        }
        count += 2;
        cout << "*";
      }
      cout << endl;
    }
    if (i == n)
    {
      for (int i = 0; i < n; i++)
      {
        cout << "*"
             << " ";
      }
    }
  }
  cout << endl;
  return 0;
}
