#include<iostream>
using namespace std;



int main () {
   int n;
   cin>>n;
   
   int f[n+1];
   int i;
   f[0] = 0;
   f[1] = 1;
   for (i = 2; i <=n; i++) {
      f[i] = f[i-1] + f[i-2];
   }
   for (i = 2; i <=n; i++) {
     if(f[i]%5==0){
        f[i]=0;
     }
   }
    for (i = 2; i <=n; i++){
    int c=0;

    if (f[i] == 0 || f[i] == 1) {
        c+=1;
    }
    else {
        for (int j = 2; j < f[i] ; j++) {
            if (f[i] % j == 0) {
                c++;
                break;
            }
        }
    }
    if (c==0){
        f[i]=0;
    }} 


   
   for (int i = 1; i <= n; i++) {
      cout<<f[i]<<" ";
   }
   return 0;
}