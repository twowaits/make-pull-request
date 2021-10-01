#include <iostream>
using namespace std;
//if prime it returns true 
bool check_prime(int n){
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main(){
   int i, num;
   int a = 0, b = 1;
   int c = a + b;
   cin >> num;
   cout << b << " ";
   for(i = 3; i <= num+1; ++i) {
    if(c % 5 == 0){
        cout << 0 << " ";
    }
    else if(check_prime(c)){
        cout << 0 << " ";
    }
    else{
        cout << c << " ";
    }
    a = b;
    b = c;
    c = a+b;
  }
}
