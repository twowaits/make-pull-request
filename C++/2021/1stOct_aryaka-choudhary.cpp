#include<bits/stdc++.h>
using namespace std;
 
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++){
        if (n % i == 0)
            return false;
    }
    return true;
}

void fib(int n)
{   
 int t1 = 1, t2 = 1, nextTerm = 0;
     for (int i = 1; i <= n; ++i) {
        if(i == 1) {
            cout << t1 <<" " ;
            continue;
        }
        if(i == 2) {
            cout << t2 << " ";
            continue;
        }   
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        if(isPrime(nextTerm)==false && nextTerm%5!=0){
        cout << nextTerm << " ";
        }
        else{
        cout<<"0"<<" ";
        }
     }
}

int main ()
{   
    int n;
    cin>>n;
    fib(n);
    return 0;
}
