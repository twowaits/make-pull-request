#include <iostream>
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
   int first_term = 0, second_term = 1;
   int nextTerm = first_term + second_term;
   cin >> num;
   cout << second_term << " ";
   for(i = 3; i <= num+1; ++i) {
    if(nextTerm % 5 == 0){
        cout << 0 << " ";
    }
    else if(check_prime(nextTerm)){
        cout << 0 << " ";
    }
    else{
        cout << nextTerm << " ";
    }
    first_term = second_term;
    second_term = nextTerm;
    nextTerm = first_term + second_term;
  }
}
