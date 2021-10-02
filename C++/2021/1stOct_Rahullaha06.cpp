#include<iostream>
using namespace std;

bool isprime(int num){
    if (num == 0 || num == 1) {
        return false;
    }
    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void result(int n) {
   int arr[n];
//    int i;
   arr[0] = 1;
   arr[1] = 1;
   for (int i = 2; i < n; i++) {
      arr[i] = arr[i-1] + arr[i-2];
   }
   for (int i = 0; i < n; i++) {
      if(arr[i]%5==0 || isprime(arr[i])){
          arr[i]=0;
      }
   }
   for (int i = 0; i < n; i++) {
      cout<<arr[i]<<" ";
   }
}
int main () {
   int n;
   cin>>n;
   result(n);
   return 0;
}