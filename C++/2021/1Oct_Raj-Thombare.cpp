#include <iostream>
using namespace std;

int prime(int n){
    if (n == 0 || n == 1)
        return 0;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return 1;
    return 0;
}

int main(){
   int i, n;
   int a = 0, b = 1;
   int c = a + b;
   cin >> n;
   cout <<b<< " ";
   for(i = 3; i <= n+1; ++i) {
    if(c % 5 == 0){
        cout << 0 << " ";
    }
    else if(prime(c) == 0){
        cout << 0 << " ";
    }
    else{
        cout << c << " ";
    }
    a = b;
    b = c;
    c = b + a;
  }
}  