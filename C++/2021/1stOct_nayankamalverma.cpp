#include<bits/stdc++.h>

using namespace std;


bool check_prime_num(int n){
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main(){
  int a=0,b=1,c=a+b,num;
  cin>>num;
  cout<<b<<" ";
for(int i=3;i<=num+1;i++){
  if(c % 5 == 0 || check_prime_num(c)){
        cout << 0 << " ";
    }
  else{
        cout << c << " ";
  }
  a=b;
  b=c;
  c=a+b;
}
  return 0;
  }
