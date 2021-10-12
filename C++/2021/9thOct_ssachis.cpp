#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int factorial(int x){
      if(x<0){
        return 0;
    }
    if(x==0){
        return 1;
    }
 
    int fact=1;
for(int i=1;i<=x;i++){
    fact=fact*i;

}
return fact;

}
int gcdoffact(int m,int n){
    return (min(m,n));

}
int main(){

cout<<gcdoffact(5,120);
}
