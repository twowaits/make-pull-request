#include<iostream>
using namespace std;
bool isPrime(int &n){
    if(n<=1){
        return false;
    }
    for(int i=2;i*i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
void printFib(int &n){
    int f1=1;
  int f2=1;
  int f3 = f1+f2;
  for(int i=0; i<n; i++)
  {
    if(f1%5==0 || isPrime(f1))
      cout<<0<<" ";    
    else
      cout<<f1<<" ";
    f3 = f1 + f2;
    f1 = f2;
    f2 = f3;
  }
}
int main(){
    int n;
    cin>>n;
    printFib(n);
    return 0;
}