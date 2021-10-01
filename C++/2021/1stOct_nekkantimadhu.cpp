#include <bits/stdc++.h>
using namespace std;
 
void FibonacciNumbers(int n) {
    int f1 = 1, f2 = 1, i;
 
    if (n < 1){
        return;
    }
        
    cout << f1 << " ";
    
    for (i = 1; i < n; i++) {
        if(f2 % 5 == 0){
            cout << 0 << " ";
        }
        else {
            cout << f2 << " ";
        }
        
        int sum = f1 + f2;
        f1 = f2;
        f2 = sum;
    }
}
 

int main(){
    int n;
    
    while(cin>>n){
        FibonacciNumbers(n);
    }
   
    
    return 0;
}
 