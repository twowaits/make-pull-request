#include <bits/stdc++.h>

using namespace std;

long long int fact(int n){

  if(n==0){
      return 1;
  }
        return n*fact(n-1);
}

int main(){
  int a,b;
  cin>>a>>b;
  long long int ans=a>b? fact(b) : fact(a);
  cout<<ans<<endl;
  return 0;
}
  
