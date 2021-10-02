#include <iostream>

using namespace std;

bool isPrime(int N) { // return true is N is Prime
  for (int i = 2; i <= N / 2; i++) {
    if (N % i == 0)
      return false;
  }
  return true;
}

int main() {
  cout << "Input N: ";
  int N;
  cin >> N;
  int first = 1, second = 1;
  cout << "1 1 "; // start values
  for (int i = 3; i <= N; i++) {
    int next = first + second; //calc next number
    if ((isPrime(next) == true) || (next % 5 == 0)) //if next number prime or %5 ==0 - printing 0
      cout << "0 ";
    else
      cout << next << " "; //printing number 
    first = second;
    second = next;
  }
  return 0;
}
