//fibonacci series code by Manju Thakur(mthakur7)

#include <iostream>
using namespace std;

int isprime(int n){
  int i;
   int flag=1;
   if (n == 0 || n == 1) {
        flag =0;
    }
    else {
        for (i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                flag=0;
                break;
            }
        }
    }
    return flag;
}

int ismultiple(int n){
  if(n % 5 == 0)
  return 1;
  else
  return 0;
}
int main() {
    int n;
    int a = 1;
    int b = 1;
    int c = 0;

    cout << "Enter the number:";
    cin >> n;

    cout << "\nFibonacci Series for n is: ";

    for (int i = 1; i <= n; ++i) {
      
        if(i == 1) {
            cout << a << " ";
            continue;
        }
        if(i == 2) {
            cout << b << " ";
            continue;
        }
        c = a + b;
        a = b;
        b = c;

        if(isprime(c) || ismultiple(c))
        cout<<"0"<< " ";
        else
        cout << c << " ";

    }
    return 0;
}


