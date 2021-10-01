// Added the code for fibonacci series upto n terms.
// Pavel
#include <bits/stdc++.h>
using namespace std;

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
   int n1 = 0, n2 = 1;
   int next = n1 + n2;
   cin >> num;
   cout << n2 << " ";
   for(i = 3; i <= num+1; ++i) {
    if(next % 5 == 0){
        cout << 0 << " ";
    }
    else if(check_prime(next)){
        cout << 0 << " ";
    }
    else{
        cout << next << " ";
    }
    n1 = n2;
    n2 = next;
    next = n1 + n2;
  }
}