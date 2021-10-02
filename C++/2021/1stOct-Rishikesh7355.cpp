#include <iostream>
using namespace std;

bool prime(int a)
{
    if (a <= 1)
    {
        return false;
    }
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main(){
   int i, n;
   int num1 = 0, num2 = 1;
   int num3 = num1 + num2;
   cout<<"Enter no. of elements you want to see: ";
   cin >> n;
   cout<<"Series is: \n";
   cout << num2 << " ";
   for(i = 3; i <= n+1; ++i)
   {
    if(prime(num3))
    {
        cout << 0 << " ";
    }
    else if(num3 % 5 == 0)
    {
        cout << 0 << " ";
    }

    else
    {
        cout << num3 << " ";
    }
    num1 = num2;
    num2 = num3;
    num3 = num1 + num2;
  }
  return 0;
}
