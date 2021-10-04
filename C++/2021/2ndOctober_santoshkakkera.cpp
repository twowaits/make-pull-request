#include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<string>
#define ll long long int
#define loop(a,n) for(int i=a;i<n;i++)
using namespace std;
 
bool isPrime(int n){
    if(n==1) return false;
    if(n==2) return true;
    for(int i=2;i*i<=n;i++){
    if(n%i==0)return false;
  }
   return true;
}

void solve(){
   ll r,v,i,j,temp,temp2;
     cout<<"enter the no.of rows"<<endl;
     cin>>r;
     cout<<"enter the no.of values"<<endl;
     cin>>v;
      cout<<endl;
      temp=(r-1)*2;
     for( i=0;i<r;i++){
       for(j=0;j<v;j++){
          temp2=(j%temp);

         if(temp2>=r){
           temp2-=r;
           temp2=((r-1)-(temp2+1));
         }
         if(temp2==i){
           cout<<j+1;

         }
         else {
           cout<<" ";
         }
       }
       cout<<endl;
     }
 
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
return 0;
}
 
