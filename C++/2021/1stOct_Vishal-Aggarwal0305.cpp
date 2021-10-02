#include <iostream>
using namespace std;

//checking for prime numbers
bool isPrime(int num){
    if (num <= 1)
        return false;
    for (int i = 2; i < num; i++)
        if (num % i == 0)
            return false;
    return true;
}

//main code
int main(){
   int i, num;
   int f1 = 0, f2 = 1;
   int next = f1 + f2;
   cin >> num;
   cout << f2<< " ";

  //printing values according to conditions
   for(i = 3; i <= num+1; ++i) {
    if(next % 5 == 0){
        cout << 0 << " ";
    }
    else if(isPrime(next)){
        cout << 0 << " ";
    }
    else{
        cout << next << " ";
    }
    f1=f2;
    f2=next;
    next = f1 + f2;
  }
}
