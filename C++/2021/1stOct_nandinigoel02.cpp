#include<iostream>
using namespace std;
bool check_prime(int a){
 if(a<1){
   return false;
 }
  for(int i=2;i<a;i++){
   if(a%i==0){
     return false;
   }
  }
  return true;
}
  int main(){
  int i,n,x=0,y=1;
  int z=x+y;
  cin>>n;
  cout<<y<<" ";
  for(i=3;i<=n+1;i++){
    if(check_prime(z)){
      cout<<0<<" ";
    }
    else if(z%5==0){
      cout<<0<<" ";
    }
    else cout<<z<<" ";
    x=y;
    y=z;
    z=x+y;
  }
  return 0;
}
