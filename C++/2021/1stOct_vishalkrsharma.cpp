#include <bits/stdc++.h>

using namespace std;

// Function to check primality
int primeChecker(int num) {
  int i;
  for(i=2;i<=sqrt(num);i++) {
    if(num%i == 0) {
      return 0;
    }
  }
  return 1;
}

int main(void) {

  int n, n1=1, n2=1, n3, i;
  cin>>n;

  cout<<n1<<" "<<n2<<" ";

  for(i=2;i<n;i++) {
    n3=n2+n1;

    if(primeChecker(n3) || n3%5==0) {
      cout<<0<<" ";
    } else {
      cout<<n3<<" ";
    }

    n1=n2;
    n2=n3;
  }

  cout<<endl;

  return 0;
}