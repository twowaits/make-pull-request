#include <iostream>
using namespace std;

int main(){
  int a=1,b=1,c,n;
  cin>>n;
  if(n==1) cout<<1;
  else cout<<1<<" "<<1<<" "; 
 for(int i=3; i<=n; ++i){
  c=a+b;
  cout<<c<<" ";
  a=b;
  b=c;
 }return 0;
}
